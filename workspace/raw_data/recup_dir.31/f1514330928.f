family;
    req.hostname = hostname;
    req.oncomplete = all ? onlookupall : onlookup;
    req.resolve = resolve;
    req.reject = reject;

    const err = getaddrinfo(req, toASCII(hostname), family, hints, verbatim);

    if (err) {
      reject(dnsException(err, 'getaddrinfo', hostname));
    } else if (hasObserver('dns')) {
      const detail = {
        hostname,
        family,
        hints,
        verbatim,
      };
      startPerf(req, kPerfHooksDnsLookupContext, { type: 'dns', name: 'lookup', detail });
    }
  });
}

const validFamilies = [0, 4, 6];
function lookup(hostname, options) {
  let hints = 0;
  let family = 0;
  let all = false;
  let verbatim = getDefaultVerbatim();

  // Parse arguments
  if (hostname) {
    validateString(hostname, 'hostname');
  }

  if (typeof options === 'number') {
    validateOneOf(options, 'family', validFamilies);
    family = options;
  } else if (options !== undefined && typeof options !== 'object') {
    throw new ERR_INVALID_ARG_TYPE('options', ['integer', 'object'], options);
  } else {
    if (options?.hints != null) {
      validateNumber(options.hints, 'options.hints');
      hints = options.hints >>> 0;
      validateHints(hints);
    }
    if (options?.family != null) {
      validateOneOf(options.family, 'options.family', validFamilies);
      family = options.family;
    }
    if (options?.all != null) {
      validateBoolean(options.all, 'options.all');
      all = options.all;
    }
    if (options?.verbatim != null) {
      validateBoolean(options.verbatim, 'options.verbatim');
      verbatim = options.verbatim;
    }
  }

  return createLookupPromise(family, hostname, all, hints, verbatim);
}


function onlookupservice(err, hostname, service) {
  if (err) {
    this.reject(dnsException(err, 'getnameinfo', this.host));
    return;
  }

  this.resolve({ hostname, service });
  if (this[kPerfHooksDnsLookupServiceContext] && hasObserver('dns')) {
    stopPerf(this, kPerfHooksDnsLookupServiceContext, { detail: { hostname, service } });
  }
}

function createLookupServicePromise(hostname, port) {
  return new Promise((resolve, reject) => {
    const req = new GetNameInfoReqWrap();

    req.hostname = hostname;
    req.port = port;
    req.oncomplete = onlookupservice;
    req.resolve = resolve;
    req.reject = reject;

    const err = getnameinfo(req, hostname, port);

    if (err)
      reject(dnsException(err, 'getnameinfo', hostname));
    else if (hasObserver('dns')) {
      startPerf(req, kPerfHooksDnsLookupServiceContext, {
        type: 'dns',
        name: 'lookupService',
        detail: {
          host: hostname,
          port
        }
      });
    }
  });
}

function lookupService(address, port) {
  if (arguments.length !== 2)
    throw new ERR_MISSING_ARGS('address', 'port');

  if (isIP(address) === 0)
    throw new ERR_INVALID_ARG_VALUE('address', address);

  validatePort(port);

  return createLookupServicePromise(address, +port);
}


function onresolve(err, result, ttls) {
  if (err) {
    this.reject(dnsException(err, this.bindingName, this.hostname));
    return;
  }

  if (ttls && this.ttl)
    result = ArrayPrototypeMap(
      result, (address, index) => ({ address, ttl: ttls[index] }));

  this.resolve(result);
  if (this[kPerfHooksDnsLookupResolveContext] && hasObserver('dns')) {
    stopPerf(this, kPerfHooksDnsLookupResolveContext, { detail: { result } });
  }
}

function createResolverPromise(resolver, bindingName, hostname, ttl) {
  return new Promise((resolve, reject) => {
    const req = new QueryReqWrap();

    req.bindingName = bindingName;
    req.hostname = hostname;
    req.oncomplete = onresolve;
    req.resolve = resolve;
    req.reject = reject;
    req.ttl = ttl;

    const err = resolver._handle[bindingName](req, toASCII(hostname));

    if (err)
      reject(dnsException(err, bindingName, hostname));
    else if (hasObserver('dns')) {
      startPerf(req, kPerfHooksDnsLookupResolveContext, {
        type: 'dns',
        name: bindingName,
        detail: {
          host: hostname,
          ttl
        }
      });
    }
  });
}

function resolver(bindingName) {
  function query(name, options) {
    validateString(name, 'name');

    const ttl = !!(options && options.ttl);
    return createResolverPromise(this, bindingName, name, ttl);
  }

  ObjectDefineProperty(query, 'name', { __proto__: null, value: bindingName });
  return query;
}

function resolve(hostname, rrtype) {
  let resolver;

  if (rrtype !== undefined) {
    validateString(rrtype, 'rrtype');

    resolver = resolveMap[rrtype];

    if (typeof resolver !== 'function')
      throw new ERR_INVALID_ARG_VALUE('rrtype', rrtype);
  } else {
    resolver = resolveMap.A;
  }

  return ReflectApply(resolver, this, [hostname]);
}

// Promise-based resolver.
const { Resolver, resolveMap } = createResolverClass(resolver);
Resolver.prototype.resolve = resolve;

function defaultResolverSetServers(servers) {
  const resolver = new Resolver();

  resolver.setServers(servers);
  setDefaultResolver(resolver);
  bindDefaultResolver(module.exports, Resolver.prototype);
}

module.exports = {
  lookup,
  lookupService,
  Resolver,
  setDefaultResultOrder,
  setServers: defaultResolverSetServers,

  // ERROR CODES
  NODATA,
  FORMERR,
  SERVFAIL,
  NOTFOUND,
  NOTIMP,
  REFUSED,
  BADQUERY,
  BADNAME,
  BADFAMILY,
  BADRESP,
  CONNREFUSED,
  TIMEOUT,
  EOF,
  FILE,
  NOMEM,
  DESTRUCTION,
  BADSTR,
  BADFLAGS,
  NONAME,
  BADHINTS,
  NOTINITIALIZED,
  LOADIPHLPAPI,
  ADDRGETNETWORKPARAMS,
  CANCELLED,
};
bindDefaultResolver(module.exports, Resolver.prototype);

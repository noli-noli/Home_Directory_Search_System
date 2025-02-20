ateViewNode(node.label, totalWeight, selfWeight, head);
    if (viewParent) {
      viewParent.addChild(viewNode);
    } else {
      head = viewNode;
    }
    return viewNode;
  });
  const view = this.createView(head);
  return view;
};


/**
 * Factory method for a profile view.
 *
 * @param {ProfileView.Node} head View head node.
 * @return {ProfileView} Profile view.
 */
ViewBuilder.prototype.createView = head => new ProfileView(head);


/**
 * Factory method for a profile view node.
 *
 * @param {string} internalFuncName A fully qualified function name.
 * @param {number} totalTime Amount of time that application spent in the
 *     corresponding function and its descendants (not that depending on
 *     profile they can be either callees or callers.)
 * @param {number} selfTime Amount of time that application spent in the
 *     corresponding function only.
 * @param {ProfileView.Node} head Profile view head.
 * @return {ProfileView.Node} Profile view node.
 */
ViewBuilder.prototype.createViewNode = (
    funcName, totalTime, selfTime, head) =>
  new ProfileView.Node(
      funcName, totalTime, selfTime, head)
;


/**
 * Creates a Profile View object. It allows to perform sorting
 * and filtering actions on the profile.
 *
 * @param {ProfileView.Node} head Head (root) node.
 * @constructor
 */
export function ProfileView(head) {
  this.head = head;
};


/**
 * Sorts the profile view using the specified sort function.
 *
 * @param {function(ProfileView.Node,
 *     ProfileView.Node):number} sortFunc A sorting
 *     functions. Must comply with Array.sort sorting function requirements.
 */
ProfileView.prototype.sort = function(sortFunc) {
  this.traverse(function (node) {
    node.sortChildren(sortFunc);
  });
};


/**
 * Traverses profile view nodes in preorder.
 *
 * @param {function(ProfileView.Node)} f Visitor function.
 */
ProfileView.prototype.traverse = function(f) {
  const nodesToTraverse = new ConsArray();
  nodesToTraverse.concat([this.head]);
  while (!nodesToTraverse.atEnd()) {
    const node = nodesToTraverse.next();
    f(node);
    nodesToTraverse.concat(node.children);
  }
};


/**
 * Constructs a Profile View node object. Each node object corresponds to
 * a function call.
 *
 * @param {string} internalFuncName A fully qualified function name.
 * @param {number} totalTime Amount of time that application spent in the
 *     corresponding function and its descendants (not that depending on
 *     profile they can be either callees or callers.)
 * @param {number} selfTime Amount of time that application spent in the
 *     corresponding function only.
 * @param {ProfileView.Node} head Profile view head.
 * @constructor
 */
ProfileView.Node = function(
    internalFuncName, totalTime, selfTime, head) {
  this.internalFuncName = internalFuncName;
  this.totalTime = totalTime;
  this.selfTime = selfTime;
  this.head = head;
  this.parent = null;
  this.children = [];
};


/**
 * Returns a share of the function's total time in its parent's total time.
 */
ProfileView.Node.prototype.__defineGetter__(
    'parentTotalPercent',
    function() { return this.totalTime /
      (this.parent ? this.parent.totalTime : this.totalTime) * 100.0; });


/**
 * Adds a child to the node.
 *
 * @param {ProfileView.Node} node Child node.
 */
ProfileView.Node.prototype.addChild = function(node) {
  node.parent = this;
  this.children.push(node);
};


/**
 * Sorts all the node's children recursively.
 *
 * @param {function(ProfileView.Node,
 *     ProfileView.Node):number} sortFunc A sorting
 *     functions. Must comply with Array.sort sorting function requirements.
 */
ProfileView.Node.prototype.sortChildren = function(
    sortFunc) {
  this.children.sort(sortFunc);
};

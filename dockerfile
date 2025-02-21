#ベースイメージの指定(今回はubuntu:24.04)
# FROM ubuntu:24.04
FROM python:3.9

#-----------------基本設定-----------------
#docker-composeから環境変数を受け取る
ARG http_tmp 
ARG https_tmp

#コンテナに環境変数の設定を追加
ENV http_proxy=$http_tmp
ENV https_proxy=$https_tmp

#タイムゾーンを東京に設定
ENV TZ=Asia/Tokyo
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

#パッケージリストの更新
RUN apt update -y && apt upgrade -y

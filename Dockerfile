FROM ubuntu:focal
MAINTAINER Hamid Ebadi
RUN apt-get update && apt-get -y install sudo

ADD . esmini-pybind11
RUN cd esmini-pybind11/ && ./install_req.sh && ./dev-building-bindings.sh


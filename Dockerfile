FROM ubuntu:focal
MAINTAINER Hamid Ebadi
RUN apt-get update && apt-get -y install sudo

ADD install_req.sh install_req.sh
RUN ./install_req.sh

ADD build_esmini.sh build_esmini.sh
RUN ./build_esmini.sh


ADD . esmini-pybind11
RUN cd esmini-pybind11/ && ./dev-building-bindings.sh


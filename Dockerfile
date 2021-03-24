FROM ubuntu:trusty

MAINTAINER Hamid Ebadi

RUN DEBIAN_FRONTEND=noninteractive apt-get -y dist-upgrade && \
    apt-get -y install software-properties-common

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get -y install \
    make \
    git \
    g++-4.8 \
    python3.5 \
    python3-pip \
    python3.5-dev

RUN ls

RUN git clone https://github.com/ebadi/esmini-pybind11.git  --recursive
RUN cd esmini-pybind11/ ; ./dev-building-bindings.sh
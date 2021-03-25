FROM ubuntu:focal
MAINTAINER Hamid Ebadi

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get -y install \
    make \
    git \
    g++ \
    python3.8 \
    python3-pip \
    python3.8-dev

# Binder req
RUN DEBIAN_FRONTEND=noninteractive apt-get -y install clang-10 llvm-10 libclang-10-dev llvm-10-dev cmake gcc

RUN pip3 install pybind11[global]

# e1e4227
RUN git clone https://github.com/RosettaCommons/binder.git; cd binder; cmake CMakeLists.txt -DCMAKE_INSTALL_PREFIX:PATH=~/binder/; make; make install; cd ..

ADD . esmini-pybind11

RUN DEBIAN_FRONTEND=noninteractive apt-get -y install libopenscenegraph-dev

# RUN git clone https://github.com/ebadi/esmini-pybind11.git  --recursive
RUN cd esmini-pybind11/ ; ./dev-building-bindings.sh

RUN pip3 install -U sphinx
#!/bin/bash

sudo DEBIAN_FRONTEND=noninteractive  apt-get update && apt-get -y install \
    make \
    git \
    g++ \
    python3.8 \
    python3-pip \
    python3.8-dev

sudo DEBIAN_FRONTEND=noninteractive  apt-get -y install libopenscenegraph-dev

pip3 install pybind11[global]
pip3 install -U sphinx

# esmini dependencies
sudo DEBIAN_FRONTEND=noninteractive  apt-get install build-essential git pkg-config libgl1-mesa-dev libpthread-stubs0-dev libjpeg-dev libxml2-dev libpng-dev libtiff5-dev libgdal-dev libpoppler-dev libdcmtk-dev libgstreamer1.0-dev libgtk2.0-dev libcairo2-dev libpoppler-glib-dev libxrandr-dev libxinerama-dev curl cmake

# esmini additional dependencies
sudo DEBIAN_FRONTEND=noninteractive apt-get -y install libxrandr-dev libxinerama libxinerama-dev libfontconfig1-dev

# Binder dependencies
sudo DEBIAN_FRONTEND=noninteractive apt-get -y install clang-10 llvm-10 libclang-10-dev llvm-10-dev cmake gcc
# e1e4227
# if this fails because of not finding pybind11, it is probably because the environemnt is not ready. Try to logout/restart
git clone https://github.com/RosettaCommons/binder.git; cd binder; cmake CMakeLists.txt -DCMAKE_INSTALL_PREFIX:PATH=~/binder/ ;  make; make install; cd ..



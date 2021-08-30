#!/bin/bash

git clone https://github.com/ebadi/esmini.git
mkdir build
cd build
cmake ../esmini/
cmake --build . --config Debug --target install
cd ..

mkdir esmini/build
cd esmini/build
cmake ../
cmake --build . --config Debug --target install
cd ../..

#!/bin/bash

cd esmini

mkdir build
cd build
cmake ../ -DUSE_OSG=true -DCMAKE_BUILD_TYPE=Release
cmake --build . --config Release --target install
cd ../

cd ../

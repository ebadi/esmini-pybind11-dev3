#!/bin/bash

cd esmini

if [ ! -d "build" ]
then
  mkdir build
  cd build
  cmake ../ -DUSE_OSG=true -DCMAKE_BUILD_TYPE=Release
  cmake --build . --config Release --target install
  cd ../
fi

cd ../

pip3 install . ;




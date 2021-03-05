#!/bin/bash

IPATHS=" -Iesmini/externals/pugixml/ -Iesmini/EnvironmentSimulator/Modules/CommonMini/ -Iesmini/EnvironmentSimulator/Modules/RoadManager   -Iesmini/EnvironmentSimulator/Modules/Controllers  -Iesmini/EnvironmentSimulator/Modules/PlayerBase -Iesmini/EnvironmentSimulator/Modules/ScenarioEngine/SourceFiles/  -Iesmini/EnvironmentSimulator/Modules/ScenarioEngine/OSCTypeDefs/ -Iesmini/EnvironmentSimulator/Modules/ViewerBase -Iesmini/EnvironmentSimulator/Libraries/esminiLib/  -I/home/wave/repositories/esmini-pybind11/esmini/bin/ "
export LD_LIBRARY_PATH=$PWD/esmini/bin

#MYMODULE=roadmanager
#rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
#/home/wave/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind $MYMODULE  --single-file   --config $MYMODULE.cfg  $PWD/src/$MYMODULE.hpp  -- -std=c++11 -DNDEBUG $IPATHS
## This overwrites our modified version of src/roadmanager/pyroadmanager.cpp
#git diff src/roadmanager/pyroadmanager.cpp
#git checkout src/roadmanager/pyroadmanager.cpp
##
#MYMODULE=scenarioengine
#rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
#/home/wave/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind $MYMODULE  --single-file  --config $MYMODULE.cfg  $PWD/src/$MYMODULE.hpp  -- -std=c++11 -DNDEBUG $IPATHS
#
#
#MYMODULE=playerbase
#rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
#/home/wave/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind $MYMODULE  --single-file  --config $MYMODULE.cfg  $PWD/src/x$MYMODULE.hpp  -- -std=c++11 -DNDEBUG $IPATHS

MYMODULE=esminilib
rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
/home/wave/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind "" --single-file  --config $MYMODULE.cfg  $PWD/src/x$MYMODULE.hpp  -- -std=c++17 -DNDEBUG $IPATHS


pip3 install . ;


#python3 -c "import pyroadmanager.roadmanager; print(dir(pyroadmanager.roadmanager));"
#python3 -c "import pyscenarioengine.scenarioengine; print(dir(pyscenarioengine.scenarioengine));"
#python3 -c "import pyplayerbase; print(dir(pyplayerbase.ScenarioPlayer));"

python3 -c "import pyesminilib; print(dir(pyesminilib));"
#pip3 install -U sphinx
#cd docs
#make html

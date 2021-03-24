#!/bin/bash

cd $PWD
if [ ! -d "binder" ]
then
  # e1e4227
  git clone https://github.com/RosettaCommons/binder.git
  cd binder
  cmake CMakeLists.txt -DCMAKE_INSTALL_PREFIX:PATH=~/binder/
  make
  make install
fi


cd $PWD
IPATHS=" -Iesmini/externals/pugixml/ -Iesmini/EnvironmentSimulator/Modules/CommonMini/ -Iesmini/EnvironmentSimulator/Modules/RoadManager -Iesmini/EnvironmentSimulator/Modules/Controllers  -Iesmini/EnvironmentSimulator/Modules/PlayerBase -Iesmini/EnvironmentSimulator/Modules/ScenarioEngine/SourceFiles/  -Iesmini/EnvironmentSimulator/Modules/ScenarioEngine/OSCTypeDefs/ -Iesmini/EnvironmentSimulator/Modules/ViewerBase -Iesmini/EnvironmentSimulator/Libraries/esminiLib/  -Iesmini/EnvironmentSimulator/Libraries/esminiRMLib/ -I$PWD/esmini-pybind11/esmini/bin/ "
export LD_LIBRARY_PATH=$PWD/esmini/bin

MYMODULE=roadmanager
rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
~/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind $MYMODULE  --single-file   --config $PWD/src/py$MYMODULE.cfg  $PWD/src/py$MYMODULE.hpp  -- -std=c++17 -DNDEBUG $IPATHS
## This overwrites our modified version of src/roadmanager/pyroadmanager.cpp
git diff src/roadmanager/pyroadmanager.cpp
git checkout src/roadmanager/pyroadmanager.cpp

MYMODULE=scenarioengine
rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
~/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind $MYMODULE  --single-file  --config $PWD/src/py$MYMODULE.cfg  $PWD/src/py$MYMODULE.hpp  -- -std=c++17 -DNDEBUG $IPATHS

MYMODULE=playerbase
rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
~/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind $MYMODULE  --single-file  --config $PWD/src/py$MYMODULE.cfg  $PWD/src/py$MYMODULE.hpp  -- -std=c++17 -DNDEBUG $IPATHS

MYMODULE=viewerbase
rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
~/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind viewer --single-file  --config $PWD/src/py$MYMODULE.cfg  $PWD/src/py$MYMODULE.hpp  -- -std=c++17 -DNDEBUG $IPATHS

MYMODULE=controller
rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
~/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind scenarioengine --single-file  --config $PWD/src/py$MYMODULE.cfg  $PWD/src/py$MYMODULE.hpp  -- -std=c++17 -DNDEBUG $IPATHS

MYMODULE=esminilib
rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
~/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind "" --single-file  --config $PWD/src/py$MYMODULE.cfg  $PWD/src/py$MYMODULE.hpp  -- -std=c++17 -DNDEBUG $IPATHS

MYMODULE=esminirmlib
rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
~/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind "" --single-file  --config $PWD/src/py$MYMODULE.cfg  $PWD/src/py$MYMODULE.hpp  -- -std=c++17 -DNDEBUG $IPATHS

cd $PWD
pip3 install . ;

python3 -c "import pyroadmanager.roadmanager; print(dir(pyroadmanager.roadmanager));"
python3 -c "import pyscenarioengine.scenarioengine; print(dir(pyscenarioengine.scenarioengine));"
python3 -c "import pyplayerbase; print(dir(pyplayerbase.ScenarioPlayer));"
python3 -c "import pyviewerbase; print(dir(pyviewerbase.viewer));"
python3 -c "import pycontroller; print(dir(pycontroller.scenarioengine));"

python3 -c "import pyesminilib; print(dir(pyesminilib));"
python3 -c "import pyesminirmlib; print(dir(pyesminirmlib));"

#pip3 install -U sphinx
# cd docs
# make html

cd $PWD
./prod-without-rebuilding-bindings.sh
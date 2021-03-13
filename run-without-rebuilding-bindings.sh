#!/bin/bash

cd esmini
mkdir build
cd build
cmake ../ -DUSE_OSG=true -DCMAKE_BUILD_TYPE=Release
cmake --build . --config Release --target install
cd ../../

IPATHS=" -Iesmini/externals/pugixml/ -Iesmini/EnvironmentSimulator/Modules/CommonMini/ -Iesmini/EnvironmentSimulator/Modules/RoadManager   -Iesmini/EnvironmentSimulator/Modules/Controllers  -Iesmini/EnvironmentSimulator/Modules/PlayerBase -Iesmini/EnvironmentSimulator/Modules/ScenarioEngine/SourceFiles/  -Iesmini/EnvironmentSimulator/Modules/ScenarioEngine/OSCTypeDefs/ -Iesmini/EnvironmentSimulator/Modules/ViewerBase -Iesmini/EnvironmentSimulator/Libraries/esminiLib/  -Iesmini/EnvironmentSimulator/Libraries/esminiRMLib/ -I/home/wave/repositories/esmini-pybind11/esmini/bin/ "
export LD_LIBRARY_PATH=$PWD/esmini/bin

pip3 install . ;

python3 -c "import pyroadmanager.roadmanager; print(dir(pyroadmanager.roadmanager));"
python3 -c "import pyscenarioengine.scenarioengine; print(dir(pyscenarioengine.scenarioengine));"
python3 -c "import pyplayerbase; print(dir(pyplayerbase.ScenarioPlayer));"
python3 -c "import pyviewerbase; print(dir(pyviewerbase.viewer));"
python3 -c "import pycontroller; print(dir(pycontroller.scenarioengine));"

python3 -c "import pyesminilib; print(dir(pyesminilib));"
python3 -c "import pyesminirmlib; print(dir(pyesminirmlib));"

#pip3 install -U sphinx
cd docs
make html

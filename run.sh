# roadmanager
# scenarioengine
# controller
# commonmini
# ---------------------------
IPATHS=" -Iesmini/externals/pugixml/ -Iesmini/EnvironmentSimulator/Modules/CommonMini/ -Iesmini/EnvironmentSimulator/Modules/RoadManager   -Iesmini/EnvironmentSimulator/Modules/Controllers  -Iesmini/EnvironmentSimulator/Modules/PlayerBase -Iesmini/EnvironmentSimulator/Modules/ScenarioEngine/SourceFiles/  -Iesmini/EnvironmentSimulator/Modules/ScenarioEngine/OSCTypeDefs/ -Iesmini/EnvironmentSimulator/Modules/ViewerBase -Iesmini/EnvironmentSimulator/Libraries/esminiLib/  -I/home/wave/repositories/esmini-pybind11/esmini/bin/ "
MYMODULE=roadmanager
rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
/home/wave/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind $MYMODULE  --single-file   --config $MYMODULE.cfg  $PWD/src/$MYMODULE.hpp  -- -std=c++11 -DNDEBUG $IPATHS
pip3 install . ;
python3 -c "import pyroadmanager; print(dir());"


MYMODULE=scenarioengine
rm -rf $PWD/src/$MYMODULE ;  mkdir  $PWD/src/$MYMODULE
/home/wave/binder/bin/binder --root-module py$MYMODULE --prefix $PWD/src/$MYMODULE --bind $MYMODULE  --single-file  --config $MYMODULE.cfg  $PWD/src/$MYMODULE.hpp  -- -std=c++11 -DNDEBUG $IPATHS
pip3 install . ;
python3 -c "import pyscenarioengine; print(dir());"


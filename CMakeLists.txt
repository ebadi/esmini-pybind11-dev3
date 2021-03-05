cmake_minimum_required(VERSION 3.4...3.18)
project(whatever)
add_subdirectory(pybind11)
#python3 -c "from distutils.sysconfig import get_python_inc; print(get_python_inc())"
#/usr/include/python3.8



set(INCLUDE_DIRS
${CMAKE_CURRENT_SOURCE_DIR}/pybind11/include/
/usr/include/python3.8
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Libraries/esminiLib/
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Libraries/esminiRMLib/
${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/
${CMAKE_CURRENT_SOURCE_DIR}/src/
${CMAKE_CURRENT_SOURCE_DIR}/src/roadmanager/
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ScenarioEngine/SourceFiles/
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ScenarioEngine/OSCTypeDefs/
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/Controllers/
${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/OSI/linux/include/
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Applications/replayer/
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/PlayerBase/
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ViewerBase/
)

include_directories(${INCLUDE_DIRS})
find_package(PythonLibs)
include_directories(${PYTHON_INCLUDE_DIRS})
link_libraries(
-L${CMAKE_CURRENT_SOURCE_DIR}/esmini/bin/
-L{CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Libraries/esminiLib/
-L{CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Libraries/esminiRMLib/
-L{CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/
-L${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ViewerBase/
-lesminiLib
-lesminiRMLib
)



############ pyroadmanager
pybind11_add_module(pyroadmanager src/roadmanager/pyroadmanager.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/RoadManager.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/odrSpiral.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/CommonMini.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/buildnr.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/version.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/pugixml.cpp
)
target_compile_definitions(pyroadmanager PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})


############ pyscenarioengine
file(GLOB SCENARIO_SRCS
	"${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ScenarioEngine/SourceFiles/*.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ScenarioEngine/OSCTypeDefs/*.cpp"
)
pybind11_add_module(pyscenarioengine src/scenarioengine/pyscenarioengine.cpp
${SCENARIO_SRCS}
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/RoadManager.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/odrSpiral.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/CommonMini.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/buildnr.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/version.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/pugixml.cpp
)
target_compile_definitions(pyscenarioengine PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})

############ pyplayerbase
pybind11_add_module(pyplayerbase src/playerbase/pyplayerbase.cpp
${SCENARIO_SRCS}
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/RoadManager.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/odrSpiral.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/CommonMini.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/buildnr.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/version.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ViewerBase/viewer.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/pugixml.cpp
)
target_compile_definitions(pyplayerbase PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})







############ pyesminilib
pybind11_add_module(pyesminilib src/esminilib/pyesminilib.cpp
${SCENARIO_SRCS}
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/RoadManager.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/odrSpiral.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/buildnr.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/version.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Libraries/esminiLib/esminiLib.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/pugixml.cpp
)
target_compile_definitions(pyesminilib PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})


############ pyesminiRMlib
pybind11_add_module(pyesminirmlib src/esminirmlib/pyesminirmlib.cpp
${SCENARIO_SRCS}
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/RoadManager.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/odrSpiral.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/buildnr.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/version.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Libraries/esminiRMLib/esminiRMLib.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/pugixml.cpp
)
target_compile_definitions(pyesminirmlib PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})

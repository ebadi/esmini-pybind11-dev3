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
${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/
${CMAKE_CURRENT_SOURCE_DIR}/src/
${CMAKE_CURRENT_SOURCE_DIR}/src/roadmanager
)
include_directories(${INCLUDE_DIRS})

find_package(PythonLibs)
include_directories(${PYTHON_INCLUDE_DIRS})

pybind11_add_module(pyroadmanager src/roadmanager/pyroadmanager.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/RoadManager.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/odrSpiral.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/CommonMini.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/buildnr.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/version.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/pugixml.cpp
)
target_compile_definitions(pyroadmanager PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})


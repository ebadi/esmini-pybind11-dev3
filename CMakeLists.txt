cmake_minimum_required(VERSION 3.4...3.18)
project(cmake_example)

add_subdirectory(pybind11)

set(INCLUDE_DIRS src/ src/unknown esmini/externals/pugixml/ esmini/EnvironmentSimulator/Modules/CommonMini/ esmini/EnvironmentSimulator/Libraries/esminiLib/ esmini/EnvironmentSimulator/Modules/RoadManager/)
include_directories(${INCLUDE_DIRS})

link_libraries("-L/home/wave/repositories/esmini-pybind11/esmini/bin/ -L/home/wave/repositories/esmini-pybind11/esmini/EnvironmentSimulator/Libraries/esminiLib/  -L/home/wave/repositories/esmini-pybind11/esmini/EnvironmentSimulator/Modules/RoadManager/ -lesminiLib -lesminiRMLib")

pybind11_add_module(cmake_example src/roadmanager.cpp)


# EXAMPLE_VERSION_INFO is defined by setup.py and passed into the C++ code as a
# define (VERSION_INFO) here.
target_compile_definitions(cmake_example PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})

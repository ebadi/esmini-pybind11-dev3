cmake_minimum_required(VERSION 3.4...3.18)
project(cmake_example)

add_subdirectory(pybind11)

set(INCLUDE_DIRS esmini/externals/pugixml/ esmini/EnvironmentSimulator/Modules/CommonMini/ esmini/EnvironmentSimulator/Libraries/esminiLib/ esmini/EnvironmentSimulator/Modules/RoadManager/)
include_directories(${INCLUDE_DIRS})

link_libraries("-L/home/wave/repositories/esmini-pybind11/esmini/bin/ -lesminiLib -lesminiRMLib")

pybind11_add_module(cmake_example src/main.cpp)


# EXAMPLE_VERSION_INFO is defined by setup.py and passed into the C++ code as a
# define (VERSION_INFO) here.
target_compile_definitions(cmake_example PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})

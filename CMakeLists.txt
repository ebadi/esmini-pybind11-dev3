cmake_minimum_required(VERSION 3.4...3.18)
project(cmake_example)

add_subdirectory(pybind11)

#python3 -c "from distutils.sysconfig import get_python_inc; print(get_python_inc())"
#/usr/include/python3.8

set(INCLUDE_DIRS  ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/ ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/ ${CMAKE_CURRENT_SOURCE_DIR}/pybind11/include/ /usr/include/python3.8  ${CMAKE_CURRENT_SOURCE_DIR}/src/ ${CMAKE_CURRENT_SOURCE_DIR}/src/roadmanager ${CMAKE_CURRENT_SOURCE_DIR}/src/roadmanager/std ${CMAKE_CURRENT_SOURCE_DIR}/src/roadmanager/unknown/ ${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/  ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/ ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Libraries/esminiLib/ ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/)
include_directories(${INCLUDE_DIRS})

# link_libraries("-L/home/wave/repositories/esmini-pybind11/esmini/bin/ -L/home/wave/repositories/esmini-pybind11/esmini/EnvironmentSimulator/Libraries/esminiLib/  -L/home/wave/repositories/esmini-pybind11/esmini/EnvironmentSimulator/Modules/RoadManager/ -lesminiLib -lesminiRMLib")


pybind11_add_module(cmake_example src/roadmanager/pyroadmanager.cpp ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/RoadManager.cpp ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/odrSpiral.cpp ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/CommonMini.cpp ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/buildnr.cpp  ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/version.cpp  src/roadmanager/unknown/unknown.cpp src/roadmanager/unknown/unknown_1.cpp src/roadmanager/unknown/unknown_2.cpp src/roadmanager/unknown/unknown_3.cpp src/roadmanager/unknown/unknown_4.cpp   src/roadmanager/unknown/unknown_5.cpp  src/roadmanager/unknown/unknown_6.cpp  src/roadmanager/std/stl_vector.cpp  )

target_compile_definitions(cmake_example PUBLIC VERSION_INFO=${EXAMPLE_VERSION_INFO})


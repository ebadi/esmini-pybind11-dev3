
message(STATUS "CMake version: " ${CMAKE_VERSION})

# Set to the current lowest tested version of CMake
if(WIN32)
  # for cmake generator VisualStudio 2017 support
  cmake_minimum_required (VERSION 3.7.0 FATAL_ERROR)
else()
  cmake_minimum_required (VERSION 3.5.0 FATAL_ERROR)
endif()

project (EnvironmentSimulator)

if(MSVC)
  set(CMAKE_VS_INCLUDE_INSTALL_TO_DEFAULT_BUILD 1)
endif()
set(CMAKE_CXX_STANDARD 14)

# Allow for folder structure
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# The static libaries needs to be compiled with position independent code
# otherwise we cant link with them when building dynamic libaries
# An alternative to this global option is to set POSITION_INDEPENDENT_CODE on each target
set(CMAKE_POSITION_INDEPENDENT_CODE ON)


if ("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
  set(INSTALL_DIRECTORY "${CMAKE_HOME_DIRECTORY}/bin")
elseif (WIN32)
  set(INSTALL_DIRECTORY "${CMAKE_HOME_DIRECTORY}/bin")
elseif(UBUNTU32)
  set(INSTALL_DIRECTORY "${CMAKE_HOME_DIRECTORY}/bin")
elseif(APPLE)
  set(INSTALL_DIRECTORY "${CMAKE_HOME_DIRECTORY}/bin")
elseif((UNIX) AND (NOT APPLE))
  set(INSTALL_DIRECTORY "${CMAKE_HOME_DIRECTORY}/bin")
else()
  message(FATAL_ERROR "Unrecognized platform therefore there isn't an installation directory. Stopping the cmake process.")
endif()

set(PUGIXML_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml")

include_directories( ${PUGIXML_INCLUDE_DIR}  )

set(USE_OSG True CACHE BOOL "If projects that depend on OpenSceneGraph should be compiled.")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator)














set ( VIEWER_BASE_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ViewerBase" )
set ( PLAYER_BASE_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/PlayerBase" )
set ( ROADMANAGER_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager" )
set ( SCENARIOENGINE_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ScenarioEngine/SourceFiles")
set ( ROADMANAGER_DLL_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Libraries/esminiRMLib" )
set ( SCENARIOENGINE_DLL_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Libraries/esminiLib" )
set ( REPLAY_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Applications/replayer" )
set ( SCENARIOENGINE_INCLUDE_DIRS
 "${SCENARIOENGINE_INCLUDE_DIR}"
 "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ScenarioEngine/SourceFiles"
 "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ScenarioEngine/OSCTypeDefs"
 )
set ( COMMON_MINI_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini")
set ( CONTROLLERS_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/Controllers")

# OpenSceneGraph package adapted for this project
set ( OSG_VERSION "osg161" )
set ( OSG_BASE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/../externals/OpenSceneGraph" )
set ( OSI_BASE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/../externals/OSI" )
set ( SUMO_BASE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/../externals/SUMO" )

# GoogleTest package
set ( GTEST_VERSION "1.10.1" )
set ( GTEST_BASE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/../externals/googletest" )

set( CMAKE_VERBOSE_MAKEFILE true )

if (APPLE)
  set ( TIME_LIB "" ) 
  set ( OSG_PACKAGE_URL https://dl.dropboxusercontent.com/s/d0czj6b89p9jyvv/OpenSceneGraph_mac.7z?dl=0 )
  set ( OSG_DIR "${OSG_BASE_DIR}/mac" )
  set ( OSI_PACKAGE_URL https://dl.dropboxusercontent.com/s/m62v19gp0m73dte/osi_mac.7z?dl=0 )
  set ( OSI_DIR "${OSI_BASE_DIR}/mac" )
  set ( SUMO_PACKAGE_URL https://dl.dropboxusercontent.com/s/0x8kwztk7nmacs1/sumo_mac.7z?dl=0 )
  set ( SUMO_DIR "${SUMO_BASE_DIR}/mac" )
elseif (UNIX)
  set ( TIME_LIB "" )
  set ( OSG_PACKAGE_URL https://dl.dropboxusercontent.com/s/3dlev34kj94lir5/OpenSceneGraph_linux.7z?dl=0 )
  set ( OSG_DIR "${OSG_BASE_DIR}/linux" )
  set ( OSI_PACKAGE_URL https://dl.dropboxusercontent.com/s/kwtdg0c1c8pawa1/osi_linux.7z?dl=0 )
  set ( OSI_DIR "${OSI_BASE_DIR}/linux" )
  set ( SUMO_PACKAGE_URL https://dl.dropboxusercontent.com/s/gfwtqd3gf76f86a/sumo_linux.7z?dl=0 )
  set ( SUMO_DIR "${SUMO_BASE_DIR}/linux" )
  set ( GTEST_PACKAGE_URL https://dl.dropboxusercontent.com/s/si7jsjjsy5bpoym/googletest_linux.7z?dl=0 )
  set ( GTEST_DIR "${GTEST_BASE_DIR}/linux" )
elseif (WIN32)
  if (WINSDK7_1)
    message ("Configuring for Windows SDK v7.1 x64")
    set ( SOCK_LIB Ws2_32.lib )
    set ( TIME_LIB winmm.lib )
    set ( OSG_PACKAGE_URL https://drive.google.com/uc?export=download&id=1NBEvGZiTWmqxk-MEOq7uK1uh_vaUMaEL )
    set ( OSG_DIR "${OSG_BASE_DIR}/winsdk71" )
  elseif ("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    message ("Configuring for Windows SDK v10 win32")
    set ( SOCK_LIB Ws2_32.lib )
    set ( TIME_LIB "" )
    set ( OSG_PACKAGE_URL https://drive.google.com/uc?export=download&id=10dV9P0qOeJUgTtsSDld4AlbClE--SivX )
    set ( OSG_DIR "${OSG_BASE_DIR}/win32" )
  elseif ("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    message ("Configuring for Windows SDK v10 x64")
    set ( SOCK_LIB Ws2_32.lib )
    set ( TIME_LIB "" )
    set ( OSG_PACKAGE_URL https://dl.dropboxusercontent.com/s/e95hnoo782p40uc/OpenSceneGraph_v10.7z?dl=0 )
    set ( OSI_PACKAGE_URL https://dl.dropboxusercontent.com/s/an58ckp2qfx5069/osi_v10.7z?dl=0 )
    set ( SUMO_PACKAGE_URL https://dl.dropboxusercontent.com/s/5jtpnnd61wonxuh/sumo_v10.7z?dl=0 )
    set ( GTEST_PACKAGE_URL https://dl.dropboxusercontent.com/s/aaiehwzc6woqbc6/googletest_v10.7z?dl=0 )
    set ( OSG_DIR "${OSG_BASE_DIR}/v10" )
    set ( OSI_DIR "${OSI_BASE_DIR}/v10" )
    set ( SUMO_DIR "${SUMO_BASE_DIR}/v10" )
    set ( GTEST_DIR "${GTEST_BASE_DIR}/v10" )
  else ()
    message ("Unknown configuration")
  endif ()
endif (APPLE)

set ( OSG_INCLUDE_DIR 
	"${OSG_DIR}/build/include"
	"${OSG_DIR}/include"
)
set ( OSG_LIBRARIES_PATH 
	"${OSG_DIR}/lib" 
	"${OSG_DIR}/lib/osgPlugins-3.6.5"
)

set ( OSI_INCLUDE_DIR "${OSI_DIR}/include" )
set ( OSI_LIBRARIES_PATH "${OSI_DIR}/lib" )

set ( SUMO_INCLUDE_DIR "${SUMO_DIR}/include" )
set ( SUMO_LIBRARIES_PATH "${SUMO_DIR}/lib" )

link_directories(${OSG_LIBRARIES_PATH} ${OSI_LIBRARIES_PATH} ${SUMO_LIBRARIES_PATH})

set ( GTEST_INCLUDE_DIR "${GTEST_DIR}/include" )
set ( GTEST_LIBRARIES_PATH "${GTEST_DIR}/lib" )

link_directories(${OSG_LIBRARIES_PATH} ${OSI_LIBRARIES_PATH} ${GTEST_LIBRARIES_PATH})

if(APPLE)
  SET(CMAKE_CXX_FLAGS "-std=c++14 -pthread -flto -Wl,-dead_strip")

  SET( "-framework OpenGL -framework Cocoa")
  
  set ( OSG_LIBRARIES
	
    osgdb_serializers_osgsim
    osgdb_serializers_osg
    osgdb_osg
    osgdb_jpeg
    osgAnimation
    osgText
    osgSim
    osgViewer
    osgUtil
    osgDB
    osgGA
    osg
    OpenThreads
    jpeg

    "-framework OpenGL"
    "-framework Cocoa"
    dl
    z
    #db_fbx
  )

  set ( OSI_LIBRARIES 
	open_simulation_interface_pic
	protobuf
  )

  set ( SUMO_LIBRARIES 
    optimized libsumostatic debug libsumostaticd
    optimized netload debug netloadd
    optimized traciserver debug traciserverd
    optimized libsumostatic debug libsumostaticd
    optimized utils_vehicle debug utils_vehicled
    optimized utils_distribution debug utils_distributiond
    optimized utils_shapes debug utils_shapesd
    optimized utils_options debug utils_optionsd
    optimized utils_xml debug utils_xmld
    optimized utils_geom debug utils_geomd
    optimized utils_common debug utils_commond
    optimized utils_iodevices debug utils_iodevicesd
    optimized utils_traction_wire debug utils_traction_wired
    optimized utils_emissions debug utils_emissionsd
    optimized microsim_engine debug microsim_engined
    optimized microsim_lcmodels debug microsim_lcmodelsd
    optimized microsim_devices debug microsim_devicesd
    optimized microsim_trigger debug microsim_triggerd
    optimized microsim_output debug microsim_outputd
    optimized microsim_transportables debug microsim_transportablesd
    optimized microsim_actions debug microsim_actionsd
    optimized microsim_traffic_lights debug microsim_traffic_lightsd
    optimized microsim debug microsimd
    optimized mesosim debug mesosimd
    optimized foreign_phemlight debug foreign_phemlightd
    optimized foreign_tcpip debug foreign_tcpipd
    optimized microsim_cfmodels debug microsim_cfmodelsd
    optimized zlibstatic debug zlibstaticd
    optimized xerces-c_3 debug xerces-c_3D
  )

elseif(UNIX)
  if(CMAKE_BUILD_TYPE STREQUAL "Release")
    SET(CMAKE_CXX_FLAGS "-std=c++14 -pthread -fPIC -Wl,-strip-all")
  elseif(CMAKE_BUILD_TYPE STREQUAL "Debug")
    SET(CMAKE_CXX_FLAGS "-march=native -O0 -std=c++14 -pthread -fPIC")  
  else()
    SET(CMAKE_CXX_FLAGS "-std=c++14 -pthread -fPIC -Wl,-strip-all")
  endif()
  
  set ( OSG_LIBRARIES
    optimized osgdb_serializers_osgsim debug osgdb_serializers_osgsimd 
    optimized osgdb_serializers_osg debug osgdb_serializers_osgd
    optimized osgdb_osg debug osgdb_osgd 
    optimized osgdb_jpeg debug osgdb_jpegd
    optimized osgAnimation debug osgAnimationd
    optimized osgText debug osgTextd
    optimized osgSim debug osgSimd
    optimized osgViewer debug osgViewerd
    optimized osgUtil debug osgUtild
    optimized osgDB debug osgDBd
    optimized osgGA debug osgGAd
    optimized osg debug osgd
    optimized OpenThreads debug OpenThreadsd
    optimized jpeg debug jpegd

    GL
    X11
    Xrandr
    dl
    z
    Xinerama
    fontconfig
    #db_fbx
  )
  
  set ( OSI_LIBRARIES 
	optimized open_simulation_interface_pic debug open_simulation_interface_picd
	optimized protobuf debug protobufd
  )
  
  set ( SUMO_LIBRARIES 
    optimized libsumostatic debug libsumostaticd
    optimized netload debug netloadd
    optimized traciserver debug traciserverd
    optimized libsumostatic debug libsumostaticd
    optimized utils_vehicle debug utils_vehicled
    optimized utils_distribution debug utils_distributiond
    optimized utils_shapes debug utils_shapesd
    optimized utils_options debug utils_optionsd
    optimized utils_xml debug utils_xmld
    optimized utils_geom debug utils_geomd
    optimized utils_common debug utils_commond
    optimized utils_iodevices debug utils_iodevicesd
    optimized utils_traction_wire debug utils_traction_wired
    optimized utils_emissions debug utils_emissionsd
    optimized microsim_engine debug microsim_engined
    optimized microsim_lcmodels debug microsim_lcmodelsd
    optimized microsim_devices debug microsim_devicesd
    optimized microsim_trigger debug microsim_triggerd
    optimized microsim_output debug microsim_outputd
    optimized microsim_transportables debug microsim_transportablesd
    optimized microsim_actions debug microsim_actionsd
    optimized microsim_traffic_lights debug microsim_traffic_lightsd
    optimized microsim debug microsimd
    optimized mesosim debug mesosimd
    optimized foreign_phemlight debug foreign_phemlightd
    optimized foreign_tcpip debug foreign_tcpipd
    optimized microsim_cfmodels debug microsim_cfmodelsd
    optimized zlibstatic debug zlibstaticd
    optimized xerces-c_3 debug xerces-c_3D
  )

  set (GTEST_LIBRARIES
    optimized gmock debug gmockd
    optimized gmock_main debug gmock_maind
    optimized gtest debug gtestd
    optimized gtest_main debug gtest_maind
  )

else() #not UNIX

  # Get rid of historical macros preventing SUMO integration
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /D NOMINMAX ")

  if ((MSVC) AND (MSVC_VERSION GREATER_EQUAL 1910))
    # suppress warning 4127 (conditional expression is constant) to avoid harmless warning from Google protobuf header
    # suppress warning 4100 (unreferenced formal parameter) to allow function headers with unreferenced parameters for increased readability
    add_compile_options(/permissive- /W4 /wd4127 /wd4100)
  endif ()
  
  set ( OSG_LIBRARIES 
      opengl32.lib
      optimized zlibstatic.lib debug zlibstaticd.lib 
      optimized jpeg.lib debug jpegd.lib 
      optimized ${OSG_VERSION}-osg.lib debug ${OSG_VERSION}-osgd.lib
      optimized ${OSG_VERSION}-osgAnimation.lib debug ${OSG_VERSION}-osgAnimationd.lib
      optimized ${OSG_VERSION}-osgDB.lib debug ${OSG_VERSION}-osgDBd.lib
      optimized ${OSG_VERSION}-osgGA.lib debug ${OSG_VERSION}-osgGAd.lib
      optimized ${OSG_VERSION}-osgViewer.lib debug ${OSG_VERSION}-osgViewerd.lib
      optimized ${OSG_VERSION}-osgText.lib debug ${OSG_VERSION}-osgTextd.lib
      optimized ${OSG_VERSION}-osgUtil.lib debug ${OSG_VERSION}-osgUtild.lib
      optimized ${OSG_VERSION}-osgSim.lib debug ${OSG_VERSION}-osgSimd.lib
      optimized ot21-OpenThreads.lib debug ot21-OpenThreadsd.lib
      optimized osgdb_serializers_osgsim.lib debug osgdb_serializers_osgsimd.lib
      optimized osgdb_serializers_osg.lib debug osgdb_serializers_osgd.lib
      optimized osgdb_osg.lib debug osgdb_osgd.lib 	
      optimized osgdb_fbx.lib debug osgdb_fbxd.lib 	
      optimized osgdb_jpeg.lib debug osgdb_jpegd.lib
  )

  set ( OSI_LIBRARIES 
	optimized libprotobuf.lib debug libprotobufd.lib
	optimized open_simulation_interface_pic.lib debug open_simulation_interface_picd.lib
  )

  set ( SUMO_LIBRARIES 
    optimized foreign_phemlight.lib debug foreign_phemlightd.lib
    optimized foreign_tcpip.lib debug foreign_tcpipd.lib
    optimized libsumostatic.lib debug libsumostaticd.lib
    optimized mesosim.lib debug mesosimd.lib
    optimized microsim.lib debug microsimd.lib
    optimized microsim_actions.lib debug microsim_actionsd.lib
    optimized microsim_cfmodels.lib debug microsim_cfmodelsd.lib
    optimized microsim_devices.lib debug microsim_devicesd.lib
    optimized microsim_engine.lib debug microsim_engined.lib
    optimized microsim_lcmodels.lib debug microsim_lcmodelsd.lib
    optimized microsim_output.lib debug microsim_outputd.lib
    optimized microsim_traffic_lights.lib debug microsim_traffic_lightsd.lib
    optimized microsim_transportables.lib debug microsim_transportablesd.lib
    optimized microsim_trigger.lib debug microsim_triggerd.lib
    optimized netload.lib debug netloadd.lib
    optimized traciserver.lib debug traciserverd.lib
    optimized utils_common.lib debug utils_commond.lib
    optimized utils_distribution.lib debug utils_distributiond.lib
    optimized utils_emissions.lib debug utils_emissionsd.lib
    optimized utils_geom.lib debug utils_geomd.lib
    optimized utils_iodevices.lib debug utils_iodevicesd.lib
    optimized utils_options.lib debug utils_optionsd.lib
    optimized utils_shapes.lib debug utils_shapesd.lib
    optimized utils_traction_wire.lib debug utils_traction_wired.lib
    optimized utils_vehicle.lib debug utils_vehicled.lib
    optimized utils_xml.lib debug utils_xmld.lib
    optimized xerces-c_3.lib debug xerces-c_3D.lib
    optimized zlibstatic.lib debug zlibstaticd.lib
  )  

  set (GTEST_LIBRARIES
    optimized gmock.lib debug gmockd.lib
    optimized gmock_main.lib debug gmock_maind.lib
    optimized gtest.lib debug gtestd.lib
    optimized gtest_main.lib debug gtest_maind.lib
  )
#

endif() #Endif UNIX


set ( ModulesFolder Modules )
set ( ApplicationsFolder Applications )  
set ( LibrariesFolder Libraries )  

set_target_properties (RoadManager PROPERTIES FOLDER ${ModulesFolder} )
set_target_properties (CommonMini PROPERTIES FOLDER ${ModulesFolder} )
set_target_properties (ScenarioEngine PROPERTIES FOLDER ${ModulesFolder} )
set_target_properties (RoadManager PROPERTIES FOLDER ${ModulesFolder} )
set_target_properties (ScenarioEngine PROPERTIES FOLDER ${ModulesFolder} )

#
# Download library and content binary packets
#
function (download_and_extract url target_folder target_filename)
	message (STATUS "downloading ${target_filename} ...")
	file (DOWNLOAD ${url} ${target_folder}/${target_filename})
	
	message (STATUS "extracting ${target_filename} ... ")
	execute_process (COMMAND ${CMAKE_COMMAND} -E tar xfz ${target_filename} WORKING_DIRECTORY ${target_folder})
	file (REMOVE ${target_folder}/${target_filename})
endfunction (download_and_extract)

# download OpenSceneGraph 
set ( OSG_PACKAGE_FILENAME "osg.7z" )
if (FORCE_DOWNLOAD_BINARIES OR NOT EXISTS ${OSG_DIR} )
	download_and_extract( ${OSG_PACKAGE_URL} ${OSG_BASE_DIR} ${OSG_PACKAGE_FILENAME} )
endif()

# download OSI
set ( OSI_PACKAGE_FILENAME "osi.7z" )
if (FORCE_DOWNLOAD_BINARIES OR NOT EXISTS ${OSI_DIR} )
	download_and_extract( ${OSI_PACKAGE_URL} ${OSI_BASE_DIR} ${OSI_PACKAGE_FILENAME} )
endif()

# download SUMO
set ( SUMO_PACKAGE_FILENAME "sumo.7z" )
if (FORCE_DOWNLOAD_BINARIES OR NOT EXISTS ${SUMO_DIR} )
  download_and_extract( ${SUMO_PACKAGE_URL} ${SUMO_BASE_DIR} ${SUMO_PACKAGE_FILENAME} )
endif()

# download googletest
if(APPLE)
  message ("Not available yet")

else()
  set ( GTEST_PACKAGE_FILENAME "googletest.7z" )
  if (FORCE_DOWNLOAD_BINARIES OR NOT EXISTS ${GTEST_DIR} )
	  download_and_extract( ${GTEST_PACKAGE_URL} ${GTEST_BASE_DIR} ${GTEST_PACKAGE_FILENAME} )
  endif()
endif()

set ( MODELS_BASE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/../resources" )
set ( MODELS_DIR "${MODELS_BASE_DIR}/models" )
set ( MODELS_PACKAGE_FILENAME models.7z)
set ( MODELS_PACKAGE_URL https://dl.dropboxusercontent.com/s/5gk8bvgzqiaaoco/models.7z?dl=0 )

if (FORCE_DOWNLOAD_BINARIES OR NOT EXISTS ${MODELS_DIR} )
	download_and_extract(${MODELS_PACKAGE_URL} ${MODELS_BASE_DIR} ${MODELS_PACKAGE_FILENAME})
endif()

if (USE_OSG)


  if (NOT USE_ENVSIM_ADAPT)
    set_target_properties (esmini PROPERTIES FOLDER ${ApplicationsFolder} )
    set_target_properties (esmini-dyn PROPERTIES FOLDER ${ApplicationsFolder} )
#    set_target_properties (esmini-dm-example PROPERTIES FOLDER ${ApplicationsFolder} )
    set_target_properties (replayer PROPERTIES FOLDER ${ApplicationsFolder} )
    set_target_properties (dat2csv PROPERTIES FOLDER ${ApplicationsFolder} )    
    set_target_properties (osireceiver PROPERTIES FOLDER ${ApplicationsFolder} )    
    set_target_properties (odrviewer PROPERTIES FOLDER ${ApplicationsFolder} )
    set_target_properties (odrplot PROPERTIES FOLDER ${ApplicationsFolder} )
  endif (NOT USE_ENVSIM_ADAPT)
  set_target_properties (ViewerBase PROPERTIES FOLDER ${ModulesFolder} )
  set_target_properties (PlayerBase PROPERTIES FOLDER ${ModulesFolder} )
  set_target_properties (Controllers PROPERTIES FOLDER ${ModulesFolder} )
  set_target_properties (esminiLib PROPERTIES FOLDER ${LibrariesFolder} )
  set_target_properties (esminiRMLib PROPERTIES FOLDER ${LibrariesFolder} )

endif (USE_OSG)

cmake_minimum_required(VERSION 3.4...3.18)
add_subdirectory(pybind11)
find_package(PythonLibs 3)

include_directories( ${VIEWER_BASE_INCLUDE_DIR} ${PLAYER_BASE_INCLUDE_DIR} ${ROADMANAGER_INCLUDE_DIR} ${SCENARIOENGINE_INCLUDE_DIR} ${ROADMANAGER_DLL_INCLUDE_DIR} ${SCENARIOENGINE_DLL_INCLUDE_DIR} ${REPLAY_INCLUDE_DIR} ${SCENARIOENGINE_INCLUDE_DIRS} ${COMMON_MINI_INCLUDE_DIR}  ${CONTROLLERS_INCLUDE_DIR}  ${OSG_INCLUDE_DIR}  ${OSI_INCLUDE_DIR} ${SUMO_INCLUDE_DIR} )


set(CMAKE_INTERPROCEDURAL_OPTIMIZATION OFF)

#MODULE/SHARED



############################## WORKING 
# without esminiLib:
#  File "tests/scenarioplayer.py", line 4, in <module>
#    import pyplayerbase
#ImportError: /usr/local/lib/python3.8/dist-packages/pyplayerbase.cpython-38-x86_64-linux-gnu.so: undefined symbol: _ZTTN6viewer18VisibilityCallbackE
# Maybe try add_definitions(-DOSG_LIBRARY_STATIC -D_SCENARIO_VIEWER)

pybind11_add_module(pyplayerbase MODULE src/playerbase/pyplayerbase.cpp)
target_link_libraries(pyplayerbase PRIVATE ${SOCK_LIB} ${TIME_LIB} esminiLib  ViewerBase PlayerBase Controllers CommonMini RoadManager ScenarioEngine ${SUMO_LIBRARIES}  ${GTEST_LIBRARIES} ${OSI_LIBRARIES} ${OSG_LIBRARIES})
target_compile_definitions(pyplayerbase PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})


pybind11_add_module(pyroadmanager MODULE src/roadmanager/pyroadmanager.cpp esmini/EnvironmentSimulator/Libraries/esminiLib/esminiLib.hpp ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/odrSpiral.cpp ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/CommonMini.cpp ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/buildnr.cpp ${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/version.cpp ${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/pugixml.cpp )
target_link_libraries(pyroadmanager PRIVATE ${SOCK_LIB} ${TIME_LIB} esminiLib  ViewerBase PlayerBase Controllers CommonMini RoadManager ScenarioEngine ${SUMO_LIBRARIES}  ${GTEST_LIBRARIES} ${OSI_LIBRARIES} ${OSG_LIBRARIES})
target_compile_definitions(pyroadmanager PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})

file(GLOB CONTROLLER_SRCS "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/Controllers/*.cpp" )
pybind11_add_module(pycontroller MODULE src/controller/pycontroller.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/RoadManager.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/odrSpiral.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/buildnr.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/version.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/pugixml.cpp)
target_link_libraries(pycontroller PRIVATE ${SOCK_LIB} ${TIME_LIB} esminiLib  ViewerBase PlayerBase Controllers CommonMini RoadManager ScenarioEngine ${SUMO_LIBRARIES}  ${GTEST_LIBRARIES} ${OSI_LIBRARIES} ${OSG_LIBRARIES})
target_compile_definitions(pycontroller PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})



file(GLOB SCENARIO_SRCS "${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ScenarioEngine/SourceFiles/*.cpp" 	"${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/ScenarioEngine/OSCTypeDefs/*.cpp")
pybind11_add_module(pyscenarioengine src/scenarioengine/pyscenarioengine.cpp
${SCENARIO_SRCS}
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/RoadManager.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/RoadManager/odrSpiral.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/CommonMini.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/buildnr.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/EnvironmentSimulator/Modules/CommonMini/version.cpp
${CMAKE_CURRENT_SOURCE_DIR}/esmini/externals/pugixml/pugixml.cpp
)
target_link_libraries(pyscenarioengine PRIVATE ${SOCK_LIB} ${TIME_LIB} ${OSG_LIBRARIES_PATH} ${OSI_LIBRARIES_PATH} ${SUMO_LIBRARIES_PATH} esminiLib  ViewerBase PlayerBase Controllers CommonMini RoadManager ScenarioEngine ${SUMO_LIBRARIES}  ${GTEST_LIBRARIES} ${OSI_LIBRARIES} ${OSG_LIBRARIES})
target_compile_definitions(pyscenarioengine PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})



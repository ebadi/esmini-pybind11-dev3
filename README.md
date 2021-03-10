

## Prerequisites

**On Unix (Linux, OS X)**

* A compiler with C++11 support
* CMake >= 3.4 or Pip 10+
* Ninja or Pip 10+

**On Windows**

* Visual Studio 2015 or newer (required for all Python versions, see notes below)
* CMake >= 3.8 (3.8 was the first version to support VS 2015) or Pip 10+


## Installation

Just clone this repository and pip install. Note the `--recursive` option which is
needed for the pybind11 submodule:

## Progress
pyplayerbase.ScenarioPlayer misses many methods!

| Module  | pyBind11  | documentation | Testcase |   Comment | 
| ------------- | ------------- | ------------- | ------------- | ------------- |
| RoadManager  | **Done**  | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pyroadmanager.html) | Missing  | Problems with LaneRoadMarkType::Print(), IsIndirectlyConnected |
| ScenarioEngine  | **Done**  | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pyscenarioengine.html)  | Missing  | - |
| PlayerBase  | **Incomplete**  | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pyplayerbase.html)  | Missing  | Not all methods were covered  |
| ViewerBase  | **Done**  | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pyviewerbase.html)  | Missing  | check if all classes/methods are included |
| Controller  | **Done**  | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pycontroller.html)  | Missing  | check if all classes/methods are included |
| esminiLib  | **Done**  | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pyesminilib.html)  | Missing  | `python3 -c "import pyesminilib; s = '/home/wave/repositories/esmini-pybind11/esmini/resources/xosc/lane_change.xosc' ; a= pyesminilib.SE_Init(s, 1, 1, 0, 0);"  ---> python3: malloc.c:2379: sysmalloc: Assertion ` . Missing SE_InitWithArgs |
| esminiRMLib  | **Done**  | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pyesminirmlib.html)  | Missing  |  The internal methods were used by applications, it seems to be more than a shared library! |

```bash
git clone --recursive https://github.com/ebadi/esmini-pybind11
cd ./esmini-pybind11
git clone https://github.com/ebadi/esmini
cd esmini
mkdir build
cd build
cmake ../ -DUSE_OSG=true -DCMAKE_BUILD_TYPE=Release
cmake --build . --config Release --target install
cd ../../

./run.sh

```

```
python3 -c "import pyroadmanager.roadmanager; print(dir(pyroadmanager.roadmanager));"
['Arc', 'CONTACT_POINT_END', 'CONTACT_POINT_NONE', 'CONTACT_POINT_START', 'CONTACT_POINT_UNKNOWN', 'Clothoid', 'Connection', 'ContactPointType', 'Elevation', 'Geometry', 'Junction', 'JunctionLaneLink', 'Lane', 'LaneBoundaryOSI', 'LaneInfo', 'LaneLink', 'LaneOffset', 'LaneRoadLaneConnection', 'LaneRoadMark', 'LaneRoadMarkType', 'LaneRoadMarkTypeLine', 'LaneSection', 'LaneWidth', 'Line', 'Nurbs', 'OSIPoints', 'Object', 'OpenDrive', 'ParamPoly3', 'Poly3', 'PolyLine', 'Polynomial', 'Position', 'ROADTYPE_BICYCLE', 'ROADTYPE_LOWSPEED', 'ROADTYPE_MOTORWAY', 'ROADTYPE_PEDESTRIAN', 'ROADTYPE_RURAL', 'ROADTYPE_TOWN', 'ROADTYPE_UNKNOWN', 'Road', 'RoadLink', 'RoadMarkInfo', 'RoadPath', 'RoadType', 'Route', 'Shape', 'Signal', 'Spiral', 'Trajectory', '__doc__', '__loader__', '__name__', '__package__', '__spec__']

python3 -c "import pyscenarioengine.scenarioengine; print(dir(pyscenarioengine.scenarioengine));"
['Act', 'ActivateControllerAction', 'AssignControllerAction', 'AssignRouteAction', 'Catalog', 'Catalogs', 'Center', 'ConditionGroup', 'Controller', 'ControllerPool', 'Dimensions', 'Entities', 'Entry', 'Event', 'FollowTrajectoryAction', 'Init', 'InstantiateController', 'LatLaneChangeAction', 'LatLaneOffsetAction', 'LongDistanceAction', 'LongSpeedAction', 'ManeuverGroup', 'MiscObject', 'OSCAction', 'OSCBoundingBox', 'OSCCondition', 'OSCFile', 'OSCGlobalAction', 'OSCManeuver', 'OSCOrientation', 'OSCParameterDeclarations', 'OSCPosition', 'OSCPositionLane', 'OSCPositionRelativeLane', 'OSCPositionRelativeObject', 'OSCPositionRelativeRoad', 'OSCPositionRelativeWorld', 'OSCPositionRoad', 'OSCPositionRoute', 'OSCPositionWorld', 'OSCPrivateAction', 'OSCProperties', 'Object', 'ObjectState', 'ObjectStateStruct', 'ObjectTrail', 'ParameterSetAction', 'Parameters', 'Pedestrian', 'RoadNetwork', 'ScenarioEngine', 'ScenarioGateway', 'ScenarioReader', 'Story', 'StoryBoard', 'StoryBoardElement', 'SynchronizeAction', 'TeleportAction', 'TrigByAcceleration', 'TrigByCollision', 'TrigByDistance', 'TrigByEndOfRoad', 'TrigByEntity', 'TrigByOffRoad', 'TrigByParameter', 'TrigByReachPosition', 'TrigByRelativeDistance', 'TrigByRelativeSpeed', 'TrigBySimulationTime', 'TrigBySpeed', 'TrigByStandStill', 'TrigByState', 'TrigByTimeHeadway', 'TrigByTimeToCollision', 'TrigByTraveledDistance', 'TrigByValue', 'Trigger', 'Vehicle', 'VisibilityAction', '__doc__', '__loader__', '__name__', '__package__', '__spec__']

python3 -c "import pyplayerbase; print(dir(pyplayerbase.ScenarioPlayer));"
['AddObjectSensor', 'Frame', 'GetFixedTimestep', 'GetOSIFreq', 'GetParameterValue', 'IsQuitRequested', 'ScenarioFrame', 'SetFixedTimestep', 'SetOSIFileStatus', 'SetParameterValue', 'ShowObjectSensors', 'UpdateCSV_Log', '__class__', '__delattr__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', 'callback', 'exe_path_', 'maxStepSize', 'minStepSize', 'opt', 'sensor']

from pyroadmanager.roadmanager import *
g = Geometry(1,2,3,4,5, Geometry.GEOMETRY_TYPE_UNKNOWN )
print(g.GetHdg()) # prints 4.0

```

## Important Links
https://github.com/RosettaCommons/binder
https://github.com/MRPT/mvsim/tree/master/modules/comms
https://github.com/vgteam/libbdsg/tree/master/bdsg/cmake_bindings

With the `setup.py` file included in this example, the `pip install` command will
invoke CMake and build the pybind11 module as specified in `CMakeLists.txt`.


## Special notes for Windows

**Compiler requirements**

Pybind11 requires a C++11 compliant compiler, i.e Visual Studio 2015 on Windows.
This applies to all Python versions, including 2.7. Unlike regular C extension
modules, it's perfectly fine to compile a pybind11 module with a VS version newer
than the target Python's VS version. See the [FAQ] for more details.

**Runtime requirements**

The Visual C++ 2015 redistributable packages are a runtime requirement for this
project. It can be found [here][vs2015_runtime]. If you use the Anaconda Python
distribution, you can add `vs2015_runtime` as a platform-dependent runtime
requirement for you package: see the `conda.recipe/meta.yaml` file in this example.


## Building the documentation

Documentation for the example project is generated using Sphinx. Sphinx has the
ability to automatically inspect the signatures and documentation strings in
the extension module to generate beautiful documentation in a variety formats.
The following command generates HTML-based reference documentation; for other
formats please refer to the Sphinx manual:

 - `cd docs`
 - `make html`


## License

Pybind11 is provided under a BSD-style license that can be found in the LICENSE
file. By using, distributing, or contributing to this project, you agree to the
terms and conditions of this license.
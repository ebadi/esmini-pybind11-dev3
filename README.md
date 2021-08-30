

## Prerequisites

**On Unix (Linux, OS X)**

* A compiler with C++11 support
* CMake >= 3.4 or Pip 10+
* Ninja or Pip 10+

**On Windows** (Not tested)

* Visual Studio 2015 or newer (required for all Python versions, see notes below)
* CMake >= 3.8 (3.8 was the first version to support VS 2015) or Pip 10+
* Python development in VS


## Installation

```
git clone https://github.com/ebadi/esmini-pybind11.git  --recursive
cd esmini-pybind11
git clone https://github.com/ebadi/esmini.git

	## Make sure VS is installed correctly:
	# cmake . -G "Visual Studio 16 2019"
	# cmake --build . --config Release --target install

cd ..	
pip3 install ./esmini-pybind11
```

Trying the library:

```
python3 ./esmini-pybind11/tests/roadmanager.py
python3 ./esmini-pybind11/tests/esmini.py
python3 ./esmini-pybind11/tests/scenarioplayer.py
```



## Development build:
The method above uses prebuilt bindings. To generate bindings you can use one of the following methods. Some functions need to be commented out before it is being used. 
Just clone this repository and pip3 install. Note the `--recursive` option which is needed for the pybind11 submodule and then choose one of the following options :
#### Option 1: Build bindings inside the Docker

```
docker build -t esmini/docker-ubuntu .
docker run -i -t esmini/docker-ubuntu /bin/bash
root@c77d1e4ef709:/# cd esmini-pybind11 ; ./dev-building-bindings.sh
root@c77d1e4ef709:/# export LD_LIBRARY_PATH=$PWD/bin:
root@c77d1e4ef709:/# python3 -c "import pyplayerbase; print(dir(pyplayerbase.ScenarioPlayer));"
```

#### Option 2: Build bindings

```
export LD_LIBRARY_PATH=$PWD/esmini/bin:$PWD/bin:
./install_req.sh
./dev-building-bindings.sh
LD_LIBRARY_PATH=/home/wave/repositories/esmini-pybind11/:$LD_LIBRARY_PATH python3 tests/scenarioplayer.py

# for only compiling esmini, and python package (without rebuilding the bindings)
./prod-use-prebuilt-bindings.sh
```

## Progress

| Module  | pyBind11  | documentation |   Comment |
| ------------- | ------------- | ------------- | ------------- |
| RoadManager  | **Done**  | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pyroadmanager.html) | Problems with LaneRoadMarkType::Print(), IsIndirectlyConnected |
| ScenarioEngine  | **Done**  (incomplete) | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pyscenarioengine.html)  | Not all methods are covered |
| PlayerBase  | **Done** (incomplete) | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pyplayerbase.html)  | Not all methods are covered  |
| ViewerBase  | **Done**  | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pyviewerbase.html)  | check if all classes/methods are included |
| Controller  | **Done**  | [Done](https://htmlpreview.github.io/?https://github.com/ebadi/esmini-pybind11/blob/master/docs/_build/html/pycontroller.html)  | check if all classes/methods are included |

### Issues

#### Issue 1: Memory corruption
causes random crashes on Windows/Linux
```
python3 tests/scenarioplayer.py
```

#### Issue 2: Not all methods have bindings
[As explained here](https://github.com/RosettaCommons/binder/issues/151), not all C/C++ types could be adequately represented in Python. Particularly functions that take/produce `char *argv[]` could not be bound in Python without creating special wrapper. This is something that will require human attention to resolve. Usually such function rewritten in manner that made them more Python friendly. For instance function that you mention might be rewritten as one that takes single `std::vector<std::string> const &` argument.

Esmini Answer: We've tried to stick with basic C data types to simplify DLL usage. Maybe it would be possible to use C++ std-types as well, but would need some investigation and testing on a few platforms.

- Missing methods: **Highest priority**
- Testing on Linux : Done
- Testing on Windows: **Not Done**
- Testcases for each method: **Not Done**



Testing the bindings
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

export LD_LIBRARY_PATH=$PWD/esmini/bin:
```


## Important Links
https://github.com/RosettaCommons/binder

https://github.com/MRPT/mvsim/tree/master/modules/comms

https://github.com/vgteam/libbdsg/tree/master/bdsg/cmake_bindings

With the `setup.py` file included in this example, the `pip3 install` command will
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

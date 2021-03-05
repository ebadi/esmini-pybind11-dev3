// File: unknown/unknown.cpp

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// SE_AddPath(const char *) file: line:118
	M("").def("SE_AddPath", (int (*)(const char *)) &SE_AddPath, "	Add a search path for OpenDRIVE and 3D model files\n	\n\n Path to a directory\n	\n\n 0 if successful, -1 if not\n\nC++: SE_AddPath(const char *) --> int", pybind11::arg("path"));

	// SE_ClearPaths() file: line:123
	M("").def("SE_ClearPaths", (void (*)()) &SE_ClearPaths, "	Clear all search paths for OpenDRIVE and 3D model files\n\nC++: SE_ClearPaths() --> void");

	// SE_SetOSITolerances(double, double) file: line:131
	M("").def("SE_SetOSITolerances", (int (*)(double, double)) &SE_SetOSITolerances, "	Configure tolerances/resolution for OSI road features\n	\n\n Maximum distance between OSI points, even on straight road. Default=50(m)\n	\n\n Control resolution w.r.t. curvature default=0.05(m)\n	\n\n 0 if successful, -1 if not\n\nC++: SE_SetOSITolerances(double, double) --> int", pybind11::arg("maxLongitudinalDistance"), pybind11::arg("maxLateralDeviation"));

	// SE_Init(const char *, int, int, int, int) file: line:142
	M("").def("SE_Init", (int (*)(const char *, int, int, int, int)) &SE_Init, "	Initialize the scenario engine\n	\n\n Path to the OpenSCEANRIO file\n	\n\n 1=Any controller will be disabled 0=Controllers applied according to OSC file\n	\n\n 0=no viewer, 1=use viewer\n	\n\n 0=single thread, 1=viewer in a separate thread, parallel to scenario engine\n	\n\n Create recording for later playback 0=no recording 1=recording\n	\n\n 0 if successful, -1 if not\n\nC++: SE_Init(const char *, int, int, int, int) --> int", pybind11::arg("oscFilename"), pybind11::arg("disable_ctrls"), pybind11::arg("use_viewer"), pybind11::arg("threads"), pybind11::arg("record"));

	// SE_InitWithString(const char *, int, int, int, int) file: line:153
	M("").def("SE_InitWithString", (int (*)(const char *, int, int, int, int)) &SE_InitWithString, "	Initialize the scenario engine\n	\n\n OpenSCENARIO XML as string\n	\n\n 1=Any controller will be disabled 0=Controllers applied according to OSC file\n	\n\n 0=no viewer, 1=use viewer\n	\n\n 0=single thread, 1=viewer in a separate thread, parallel to scenario engine\n	\n\n Create recording for later playback 0=no recording 1=recording\n	\n\n 0 if successful, -1 if not\n\nC++: SE_InitWithString(const char *, int, int, int, int) --> int", pybind11::arg("oscAsXMLString"), pybind11::arg("disable_ctrls"), pybind11::arg("use_viewer"), pybind11::arg("threads"), pybind11::arg("record"));

	// SE_StepDT(float) file: line:169
	M("").def("SE_StepDT", (int (*)(float)) &SE_StepDT, "	Step the simulation forward with specified timestep\n	\n\n time step in seconds\n	\n\n 0 if successful, -1 if not\n\nC++: SE_StepDT(float) --> int", pybind11::arg("dt"));

	// SE_Step() file: line:175
	M("").def("SE_Step", (int (*)()) &SE_Step, "	Step the simulation forward. Time step will be elapsed system (world) time since last step. Useful for interactive/realtime use cases.\n	\n\n 0 if successful, -1 if not\n\nC++: SE_Step() --> int");

	// SE_Close() file: line:180
	M("").def("SE_Close", (void (*)()) &SE_Close, "	Stop simulation gracefully. Two purposes: 1. Release memory and 2. Prepare for next simulation, e.g. reset object lists.\n\nC++: SE_Close() --> void");

	// SE_LogToConsole(bool) file: line:186
	M("").def("SE_LogToConsole", (void (*)(bool)) &SE_LogToConsole, "	Enable or disable log to stdout/console\n	\n\n true=enable, false=disable\n\nC++: SE_LogToConsole(bool) --> void", pybind11::arg("mode"));

	// SE_GetSimulationTime() file: line:191
	M("").def("SE_GetSimulationTime", (float (*)()) &SE_GetSimulationTime, "	Get simulation time in seconds\n\nC++: SE_GetSimulationTime() --> float");

	// SE_GetSimTimeStep() file: line:198
	M("").def("SE_GetSimTimeStep", (float (*)()) &SE_GetSimTimeStep, "	Get simulation time step in seconds\n	The time step is calculated as difference since last call to same funtion.\n	Clamped to some reasonable values. First call returns smallest delta (typically 1 ms).\n\nC++: SE_GetSimTimeStep() --> float");

	// SE_GetQuitFlag() file: line:203
	M("").def("SE_GetQuitFlag", (int (*)()) &SE_GetQuitFlag, "	Get the bool value of the end of the scenario\n\nC++: SE_GetQuitFlag() --> int");

	// SE_GetODRFilename() file: line:209
	M("").def("SE_GetODRFilename", (const char * (*)()) &SE_GetODRFilename, "	Get name of currently referred and loaded OpenDRIVE file \n	\n\n filename as string (const, since it's allocated and handled by esmini)\n\nC++: SE_GetODRFilename() --> const char *", pybind11::return_value_policy::automatic);

	// SE_GetSceneGraphFilename() file: line:215
	M("").def("SE_GetSceneGraphFilename", (const char * (*)()) &SE_GetSceneGraphFilename, "	Get name of currently referred and loaded SceneGraph file \n	\n\n filename as string (const, since it's allocated and handled by esmini)\n\nC++: SE_GetSceneGraphFilename() --> const char *", pybind11::return_value_policy::automatic);

	// SE_GetODRManager() file: line:231
	M("").def("SE_GetODRManager", (void * (*)()) &SE_GetODRManager, "C++: SE_GetODRManager() --> void *", pybind11::return_value_policy::automatic);

	// SE_ReportObjectPos(int, float, float, float, float, float, float, float, float) file: line:247
	M("").def("SE_ReportObjectPos", (int (*)(int, float, float, float, float, float, float, float, float)) &SE_ReportObjectPos, "	Report object position in cartesian coordinates\n	\n\n Id of the object\n	\n\n Timestamp (not really used yet, OK to set 0)\n	\n\n X coordinate\n	\n\n Y coordinate\n	\n\n Z coordinate\n	\n\n Heading / yaw\n	\n\n Pitch\n	\n\n Roll\n	\n\n Speed in forward direction of the enitity\n	\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectPos(int, float, float, float, float, float, float, float, float) --> int", pybind11::arg("id"), pybind11::arg("timestamp"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"), pybind11::arg("speed"));

	// SE_ReportObjectPosXYH(int, float, float, float, float, float) file: line:260
	M("").def("SE_ReportObjectPosXYH", (int (*)(int, float, float, float, float, float)) &SE_ReportObjectPosXYH, "	Report object position in limited set of cartesian coordinates x, y and heading,\n	the remaining z, pitch and roll will be aligned to the road surface\n	\n\n Id of the object\n	\n\n Timestamp (not really used yet, OK to set 0)\n	\n\n X coordinate\n	\n\n Y coordinate\n	\n\n Heading / yaw\n	\n\n Speed in forward direction of the enitity\n	\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectPosXYH(int, float, float, float, float, float) --> int", pybind11::arg("id"), pybind11::arg("timestamp"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"), pybind11::arg("speed"));

	// SE_ReportObjectRoadPos(int, float, int, int, float, float, float) file: line:273
	M("").def("SE_ReportObjectRoadPos", (int (*)(int, float, int, int, float, float, float)) &SE_ReportObjectRoadPos, "	Report object position in road coordinates\n	\n\n Id of the object\n	\n\n Timestamp (not really used yet, OK to set 0)\n	\n\n Id of the road \n	\n\n Id of the lane \n	\n\n Lateral offset from center of specified lane\n	\n\n Longitudinal distance of the position along the specified road\n	\n\n Speed in forward direction (s axis) of the enitity\n	\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectRoadPos(int, float, int, int, float, float, float) --> int", pybind11::arg("id"), pybind11::arg("timestamp"), pybind11::arg("roadId"), pybind11::arg("laneId"), pybind11::arg("laneOffset"), pybind11::arg("s"), pybind11::arg("speed"));

	// SE_ReportObjectSpeed(int, float) file: line:281
	M("").def("SE_ReportObjectSpeed", (int (*)(int, float)) &SE_ReportObjectSpeed, "	Report object longitudinal speed. Useful for an external longitudinal controller.\n	\n\n Id of the object\n	\n\n Speed in forward direction of the enitity\n	\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectSpeed(int, float) --> int", pybind11::arg("id"), pybind11::arg("speed"));

	// SE_ReportObjectLateralPosition(int, float) file: line:289
	M("").def("SE_ReportObjectLateralPosition", (int (*)(int, float)) &SE_ReportObjectLateralPosition, "	Report object lateral position relative road centerline. Useful for an external lateral controller.\n	\n\n Id of the object\n	\n\n Lateral position\n	\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectLateralPosition(int, float) --> int", pybind11::arg("id"), pybind11::arg("t"));

	// SE_ReportObjectLateralLanePosition(int, int, float) file: line:298
	M("").def("SE_ReportObjectLateralLanePosition", (int (*)(int, int, float)) &SE_ReportObjectLateralLanePosition, "	Report object lateral position by lane id and lane offset. Useful for an external lateral controller.\n	\n\n Id of the object\n	\n\n Id of the lane\n	\n\n Lateral offset from center of specified lane\n	\n\n 0 if successful, -1 if not\n\nC++: SE_ReportObjectLateralLanePosition(int, int, float) --> int", pybind11::arg("id"), pybind11::arg("laneId"), pybind11::arg("laneOffset"));

	// SE_GetNumberOfObjects() file: line:304
	M("").def("SE_GetNumberOfObjects", (int (*)()) &SE_GetNumberOfObjects, "	Get the number of entities in the current scenario\n	\n\n Number of entities\n\nC++: SE_GetNumberOfObjects() --> int");

	// SE_GetObjectName(int) file: line:319
	M("").def("SE_GetObjectName", (const char * (*)(int)) &SE_GetObjectName, "	Get the name of specified object\n	\n\n Index of the object. Note: not ID\n	\n\n Name\n\nC++: SE_GetObjectName(int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("index"));

	// SE_ObjectHasGhost(int) file: line:326
	M("").def("SE_ObjectHasGhost", (int (*)(int)) &SE_ObjectHasGhost, "	Check whether an object has a ghost (special purpose lead vehicle) \n	\n\n Index of the object. Note: not ID\n	\n\n 1 if ghost, 0 if not\n\nC++: SE_ObjectHasGhost(int) --> int", pybind11::arg("index"));

	// SE_AddObjectSensor(int, float, float, float, float, float, float, float, int) file: line:369
	M("").def("SE_AddObjectSensor", (int (*)(int, float, float, float, float, float, float, float, int)) &SE_AddObjectSensor, "	Create an ideal object sensor and attach to specified vehicle\n	\n\n Handle to the object to which the sensor should be attached\n	\n\n Position x coordinate of the sensor in vehicle local coordinates\n	\n\n Position y coordinate of the sensor in vehicle local coordinates\n	\n\n Position z coordinate of the sensor in vehicle local coordinates\n	\n\n heading of the sensor in vehicle local coordinates\n	\n\n Horizontal field of view, in degrees\n	\n\n Near value of the sensor depth range\n	\n\n Far value of the sensor depth range\n	\n\n Maximum number of objects theat the sensor can track\n	\n\n Sensor ID (Global index of sensor), -1 if unsucessful\n\nC++: SE_AddObjectSensor(int, float, float, float, float, float, float, float, int) --> int", pybind11::arg("object_id"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("rangeNear"), pybind11::arg("rangeFar"), pybind11::arg("fovH"), pybind11::arg("maxObj"));

	// SE_FetchSensorObjectList(int, int *) file: line:377
	M("").def("SE_FetchSensorObjectList", (int (*)(int, int *)) &SE_FetchSensorObjectList, "	Fetch list of identified objects from a sensor\n	\n\n Handle (index) to the sensor\n	\n\n Array of object indices\n	\n\n Number of identified objects, i.e. length of list. -1 if unsuccesful.\n\nC++: SE_FetchSensorObjectList(int, int *) --> int", pybind11::arg("sensor_id"), pybind11::arg("list"));

	// SE_GetNumberOfRoadSigns(int) file: line:394
	M("").def("SE_GetNumberOfRoadSigns", (int (*)(int)) &SE_GetNumberOfRoadSigns, "	Get the number of road signs along specified road \n	\n\n The road along which to look for signs\n	\n\n Number of road signs \n\nC++: SE_GetNumberOfRoadSigns(int) --> int", pybind11::arg("road_id"));

	// SE_OpenOSISocket(const char *) file: line:411
	M("").def("SE_OpenOSISocket", (int (*)(const char *)) &SE_OpenOSISocket, "	Send OSI packages over UDP to specified IP address\n\nC++: SE_OpenOSISocket(const char *) --> int", pybind11::arg("ipaddr"));

	// SE_DisableOSIFile() file: line:416
	M("").def("SE_DisableOSIFile", (void (*)()) &SE_DisableOSIFile, "	Switch off logging to OSI file(s)\n\nC++: SE_DisableOSIFile() --> void");

	// SE_EnableOSIFile(const char *) file: line:422
	M("").def("SE_EnableOSIFile", (void (*)(const char *)) &SE_EnableOSIFile, "	Switch on logging to OSI file(s)\n	\n\n Optional filename, including path. Set to 0 or \"\" to use default.\n\nC++: SE_EnableOSIFile(const char *) --> void", pybind11::arg("filename"));

	// SE_ClearOSIGroundTruth() file: line:427
	M("").def("SE_ClearOSIGroundTruth", (int (*)()) &SE_ClearOSIGroundTruth, "	The SE_ClearOSIGroundTruth clears the certain groundtruth data\n\nC++: SE_ClearOSIGroundTruth() --> int");

	// SE_UpdateOSIGroundTruth() file: line:432
	M("").def("SE_UpdateOSIGroundTruth", (int (*)()) &SE_UpdateOSIGroundTruth, "	The SE_UpdateOSIGroundTruth function calls SE_UpdateOSIStaticGroundTruth and SE_UpdateOSIDynamicGroundTruth\n\nC++: SE_UpdateOSIGroundTruth() --> int");

	// SE_UpdateOSIStaticGroundTruth() file: line:437
	M("").def("SE_UpdateOSIStaticGroundTruth", (int (*)()) &SE_UpdateOSIStaticGroundTruth, "	The SE_UpdateOSIStaticGroundTruth function returns a char array containing the osi static GroundTruth serialized to a string\n\nC++: SE_UpdateOSIStaticGroundTruth() --> int");

	// SE_UpdateOSIDynamicGroundTruth() file: line:442
	M("").def("SE_UpdateOSIDynamicGroundTruth", (int (*)()) &SE_UpdateOSIDynamicGroundTruth, "	The SE_UpdateOSIDynamicGroundTruth function returns a char array containing the osi dynamic GroundTruth serialized to a string\n\nC++: SE_UpdateOSIDynamicGroundTruth() --> int");

	// SE_GetOSIGroundTruth(int *) file: line:447
	M("").def("SE_GetOSIGroundTruth", (const char * (*)(int *)) &SE_GetOSIGroundTruth, "	The SE_GetOSIGroundTruth function returns a char array containing the osi GroundTruth serialized to a string\n\nC++: SE_GetOSIGroundTruth(int *) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("size"));

	// SE_GetOSIGroundTruthRaw() file: line:453
	M("").def("SE_GetOSIGroundTruthRaw", (const char * (*)()) &SE_GetOSIGroundTruthRaw, "	The SE_GetOSIGroundTruthRaw function returns a char array containing the OSI GroundTruth information\n	\n\n osi3::GroundTruth*\n\nC++: SE_GetOSIGroundTruthRaw() --> const char *", pybind11::return_value_policy::automatic);

	// SE_GetOSIRoadLane(int *, int) file: line:458
	M("").def("SE_GetOSIRoadLane", (const char * (*)(int *, int)) &SE_GetOSIRoadLane, "	The SE_GetOSIRoadLane function returns a char array containing the osi Lane information/message of the lane where the object with object_id is, serialized to a string\n\nC++: SE_GetOSIRoadLane(int *, int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("size"), pybind11::arg("object_id"));

	// SE_GetOSILaneBoundary(int *, int) file: line:463
	M("").def("SE_GetOSILaneBoundary", (const char * (*)(int *, int)) &SE_GetOSILaneBoundary, "	The SE_GetOSIRoadLane function returns a char array containing the osi Lane Boundary information/message with the specified GLOBAL id\n\nC++: SE_GetOSILaneBoundary(int *, int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("size"), pybind11::arg("global_id"));

	// SE_GetOSISensorDataRaw() file: line:476
	M("").def("SE_GetOSISensorDataRaw", (const char * (*)()) &SE_GetOSISensorDataRaw, "	The SE_GetOSISensorDataRaw function returns a char array containing the OSI SensorData information\n	\n\n osi3::SensorData*\n\nC++: SE_GetOSISensorDataRaw() --> const char *", pybind11::return_value_policy::automatic);

	// SE_OSIFileOpen(const char *) file: line:481
	M("").def("SE_OSIFileOpen", (bool (*)(const char *)) &SE_OSIFileOpen, "	Create and open osi file\n\nC++: SE_OSIFileOpen(const char *) --> bool", pybind11::arg("filename"));

	// SE_OSIFileWrite(bool) file: line:486
	M("").def("SE_OSIFileWrite", []() -> bool { return SE_OSIFileWrite(); }, "");
	M("").def("SE_OSIFileWrite", (bool (*)(bool)) &SE_OSIFileWrite, "	Create and open osi file\n\nC++: SE_OSIFileWrite(bool) --> bool", pybind11::arg("flush"));

	// SE_LogMessage(char *) file: line:488
	M("").def("SE_LogMessage", (void (*)(char *)) &SE_LogMessage, "C++: SE_LogMessage(char *) --> void", pybind11::arg("message"));

	// SE_ViewerShowFeature(int, bool) file: line:496
	M("").def("SE_ViewerShowFeature", (void (*)(int, bool)) &SE_ViewerShowFeature, "	The SE_GetOSILaneBoundaryIds function the global ids for left, far elft, right and far right lane boundaries\n	\n\n Type of the features, see viewer::NodeMask typedef\n	\n\n Set true to show features, false to hide\n\nC++: SE_ViewerShowFeature(int, bool) --> void", pybind11::arg("featureType"), pybind11::arg("enable"));

}


// File: unknown/unknown_1.cpp

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// SE_SimpleVehicleCreate(float, float, float, float) file: line:507
	M("").def("SE_SimpleVehicleCreate", (void * (*)(float, float, float, float)) &SE_SimpleVehicleCreate, "	Create an instance of a simplistic vehicle based on a 2D bicycle kincematic model\n	\n\n Initial position X world coordinate\n	\n\n Initial position Y world coordinate\n	\n\n Initial heading\n	\n\n Length of the vehicle\n	\n\n Handle to the created object\n\nC++: SE_SimpleVehicleCreate(float, float, float, float) --> void *", pybind11::return_value_policy::automatic, pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"), pybind11::arg("length"));

	// SE_SimpleVehicleDelete(void *) file: line:512
	M("").def("SE_SimpleVehicleDelete", (void (*)(void *)) &SE_SimpleVehicleDelete, "	Delete an instance of the simplistic vehicle model\n\nC++: SE_SimpleVehicleDelete(void *) --> void", pybind11::arg("handleSimpleVehicle"));

	// SE_SimpleVehicleControlBinary(void *, double, int, int) file: line:521
	M("").def("SE_SimpleVehicleControlBinary", (void (*)(void *, double, int, int)) &SE_SimpleVehicleControlBinary, "	Control the speed and steering with discreet [-1, 0, 1] values, suitable for keyboard control (e.g. up/none/down).\n	The function also steps the vehicle model, updating its position according to motion state and timestep.\n	\n\n timesStep (s)\n	\n\n Longitudinal control, -1: brake, 0: none, +1: accelerate\n	\n\n Lateral control, -1: left, 0: straight, 1: right\n\nC++: SE_SimpleVehicleControlBinary(void *, double, int, int) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("dt"), pybind11::arg("throttle"), pybind11::arg("steering"));

	// SE_SimpleVehicleControlAnalog(void *, double, double, double) file: line:530
	M("").def("SE_SimpleVehicleControlAnalog", (void (*)(void *, double, double, double)) &SE_SimpleVehicleControlAnalog, "	Control the speed and steering with floaing values in the range [-1, 1], suitable for driver models.\n	The function also steps the vehicle model, updating its position according to motion state and timestep.\n	\n\n timesStep (s)\n	\n\n Longitudinal control, -1: maximum brake, 0: no acceleration, +1: maximum acceleration\n	\n\n Lateral control, -1: max left, 0: straight, 1: max right\n\nC++: SE_SimpleVehicleControlAnalog(void *, double, double, double) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("dt"), pybind11::arg("throttle"), pybind11::arg("steering"));

	// SE_SimpleVehicleSetMaxSpeed(void *, float) file: line:536
	M("").def("SE_SimpleVehicleSetMaxSpeed", (void (*)(void *, float)) &SE_SimpleVehicleSetMaxSpeed, "	Set maximum vehicle speed.\n	\n\n Maximum speed (m/s)\n\nC++: SE_SimpleVehicleSetMaxSpeed(void *, float) --> void", pybind11::arg("handleSimpleVehicle"), pybind11::arg("speed"));

}


#include <map>
#include <memory>
#include <stdexcept>
#include <functional>
#include <string>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(pyesminilib, root_module) {
	root_module.doc() = "pyesminilib module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	std::vector< std::pair<std::string, std::string> > sub_modules {
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule(p.second.c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_unknown_unknown(M);
	bind_unknown_unknown_1(M);

}

// Source list file: /home/wave/repositories/esmini-pybind11/src/esminilib/pyesminilib.sources
// pyesminilib.cpp
// unknown/unknown.cpp
// unknown/unknown_1.cpp

// Modules list file: /home/wave/repositories/esmini-pybind11/src/esminilib/pyesminilib.modules
// 

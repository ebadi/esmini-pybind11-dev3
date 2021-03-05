// File: unknown/unknown.cpp

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiRMLib.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// RM_Init(const char *) file: line:66
	M("").def("RM_Init", (int (*)(const char *)) &RM_Init, "C++: RM_Init(const char *) --> int", pybind11::arg("odrFilename"));

	// RM_Close() file: line:68
	M("").def("RM_Close", (int (*)()) &RM_Close, "C++: RM_Close() --> int");

	// RM_CreatePosition() file: line:74
	M("").def("RM_CreatePosition", (int (*)()) &RM_CreatePosition, "	Create a position object\n	\n\n Handle to the position object, to use for operations\n\nC++: RM_CreatePosition() --> int");

	// RM_GetNrOfPositions() file: line:80
	M("").def("RM_GetNrOfPositions", (int (*)()) &RM_GetNrOfPositions, "	Get the number of created position objects\n	\n\n Number of created position objects\n\nC++: RM_GetNrOfPositions() --> int");

	// RM_DeletePosition(int) file: line:87
	M("").def("RM_DeletePosition", (int (*)(int)) &RM_DeletePosition, "	Delete one or all position object(s)\n	\n\n Handle to the position object. Set -1 to delete all.\n	\n\n 0 if succesful, -1 if specified position(s) could not be deleted\n\nC++: RM_DeletePosition(int) --> int", pybind11::arg("handle"));

	// RM_GetNumberOfRoads() file: line:93
	M("").def("RM_GetNumberOfRoads", (int (*)()) &RM_GetNumberOfRoads, "	Get the total number fo roads in the road network of the currently loaded OpenDRIVE file.\n	\n\n Number of roads\n\nC++: RM_GetNumberOfRoads() --> int");

	// RM_GetIdOfRoadFromIndex(int) file: line:100
	M("").def("RM_GetIdOfRoadFromIndex", (int (*)(int)) &RM_GetIdOfRoadFromIndex, "	Get the Road ID of the road with specified index. E.g. if there are 4 roads, index 3 means the last one.\n	\n\n The index of the road\n	\n\n The ID of the road\n\nC++: RM_GetIdOfRoadFromIndex(int) --> int", pybind11::arg("index"));

	// RM_GetRoadLength(int) file: line:107
	M("").def("RM_GetRoadLength", (float (*)(int)) &RM_GetRoadLength, "	Get the lenght of road with specified ID\n	\n\n The road ID \n	\n\n The length of the road if ID exists, else 0.0\n\nC++: RM_GetRoadLength(int) --> float", pybind11::arg("id"));

	// RM_GetRoadNumberOfLanes(int, float) file: line:115
	M("").def("RM_GetRoadNumberOfLanes", (int (*)(int, float)) &RM_GetRoadNumberOfLanes, "	Get the number of drivable lanes of specified road\n	\n\n The road ID\n	\n\n The distance along the road at what point to check number of lanes (which can vary along the road)\n	\n\n The number of drivable lanes\n\nC++: RM_GetRoadNumberOfLanes(int, float) --> int", pybind11::arg("roadId"), pybind11::arg("s"));

	// RM_GetLaneIdByIndex(int, int, float) file: line:124
	M("").def("RM_GetLaneIdByIndex", (int (*)(int, int, float)) &RM_GetLaneIdByIndex, "	Get the ID of the lane given by index\n	\n\n The road ID\n	\n\n The index of the lane \n	\n\n The distance along the road at what point to look up the lane ID\n	\n\n The lane ID\n\nC++: RM_GetLaneIdByIndex(int, int, float) --> int", pybind11::arg("roadId"), pybind11::arg("laneIndex"), pybind11::arg("s"));

	// RM_SetLanePosition(int, int, int, float, float, bool) file: line:136
	M("").def("RM_SetLanePosition", (int (*)(int, int, int, float, float, bool)) &RM_SetLanePosition, "	Set position from road coordinates, world coordinates being calculated\n	\n\n Handle to the position object\n	\n\n Road specifier\n	\n\n Lane specifier\n	\n\n Offset from lane center\n	\n\n Distance along the specified road\n	\n\n If true the heading will be reset to the lane driving direction (typically only at initialization)\n	\n\n 0 if successful, -1 if not\n\nC++: RM_SetLanePosition(int, int, int, float, float, bool) --> int", pybind11::arg("handle"), pybind11::arg("roadId"), pybind11::arg("laneId"), pybind11::arg("laneOffset"), pybind11::arg("s"), pybind11::arg("align"));

	// RM_SetS(int, float) file: line:144
	M("").def("RM_SetS", (int (*)(int, float)) &RM_SetS, "	Set s (distance) part of a lane position, world coordinates being calculated\n	\n\n Handle to the position object\n	\n\n Distance along the specified road\n	\n\n 0 if successful, -1 if not\n\nC++: RM_SetS(int, float) --> int", pybind11::arg("handle"), pybind11::arg("s"));

	// RM_SetWorldPosition(int, float, float, float, float, float, float) file: line:157
	M("").def("RM_SetWorldPosition", (int (*)(int, float, float, float, float, float, float)) &RM_SetWorldPosition, "	Set position from world coordinates, road coordinates being calculated\n	\n\n Handle to the position object\n	\n\n cartesian coordinate x value\n	\n\n cartesian coordinate y value\n	\n\n cartesian coordinate z value\n	\n\n rotation heading value\n	\n\n rotation pitch value\n	\n\n rotation roll value\n	\n\n 0 if successful, -1 if not\n\nC++: RM_SetWorldPosition(int, float, float, float, float, float, float) --> int", pybind11::arg("handle"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"));

	// RM_SetWorldXYHPosition(int, float, float, float) file: line:167
	M("").def("RM_SetWorldXYHPosition", (int (*)(int, float, float, float)) &RM_SetWorldXYHPosition, "	Set position from world X, Y and heading coordinates; Z, pitch and road coordinates being calculated\n	\n\n Handle to the position object\n	\n\n cartesian coordinate x value\n	\n\n cartesian coordinate y value\n	\n\n rotation heading value\n	\n\n 0 if successful, -1 if not\n\nC++: RM_SetWorldXYHPosition(int, float, float, float) --> int", pybind11::arg("handle"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));

	// RM_PositionMoveForward(int, float, int) file: line:187
	M("").def("RM_PositionMoveForward", (int (*)(int, float, int)) &RM_PositionMoveForward, "	Move position forward along the road. Choose way randomly though any junctions.\n	\n\n Handle to the position object\n	\n\n Distance (meter) to move\n	\n\n How to move in a junction where multiple route options appear, see Junction::JunctionStrategyType\n	\n\n 0 if successful, -1 if not\n\nC++: RM_PositionMoveForward(int, float, int) --> int", pybind11::arg("handle"), pybind11::arg("dist"), pybind11::arg("strategy"));

	// RM_GetSpeedLimit(int) file: line:202
	M("").def("RM_GetSpeedLimit", (float (*)(int)) &RM_GetSpeedLimit, "	Retrieve current speed limit (at current road, s-value and lane) based on ODR type elements or nr of lanes\n	\n\n Handle to the position object\n	\n\n 0 if successful, -1 if not\n\nC++: RM_GetSpeedLimit(int) --> float", pybind11::arg("handle"));

}


#include <map>
#include <memory>
#include <stdexcept>
#include <functional>
#include <string>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(pyesminirmlib, root_module) {
	root_module.doc() = "pyesminirmlib module";

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

}

// Source list file: /home/wave/repositories/esmini-pybind11/src/esminirmlib/pyesminirmlib.sources
// pyesminirmlib.cpp
// unknown/unknown.cpp

// Modules list file: /home/wave/repositories/esmini-pybind11/src/esminirmlib/pyesminirmlib.modules
// 

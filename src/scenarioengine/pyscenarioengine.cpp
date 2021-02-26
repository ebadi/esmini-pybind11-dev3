// File: unknown/unknown.cpp
#include <sstream> // __str__

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "ScenarioEngine.hpp"
#include "CommonMini.hpp"
#include "ControllerFollowGhost.hpp"
#include "ControllerExternal.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // scenarioengine::ObjectTrail file: line:29
		pybind11::class_<scenarioengine::ObjectTrail, std::shared_ptr<scenarioengine::ObjectTrail>> cl(M("scenarioengine"), "ObjectTrail", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::ObjectTrail(); } ) );
		cl.def( pybind11::init( [](scenarioengine::ObjectTrail const &o){ return new scenarioengine::ObjectTrail(o); } ) );
		cl.def_readwrite("n_states_", &scenarioengine::ObjectTrail::n_states_);
		cl.def_readwrite("current_", &scenarioengine::ObjectTrail::current_);
		cl.def("AddState", (void (scenarioengine::ObjectTrail::*)(float, float, float, float, float)) &scenarioengine::ObjectTrail::AddState, "C++: scenarioengine::ObjectTrail::AddState(float, float, float, float, float) --> void", pybind11::arg("timestamp"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("speed"));
		cl.def("GetNextSegmentIndex", (int (scenarioengine::ObjectTrail::*)(int)) &scenarioengine::ObjectTrail::GetNextSegmentIndex, "C++: scenarioengine::ObjectTrail::GetNextSegmentIndex(int) --> int", pybind11::arg("index"));
		cl.def("GetPreviousSegmentIndex", (int (scenarioengine::ObjectTrail::*)(int)) &scenarioengine::ObjectTrail::GetPreviousSegmentIndex, "C++: scenarioengine::ObjectTrail::GetPreviousSegmentIndex(int) --> int", pybind11::arg("index"));
		cl.def("GetSegmentlength", (double (scenarioengine::ObjectTrail::*)(int)) &scenarioengine::ObjectTrail::GetSegmentlength, "C++: scenarioengine::ObjectTrail::GetSegmentlength(int) --> double", pybind11::arg("index"));
		cl.def("GetPointOnSegmentByDist", (void (scenarioengine::ObjectTrail::*)(int, double, double &, double &, double &)) &scenarioengine::ObjectTrail::GetPointOnSegmentByDist, "C++: scenarioengine::ObjectTrail::GetPointOnSegmentByDist(int, double, double &, double &, double &) --> void", pybind11::arg("index"), pybind11::arg("dist"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("GetPointOnSegmentBySNorm", (void (scenarioengine::ObjectTrail::*)(int, double, double &, double &, double &)) &scenarioengine::ObjectTrail::GetPointOnSegmentBySNorm, "C++: scenarioengine::ObjectTrail::GetPointOnSegmentBySNorm(int, double, double &, double &, double &) --> void", pybind11::arg("index"), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("GetSpeedOnSegmentByDist", (void (scenarioengine::ObjectTrail::*)(int, double, double &)) &scenarioengine::ObjectTrail::GetSpeedOnSegmentByDist, "C++: scenarioengine::ObjectTrail::GetSpeedOnSegmentByDist(int, double, double &) --> void", pybind11::arg("index"), pybind11::arg("dist"), pybind11::arg("speed"));
		cl.def("GetSpeedOnSegmentBySNorm", (void (scenarioengine::ObjectTrail::*)(int, double, double &)) &scenarioengine::ObjectTrail::GetSpeedOnSegmentBySNorm, "C++: scenarioengine::ObjectTrail::GetSpeedOnSegmentBySNorm(int, double, double &) --> void", pybind11::arg("index"), pybind11::arg("s"), pybind11::arg("speed"));
		cl.def("GetHeadingOnSegmentByDist", (void (scenarioengine::ObjectTrail::*)(int, double, double &)) &scenarioengine::ObjectTrail::GetHeadingOnSegmentByDist, "C++: scenarioengine::ObjectTrail::GetHeadingOnSegmentByDist(int, double, double &) --> void", pybind11::arg("index"), pybind11::arg("dist"), pybind11::arg("heading"));
		cl.def("GetHeadingOnSegmentBySNorm", (void (scenarioengine::ObjectTrail::*)(int, double, double &)) &scenarioengine::ObjectTrail::GetHeadingOnSegmentBySNorm, "C++: scenarioengine::ObjectTrail::GetHeadingOnSegmentBySNorm(int, double, double &) --> void", pybind11::arg("index"), pybind11::arg("s"), pybind11::arg("heading"));
		cl.def("QuadDistToPoint", (double (scenarioengine::ObjectTrail::*)(double, double, int)) &scenarioengine::ObjectTrail::QuadDistToPoint, "C++: scenarioengine::ObjectTrail::QuadDistToPoint(double, double, int) --> double", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("idx"));
		cl.def("FindClosestPoint", (int (scenarioengine::ObjectTrail::*)(double, double, double &, double &, double &, int &, int)) &scenarioengine::ObjectTrail::FindClosestPoint, "C++: scenarioengine::ObjectTrail::FindClosestPoint(double, double, double &, double &, double &, int &, int) --> int", pybind11::arg("x0"), pybind11::arg("y0"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("s"), pybind11::arg("idx"), pybind11::arg("start_search_index"));
		cl.def("assign", (class scenarioengine::ObjectTrail & (scenarioengine::ObjectTrail::*)(const class scenarioengine::ObjectTrail &)) &scenarioengine::ObjectTrail::operator=, "C++: scenarioengine::ObjectTrail::operator=(const class scenarioengine::ObjectTrail &) --> class scenarioengine::ObjectTrail &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


// File: unknown/unknown_1.cpp
#include <iterator>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "ScenarioEngine.hpp"
#include "CommonMini.hpp"
#include "ControllerFollowGhost.hpp"
#include "ControllerExternal.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // scenarioengine::Center file: line:35
		pybind11::class_<scenarioengine::Center, std::shared_ptr<scenarioengine::Center>> cl(M("scenarioengine"), "Center", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Center(); } ) );
		cl.def( pybind11::init( [](scenarioengine::Center const &o){ return new scenarioengine::Center(o); } ) );
		cl.def_readwrite("x_", &scenarioengine::Center::x_);
		cl.def_readwrite("y_", &scenarioengine::Center::y_);
		cl.def_readwrite("z_", &scenarioengine::Center::z_);
		cl.def("assign", (class scenarioengine::Center & (scenarioengine::Center::*)(const class scenarioengine::Center &)) &scenarioengine::Center::operator=, "C++: scenarioengine::Center::operator=(const class scenarioengine::Center &) --> class scenarioengine::Center &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::Dimensions file: line:53
		pybind11::class_<scenarioengine::Dimensions, std::shared_ptr<scenarioengine::Dimensions>> cl(M("scenarioengine"), "Dimensions", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Dimensions(); } ) );
		cl.def( pybind11::init( [](scenarioengine::Dimensions const &o){ return new scenarioengine::Dimensions(o); } ) );
		cl.def_readwrite("width_", &scenarioengine::Dimensions::width_);
		cl.def_readwrite("length_", &scenarioengine::Dimensions::length_);
		cl.def_readwrite("height_", &scenarioengine::Dimensions::height_);
		cl.def("assign", (class scenarioengine::Dimensions & (scenarioengine::Dimensions::*)(const class scenarioengine::Dimensions &)) &scenarioengine::Dimensions::operator=, "C++: scenarioengine::Dimensions::operator=(const class scenarioengine::Dimensions &) --> class scenarioengine::Dimensions &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCBoundingBox file: line:70
		pybind11::class_<scenarioengine::OSCBoundingBox, std::shared_ptr<scenarioengine::OSCBoundingBox>> cl(M("scenarioengine"), "OSCBoundingBox", "");
		cl.def( pybind11::init( [](scenarioengine::OSCBoundingBox const &o){ return new scenarioengine::OSCBoundingBox(o); } ) );
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCBoundingBox(); } ) );
		cl.def_readwrite("center_", &scenarioengine::OSCBoundingBox::center_);
		cl.def_readwrite("dimensions_", &scenarioengine::OSCBoundingBox::dimensions_);
		cl.def("assign", (class scenarioengine::OSCBoundingBox & (scenarioengine::OSCBoundingBox::*)(const class scenarioengine::OSCBoundingBox &)) &scenarioengine::OSCBoundingBox::operator=, "C++: scenarioengine::OSCBoundingBox::operator=(const class scenarioengine::OSCBoundingBox &) --> class scenarioengine::OSCBoundingBox &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::Object file: line:28
		pybind11::class_<scenarioengine::Object, std::shared_ptr<scenarioengine::Object>> cl(M("scenarioengine"), "Object", "");
		cl.def( pybind11::init<scenarioengine::Object::Type>(), pybind11::arg("type") );

		cl.def( pybind11::init( [](scenarioengine::Object const &o){ return new scenarioengine::Object(o); } ) );
		cl.def_readwrite("type_", &scenarioengine::Object::type_);
		cl.def_readwrite("category_holder_", &scenarioengine::Object::category_holder_);
		cl.def_readwrite("name_", &scenarioengine::Object::name_);
		cl.def_readwrite("id_", &scenarioengine::Object::id_);
		cl.def_readwrite("trail_follow_index_", &scenarioengine::Object::trail_follow_index_);
		cl.def_readwrite("trail_follow_s_", &scenarioengine::Object::trail_follow_s_);
		cl.def_readwrite("speed_", &scenarioengine::Object::speed_);
		cl.def_readwrite("wheel_angle_", &scenarioengine::Object::wheel_angle_);
		cl.def_readwrite("wheel_rot_", &scenarioengine::Object::wheel_rot_);
		cl.def_readwrite("pos_", &scenarioengine::Object::pos_);
		cl.def_readwrite("model_filepath_", &scenarioengine::Object::model_filepath_);
		cl.def_readwrite("model_id_", &scenarioengine::Object::model_id_);
		cl.def_readwrite("trail_", &scenarioengine::Object::trail_);
		cl.def_readwrite("odometer_", &scenarioengine::Object::odometer_);
		cl.def_readwrite("boundingbox_", &scenarioengine::Object::boundingbox_);
		cl.def_readwrite("end_of_road_timestamp_", &scenarioengine::Object::end_of_road_timestamp_);
		cl.def_readwrite("off_road_timestamp_", &scenarioengine::Object::off_road_timestamp_);
		cl.def_readwrite("stand_still_timestamp_", &scenarioengine::Object::stand_still_timestamp_);
		cl.def_readwrite("headstart_time_", &scenarioengine::Object::headstart_time_);
		cl.def_readwrite("visibilityMask_", &scenarioengine::Object::visibilityMask_);
		cl.def_readwrite("dirty_", &scenarioengine::Object::dirty_);
		cl.def_readwrite("reset_", &scenarioengine::Object::reset_);
		cl.def_readwrite("isGhost_", &scenarioengine::Object::isGhost_);
		cl.def("SetEndOfRoad", [](scenarioengine::Object &o, bool const & a0) -> void { return o.SetEndOfRoad(a0); }, "", pybind11::arg("state"));
		cl.def("SetEndOfRoad", (void (scenarioengine::Object::*)(bool, double)) &scenarioengine::Object::SetEndOfRoad, "C++: scenarioengine::Object::SetEndOfRoad(bool, double) --> void", pybind11::arg("state"), pybind11::arg("time"));
		cl.def("IsEndOfRoad", (bool (scenarioengine::Object::*)()) &scenarioengine::Object::IsEndOfRoad, "C++: scenarioengine::Object::IsEndOfRoad() --> bool");
		cl.def("GetEndOfRoadTimestamp", (double (scenarioengine::Object::*)()) &scenarioengine::Object::GetEndOfRoadTimestamp, "C++: scenarioengine::Object::GetEndOfRoadTimestamp() --> double");
		cl.def("SetOffRoad", [](scenarioengine::Object &o, bool const & a0) -> void { return o.SetOffRoad(a0); }, "", pybind11::arg("state"));
		cl.def("SetOffRoad", (void (scenarioengine::Object::*)(bool, double)) &scenarioengine::Object::SetOffRoad, "C++: scenarioengine::Object::SetOffRoad(bool, double) --> void", pybind11::arg("state"), pybind11::arg("time"));
		cl.def("IsOffRoad", (bool (scenarioengine::Object::*)()) &scenarioengine::Object::IsOffRoad, "C++: scenarioengine::Object::IsOffRoad() --> bool");
		cl.def("GetOffRoadTimestamp", (double (scenarioengine::Object::*)()) &scenarioengine::Object::GetOffRoadTimestamp, "C++: scenarioengine::Object::GetOffRoadTimestamp() --> double");
		cl.def("SetStandStill", [](scenarioengine::Object &o, bool const & a0) -> void { return o.SetStandStill(a0); }, "", pybind11::arg("state"));
		cl.def("SetStandStill", (void (scenarioengine::Object::*)(bool, double)) &scenarioengine::Object::SetStandStill, "C++: scenarioengine::Object::SetStandStill(bool, double) --> void", pybind11::arg("state"), pybind11::arg("time"));
		cl.def("IsStandStill", (bool (scenarioengine::Object::*)()) &scenarioengine::Object::IsStandStill, "C++: scenarioengine::Object::IsStandStill() --> bool");
		cl.def("GetStandStillTimestamp", (double (scenarioengine::Object::*)()) &scenarioengine::Object::GetStandStillTimestamp, "C++: scenarioengine::Object::GetStandStillTimestamp() --> double");
		cl.def("Collision", (bool (scenarioengine::Object::*)(class scenarioengine::Object *)) &scenarioengine::Object::Collision, "<summary>\n Check if object is colliding with specified target object\n Definition of collision is being overlapping bounding boxes\n </summary>\n <param name=\"target\">The object to check</param>\n <returns>true if bounding boxes overlap else false</returns>\n\nC++: scenarioengine::Object::Collision(class scenarioengine::Object *) --> bool", pybind11::arg("target"));
		cl.def("SetSpeed", (void (scenarioengine::Object::*)(double)) &scenarioengine::Object::SetSpeed, "C++: scenarioengine::Object::SetSpeed(double) --> void", pybind11::arg("speed"));
		cl.def("GetSpeed", (double (scenarioengine::Object::*)()) &scenarioengine::Object::GetSpeed, "C++: scenarioengine::Object::GetSpeed() --> double");
		cl.def("SetAssignedController", (void (scenarioengine::Object::*)(class scenarioengine::Controller *)) &scenarioengine::Object::SetAssignedController, "C++: scenarioengine::Object::SetAssignedController(class scenarioengine::Controller *) --> void", pybind11::arg("controller"));
		cl.def("GetAssignedControllerType", (int (scenarioengine::Object::*)()) &scenarioengine::Object::GetAssignedControllerType, "C++: scenarioengine::Object::GetAssignedControllerType() --> int");
		cl.def("GetActivatedControllerType", (int (scenarioengine::Object::*)()) &scenarioengine::Object::GetActivatedControllerType, "C++: scenarioengine::Object::GetActivatedControllerType() --> int");
		cl.def("IsControllerActiveOnDomains", (bool (scenarioengine::Object::*)(int)) &scenarioengine::Object::IsControllerActiveOnDomains, "C++: scenarioengine::Object::IsControllerActiveOnDomains(int) --> bool", pybind11::arg("domainMask"));
		cl.def("IsControllerActiveOnAnyOfDomains", (bool (scenarioengine::Object::*)(int)) &scenarioengine::Object::IsControllerActiveOnAnyOfDomains, "C++: scenarioengine::Object::IsControllerActiveOnAnyOfDomains(int) --> bool", pybind11::arg("domainMask"));
		cl.def("IsControllerActive", (bool (scenarioengine::Object::*)()) &scenarioengine::Object::IsControllerActive, "C++: scenarioengine::Object::IsControllerActive() --> bool");
		cl.def("GetControllerMode", (int (scenarioengine::Object::*)()) &scenarioengine::Object::GetControllerMode, "C++: scenarioengine::Object::GetControllerMode() --> int");
		cl.def("GetId", (int (scenarioengine::Object::*)()) &scenarioengine::Object::GetId, "C++: scenarioengine::Object::GetId() --> int");
		cl.def("SetHeadstartTime", (void (scenarioengine::Object::*)(double)) &scenarioengine::Object::SetHeadstartTime, "C++: scenarioengine::Object::SetHeadstartTime(double) --> void", pybind11::arg("headstartTime"));
		cl.def("GetHeadstartTime", (double (scenarioengine::Object::*)()) &scenarioengine::Object::GetHeadstartTime, "C++: scenarioengine::Object::GetHeadstartTime() --> double");
		cl.def("SetGhost", (void (scenarioengine::Object::*)(class scenarioengine::Object *)) &scenarioengine::Object::SetGhost, "C++: scenarioengine::Object::SetGhost(class scenarioengine::Object *) --> void", pybind11::arg("ghost"));
		cl.def("GetGhost", (class scenarioengine::Object * (scenarioengine::Object::*)()) &scenarioengine::Object::GetGhost, "C++: scenarioengine::Object::GetGhost() --> class scenarioengine::Object *", pybind11::return_value_policy::automatic);
		cl.def("SetVisibilityMask", (void (scenarioengine::Object::*)(int)) &scenarioengine::Object::SetVisibilityMask, "C++: scenarioengine::Object::SetVisibilityMask(int) --> void", pybind11::arg("mask"));
		cl.def("IsGhost", (bool (scenarioengine::Object::*)()) &scenarioengine::Object::IsGhost, "C++: scenarioengine::Object::IsGhost() --> bool");
		cl.def("CheckDirtyBits", (bool (scenarioengine::Object::*)(int)) &scenarioengine::Object::CheckDirtyBits, "C++: scenarioengine::Object::CheckDirtyBits(int) --> bool", pybind11::arg("bits"));
		cl.def("SetDirtyBits", (void (scenarioengine::Object::*)(int)) &scenarioengine::Object::SetDirtyBits, "C++: scenarioengine::Object::SetDirtyBits(int) --> void", pybind11::arg("bits"));
		cl.def("ClearDirtyBits", (void (scenarioengine::Object::*)(int)) &scenarioengine::Object::ClearDirtyBits, "C++: scenarioengine::Object::ClearDirtyBits(int) --> void", pybind11::arg("bits"));
		cl.def("assign", (class scenarioengine::Object & (scenarioengine::Object::*)(const class scenarioengine::Object &)) &scenarioengine::Object::operator=, "C++: scenarioengine::Object::operator=(const class scenarioengine::Object &) --> class scenarioengine::Object &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		{ // scenarioengine::Object::Property file: line:55
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::Object::Property, std::shared_ptr<scenarioengine::Object::Property>> cl(enclosing_class, "Property", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::Object::Property(); } ) );
			cl.def( pybind11::init( [](scenarioengine::Object::Property const &o){ return new scenarioengine::Object::Property(o); } ) );
			cl.def_readwrite("name_", &scenarioengine::Object::Property::name_);
			cl.def_readwrite("value_", &scenarioengine::Object::Property::value_);
		}

	}
	{ // scenarioengine::Vehicle file: line:180
		pybind11::class_<scenarioengine::Vehicle, std::shared_ptr<scenarioengine::Vehicle>, scenarioengine::Object> cl(M("scenarioengine"), "Vehicle", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Vehicle(); } ) );
		cl.def( pybind11::init( [](scenarioengine::Vehicle const &o){ return new scenarioengine::Vehicle(o); } ) );
		cl.def_readwrite("category_", &scenarioengine::Vehicle::category_);
		cl.def("assign", (class scenarioengine::Vehicle & (scenarioengine::Vehicle::*)(const class scenarioengine::Vehicle &)) &scenarioengine::Vehicle::operator=, "C++: scenarioengine::Vehicle::operator=(const class scenarioengine::Vehicle &) --> class scenarioengine::Vehicle &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::Pedestrian file: line:231
		pybind11::class_<scenarioengine::Pedestrian, std::shared_ptr<scenarioengine::Pedestrian>, scenarioengine::Object> cl(M("scenarioengine"), "Pedestrian", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Pedestrian(); } ) );
		cl.def( pybind11::init( [](scenarioengine::Pedestrian const &o){ return new scenarioengine::Pedestrian(o); } ) );
		cl.def_readwrite("model_", &scenarioengine::Pedestrian::model_);
		cl.def_readwrite("mass_", &scenarioengine::Pedestrian::mass_);
		cl.def_readwrite("name_", &scenarioengine::Pedestrian::name_);
		cl.def_readwrite("category_", &scenarioengine::Pedestrian::category_);
	}
	{ // scenarioengine::MiscObject file: line:279
		pybind11::class_<scenarioengine::MiscObject, std::shared_ptr<scenarioengine::MiscObject>, scenarioengine::Object> cl(M("scenarioengine"), "MiscObject", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::MiscObject(); } ) );
		cl.def( pybind11::init( [](scenarioengine::MiscObject const &o){ return new scenarioengine::MiscObject(o); } ) );
		cl.def_readwrite("model_", &scenarioengine::MiscObject::model_);
		cl.def_readwrite("mass_", &scenarioengine::MiscObject::mass_);
		cl.def_readwrite("name_", &scenarioengine::MiscObject::name_);
		cl.def_readwrite("category_", &scenarioengine::MiscObject::category_);
	}
	{ // scenarioengine::Entities file: line:394
		pybind11::class_<scenarioengine::Entities, std::shared_ptr<scenarioengine::Entities>> cl(M("scenarioengine"), "Entities", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Entities(); } ) );
		cl.def( pybind11::init( [](scenarioengine::Entities const &o){ return new scenarioengine::Entities(o); } ) );
		cl.def_readwrite("object_", &scenarioengine::Entities::object_);
		cl.def("Print", (void (scenarioengine::Entities::*)()) &scenarioengine::Entities::Print, "C++: scenarioengine::Entities::Print() --> void");
		cl.def("addObject", (int (scenarioengine::Entities::*)(class scenarioengine::Object *)) &scenarioengine::Entities::addObject, "C++: scenarioengine::Entities::addObject(class scenarioengine::Object *) --> int", pybind11::arg("obj"));
		cl.def("removeObject", (void (scenarioengine::Entities::*)(int)) &scenarioengine::Entities::removeObject, "C++: scenarioengine::Entities::removeObject(int) --> void", pybind11::arg("id"));
		cl.def("getNewId", (int (scenarioengine::Entities::*)()) &scenarioengine::Entities::getNewId, "C++: scenarioengine::Entities::getNewId() --> int");
		cl.def("indexExists", (bool (scenarioengine::Entities::*)(int)) &scenarioengine::Entities::indexExists, "C++: scenarioengine::Entities::indexExists(int) --> bool", pybind11::arg("id"));
		cl.def("GetObjectById", (class scenarioengine::Object * (scenarioengine::Entities::*)(int)) &scenarioengine::Entities::GetObjectById, "C++: scenarioengine::Entities::GetObjectById(int) --> class scenarioengine::Object *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("assign", (class scenarioengine::Entities & (scenarioengine::Entities::*)(const class scenarioengine::Entities &)) &scenarioengine::Entities::operator=, "C++: scenarioengine::Entities::operator=(const class scenarioengine::Entities &) --> class scenarioengine::Entities &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::Entry file: line:40
		pybind11::class_<scenarioengine::Entry, std::shared_ptr<scenarioengine::Entry>> cl(M("scenarioengine"), "Entry", "");
		cl.def( pybind11::init( [](scenarioengine::Entry const &o){ return new scenarioengine::Entry(o); } ) );
		cl.def_readwrite("name_", &scenarioengine::Entry::name_);
		cl.def_readwrite("node_", &scenarioengine::Entry::node_);
		cl.def_readwrite("type_", &scenarioengine::Entry::type_);
	}
}


// File: unknown/unknown_2.cpp
#include <iterator>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "ScenarioEngine.hpp"
#include "CommonMini.hpp"
#include "ControllerFollowGhost.hpp"
#include "ControllerExternal.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// scenarioengine::StoryBoardElement file: line:20
struct PyCallBack_scenarioengine_StoryBoardElement : public scenarioengine::StoryBoardElement {
	using scenarioengine::StoryBoardElement::StoryBoardElement;

	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::StoryBoardElement *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Start();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::StoryBoardElement *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::StoryBoardElement *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::OSCAction file: line:173
struct PyCallBack_scenarioengine_OSCAction : public scenarioengine::OSCAction {
	using scenarioengine::OSCAction::OSCAction;

	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"OSCAction::Step\"");
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Start();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::OSCGlobalAction file: line:22
struct PyCallBack_scenarioengine_OSCGlobalAction : public scenarioengine::OSCGlobalAction {
	using scenarioengine::OSCGlobalAction::OSCGlobalAction;

	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCGlobalAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCGlobalAction::print();
	}
	class scenarioengine::OSCGlobalAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCGlobalAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCGlobalAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCGlobalAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCGlobalAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCGlobalAction *>(std::move(o));
		}
		return OSCGlobalAction::Copy();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCGlobalAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"OSCAction::Step\"");
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCGlobalAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Start();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCGlobalAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCGlobalAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::ParameterSetAction file: line:54
struct PyCallBack_scenarioengine_ParameterSetAction : public scenarioengine::ParameterSetAction {
	using scenarioengine::ParameterSetAction::ParameterSetAction;

	class scenarioengine::OSCGlobalAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ParameterSetAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCGlobalAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCGlobalAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCGlobalAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCGlobalAction *>(std::move(o));
		}
		return ParameterSetAction::Copy();
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ParameterSetAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ParameterSetAction::Start();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ParameterSetAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ParameterSetAction::Step(a0, a1);
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ParameterSetAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ParameterSetAction::print();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ParameterSetAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ParameterSetAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::OSCPosition file: line:40
struct PyCallBack_scenarioengine_OSCPosition : public scenarioengine::OSCPosition {
	using scenarioengine::OSCPosition::OSCPosition;

	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPosition *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return OSCPosition::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPosition *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return OSCPosition::GetY();
	}
	double GetZ() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPosition *>(this), "GetZ");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return OSCPosition::GetZ();
	}
	double GetH() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPosition *>(this), "GetH");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return OSCPosition::GetH();
	}
	double GetP() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPosition *>(this), "GetP");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return OSCPosition::GetP();
	}
	double GetR() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPosition *>(this), "GetR");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return OSCPosition::GetR();
	}
	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPosition *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"OSCPosition::Print\"");
	}
};

// scenarioengine::OSCPositionWorld file: line:76
struct PyCallBack_scenarioengine_OSCPositionWorld : public scenarioengine::OSCPositionWorld {
	using scenarioengine::OSCPositionWorld::OSCPositionWorld;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPositionWorld *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPositionWorld::Print();
	}
};

void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // scenarioengine::Catalog file: line:58
		pybind11::class_<scenarioengine::Catalog, std::shared_ptr<scenarioengine::Catalog>> cl(M("scenarioengine"), "Catalog", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Catalog(); } ) );
		cl.def( pybind11::init( [](scenarioengine::Catalog const &o){ return new scenarioengine::Catalog(o); } ) );
		cl.def_readwrite("name_", &scenarioengine::Catalog::name_);
		cl.def_readwrite("type_", &scenarioengine::Catalog::type_);
		cl.def_readwrite("entry_", &scenarioengine::Catalog::entry_);
		cl.def("GetType", (scenarioengine::CatalogType (scenarioengine::Catalog::*)()) &scenarioengine::Catalog::GetType, "C++: scenarioengine::Catalog::GetType() --> scenarioengine::CatalogType");
		cl.def("AddEntry", (void (scenarioengine::Catalog::*)(class scenarioengine::Entry *)) &scenarioengine::Catalog::AddEntry, "C++: scenarioengine::Catalog::AddEntry(class scenarioengine::Entry *) --> void", pybind11::arg("entry"));
	}
	{ // scenarioengine::Catalogs file: line:88
		pybind11::class_<scenarioengine::Catalogs, std::shared_ptr<scenarioengine::Catalogs>> cl(M("scenarioengine"), "Catalogs", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Catalogs(); } ) );
		cl.def( pybind11::init( [](scenarioengine::Catalogs const &o){ return new scenarioengine::Catalogs(o); } ) );
		cl.def_readwrite("catalog_dirs_", &scenarioengine::Catalogs::catalog_dirs_);
		cl.def_readwrite("catalog_", &scenarioengine::Catalogs::catalog_);
		cl.def("AddCatalog", (void (scenarioengine::Catalogs::*)(class scenarioengine::Catalog *)) &scenarioengine::Catalogs::AddCatalog, "C++: scenarioengine::Catalogs::AddCatalog(class scenarioengine::Catalog *) --> void", pybind11::arg("catalog"));
		cl.def("assign", (class scenarioengine::Catalogs & (scenarioengine::Catalogs::*)(const class scenarioengine::Catalogs &)) &scenarioengine::Catalogs::operator=, "C++: scenarioengine::Catalogs::operator=(const class scenarioengine::Catalogs &) --> class scenarioengine::Catalogs &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::StoryBoardElement file: line:20
		pybind11::class_<scenarioengine::StoryBoardElement, std::shared_ptr<scenarioengine::StoryBoardElement>, PyCallBack_scenarioengine_StoryBoardElement> cl(M("scenarioengine"), "StoryBoardElement", "");
		cl.def( pybind11::init<scenarioengine::StoryBoardElement::ElementType>(), pybind11::arg("type") );

		cl.def( pybind11::init<scenarioengine::StoryBoardElement::ElementType, int>(), pybind11::arg("type"), pybind11::arg("max_num_executions") );

		cl.def( pybind11::init( [](PyCallBack_scenarioengine_StoryBoardElement const &o){ return new PyCallBack_scenarioengine_StoryBoardElement(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::StoryBoardElement const &o){ return new scenarioengine::StoryBoardElement(o); } ) );
		cl.def_readwrite("type_", &scenarioengine::StoryBoardElement::type_);
		cl.def_readwrite("state_", &scenarioengine::StoryBoardElement::state_);
		cl.def_readwrite("next_state_", &scenarioengine::StoryBoardElement::next_state_);
		cl.def_readwrite("transition_", &scenarioengine::StoryBoardElement::transition_);
		cl.def_readwrite("name_", &scenarioengine::StoryBoardElement::name_);
		cl.def_readwrite("num_executions_", &scenarioengine::StoryBoardElement::num_executions_);
		cl.def_readwrite("max_num_executions_", &scenarioengine::StoryBoardElement::max_num_executions_);
		cl.def("UpdateState", (void (scenarioengine::StoryBoardElement::*)()) &scenarioengine::StoryBoardElement::UpdateState, "C++: scenarioengine::StoryBoardElement::UpdateState() --> void");
		cl.def("SetState", (void (scenarioengine::StoryBoardElement::*)(scenarioengine::StoryBoardElement::State)) &scenarioengine::StoryBoardElement::SetState, "C++: scenarioengine::StoryBoardElement::SetState(scenarioengine::StoryBoardElement::State) --> void", pybind11::arg("state"));
		cl.def("IsActive", (bool (scenarioengine::StoryBoardElement::*)()) &scenarioengine::StoryBoardElement::IsActive, "C++: scenarioengine::StoryBoardElement::IsActive() --> bool");
		cl.def("IsTriggable", (bool (scenarioengine::StoryBoardElement::*)()) &scenarioengine::StoryBoardElement::IsTriggable, "C++: scenarioengine::StoryBoardElement::IsTriggable() --> bool");
		cl.def("Start", (void (scenarioengine::StoryBoardElement::*)()) &scenarioengine::StoryBoardElement::Start, "C++: scenarioengine::StoryBoardElement::Start() --> void");
		cl.def("Stop", (void (scenarioengine::StoryBoardElement::*)()) &scenarioengine::StoryBoardElement::Stop, "C++: scenarioengine::StoryBoardElement::Stop() --> void");
		cl.def("End", (void (scenarioengine::StoryBoardElement::*)()) &scenarioengine::StoryBoardElement::End, "C++: scenarioengine::StoryBoardElement::End() --> void");
		cl.def("Standby", (void (scenarioengine::StoryBoardElement::*)()) &scenarioengine::StoryBoardElement::Standby, "C++: scenarioengine::StoryBoardElement::Standby() --> void");
		cl.def("Reset", (void (scenarioengine::StoryBoardElement::*)()) &scenarioengine::StoryBoardElement::Reset, "C++: scenarioengine::StoryBoardElement::Reset() --> void");
		cl.def("assign", (class scenarioengine::StoryBoardElement & (scenarioengine::StoryBoardElement::*)(const class scenarioengine::StoryBoardElement &)) &scenarioengine::StoryBoardElement::operator=, "C++: scenarioengine::StoryBoardElement::operator=(const class scenarioengine::StoryBoardElement &) --> class scenarioengine::StoryBoardElement &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCAction file: line:173
		pybind11::class_<scenarioengine::OSCAction, std::shared_ptr<scenarioengine::OSCAction>, PyCallBack_scenarioengine_OSCAction, scenarioengine::StoryBoardElement> cl(M("scenarioengine"), "OSCAction", "");
		cl.def( pybind11::init<scenarioengine::OSCAction::BaseType>(), pybind11::arg("type") );

		cl.def(pybind11::init<PyCallBack_scenarioengine_OSCAction const &>());
		cl.def_readwrite("base_type_", &scenarioengine::OSCAction::base_type_);
		cl.def("Step", (void (scenarioengine::OSCAction::*)(double, double)) &scenarioengine::OSCAction::Step, "C++: scenarioengine::OSCAction::Step(double, double) --> void", pybind11::arg("dt"), pybind11::arg("simTime"));
		cl.def("assign", (class scenarioengine::OSCAction & (scenarioengine::OSCAction::*)(const class scenarioengine::OSCAction &)) &scenarioengine::OSCAction::operator=, "C++: scenarioengine::OSCAction::operator=(const class scenarioengine::OSCAction &) --> class scenarioengine::OSCAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCParameterDeclarations file: line:26
		pybind11::class_<scenarioengine::OSCParameterDeclarations, std::shared_ptr<scenarioengine::OSCParameterDeclarations>> cl(M("scenarioengine"), "OSCParameterDeclarations", "");
		cl.def( pybind11::init( [](scenarioengine::OSCParameterDeclarations const &o){ return new scenarioengine::OSCParameterDeclarations(o); } ) );
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCParameterDeclarations(); } ) );
		cl.def_readwrite("Parameter", &scenarioengine::OSCParameterDeclarations::Parameter);
		cl.def("assign", (class scenarioengine::OSCParameterDeclarations & (scenarioengine::OSCParameterDeclarations::*)(const class scenarioengine::OSCParameterDeclarations &)) &scenarioengine::OSCParameterDeclarations::operator=, "C++: scenarioengine::OSCParameterDeclarations::operator=(const class scenarioengine::OSCParameterDeclarations &) --> class scenarioengine::OSCParameterDeclarations &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::Parameters file: line:22
		pybind11::class_<scenarioengine::Parameters, std::shared_ptr<scenarioengine::Parameters>> cl(M("scenarioengine"), "Parameters", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Parameters(); } ) );
		cl.def( pybind11::init( [](scenarioengine::Parameters const &o){ return new scenarioengine::Parameters(o); } ) );
		cl.def_readwrite("paramDeclarationsSize_", &scenarioengine::Parameters::paramDeclarationsSize_);
		cl.def_readwrite("catalog_param_assignments", &scenarioengine::Parameters::catalog_param_assignments);
		cl.def_readwrite("parameterDeclarations_", &scenarioengine::Parameters::parameterDeclarations_);
		cl.def("RestoreParameterDeclarations", (void (scenarioengine::Parameters::*)()) &scenarioengine::Parameters::RestoreParameterDeclarations, "C++: scenarioengine::Parameters::RestoreParameterDeclarations() --> void");
	}
	{ // scenarioengine::OSCGlobalAction file: line:22
		pybind11::class_<scenarioengine::OSCGlobalAction, std::shared_ptr<scenarioengine::OSCGlobalAction>, PyCallBack_scenarioengine_OSCGlobalAction, scenarioengine::OSCAction> cl(M("scenarioengine"), "OSCGlobalAction", "");
		cl.def( pybind11::init<scenarioengine::OSCGlobalAction::Type>(), pybind11::arg("type") );

		cl.def(pybind11::init<PyCallBack_scenarioengine_OSCGlobalAction const &>());
		cl.def_readwrite("type_", &scenarioengine::OSCGlobalAction::type_);
		cl.def("print", (void (scenarioengine::OSCGlobalAction::*)()) &scenarioengine::OSCGlobalAction::print, "C++: scenarioengine::OSCGlobalAction::print() --> void");
		cl.def("Copy", (class scenarioengine::OSCGlobalAction * (scenarioengine::OSCGlobalAction::*)()) &scenarioengine::OSCGlobalAction::Copy, "C++: scenarioengine::OSCGlobalAction::Copy() --> class scenarioengine::OSCGlobalAction *", pybind11::return_value_policy::automatic);
		cl.def("assign", (class scenarioengine::OSCGlobalAction & (scenarioengine::OSCGlobalAction::*)(const class scenarioengine::OSCGlobalAction &)) &scenarioengine::OSCGlobalAction::operator=, "C++: scenarioengine::OSCGlobalAction::operator=(const class scenarioengine::OSCGlobalAction &) --> class scenarioengine::OSCGlobalAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::ParameterSetAction file: line:54
		pybind11::class_<scenarioengine::ParameterSetAction, std::shared_ptr<scenarioengine::ParameterSetAction>, PyCallBack_scenarioengine_ParameterSetAction, scenarioengine::OSCGlobalAction> cl(M("scenarioengine"), "ParameterSetAction", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::ParameterSetAction(); }, [](){ return new PyCallBack_scenarioengine_ParameterSetAction(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_ParameterSetAction const &o){ return new PyCallBack_scenarioengine_ParameterSetAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::ParameterSetAction const &o){ return new scenarioengine::ParameterSetAction(o); } ) );
		cl.def_readwrite("name_", &scenarioengine::ParameterSetAction::name_);
		cl.def_readwrite("value_", &scenarioengine::ParameterSetAction::value_);
		cl.def("Copy", (class scenarioengine::OSCGlobalAction * (scenarioengine::ParameterSetAction::*)()) &scenarioengine::ParameterSetAction::Copy, "C++: scenarioengine::ParameterSetAction::Copy() --> class scenarioengine::OSCGlobalAction *", pybind11::return_value_policy::automatic);
		cl.def("Start", (void (scenarioengine::ParameterSetAction::*)()) &scenarioengine::ParameterSetAction::Start, "C++: scenarioengine::ParameterSetAction::Start() --> void");
		cl.def("Step", (void (scenarioengine::ParameterSetAction::*)(double, double)) &scenarioengine::ParameterSetAction::Step, "C++: scenarioengine::ParameterSetAction::Step(double, double) --> void", pybind11::arg("dt"), pybind11::arg("simTime"));
		cl.def("print", (void (scenarioengine::ParameterSetAction::*)()) &scenarioengine::ParameterSetAction::print, "C++: scenarioengine::ParameterSetAction::print() --> void");
		cl.def("assign", (class scenarioengine::ParameterSetAction & (scenarioengine::ParameterSetAction::*)(const class scenarioengine::ParameterSetAction &)) &scenarioengine::ParameterSetAction::operator=, "C++: scenarioengine::ParameterSetAction::operator=(const class scenarioengine::ParameterSetAction &) --> class scenarioengine::ParameterSetAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCOrientation file: line:27
		pybind11::class_<scenarioengine::OSCOrientation, std::shared_ptr<scenarioengine::OSCOrientation>> cl(M("scenarioengine"), "OSCOrientation", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCOrientation(); } ) );
		cl.def( pybind11::init<enum roadmanager::Position::OrientationType, double, double, double>(), pybind11::arg("type"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r") );

		cl.def( pybind11::init( [](scenarioengine::OSCOrientation const &o){ return new scenarioengine::OSCOrientation(o); } ) );
		cl.def_readwrite("type_", &scenarioengine::OSCOrientation::type_);
		cl.def_readwrite("h_", &scenarioengine::OSCOrientation::h_);
		cl.def_readwrite("p_", &scenarioengine::OSCOrientation::p_);
		cl.def_readwrite("r_", &scenarioengine::OSCOrientation::r_);
		cl.def("assign", (class scenarioengine::OSCOrientation & (scenarioengine::OSCOrientation::*)(const class scenarioengine::OSCOrientation &)) &scenarioengine::OSCOrientation::operator=, "C++: scenarioengine::OSCOrientation::operator=(const class scenarioengine::OSCOrientation &) --> class scenarioengine::OSCOrientation &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCPosition file: line:40
		pybind11::class_<scenarioengine::OSCPosition, std::shared_ptr<scenarioengine::OSCPosition>, PyCallBack_scenarioengine_OSCPosition> cl(M("scenarioengine"), "OSCPosition", "");
		cl.def( pybind11::init( [](){ return new PyCallBack_scenarioengine_OSCPosition(); } ) );
		cl.def( pybind11::init<scenarioengine::OSCPosition::PositionType>(), pybind11::arg("type") );

		cl.def(pybind11::init<PyCallBack_scenarioengine_OSCPosition const &>());
		cl.def_readwrite("type_", &scenarioengine::OSCPosition::type_);
		cl.def("GetX", (double (scenarioengine::OSCPosition::*)()) &scenarioengine::OSCPosition::GetX, "C++: scenarioengine::OSCPosition::GetX() --> double");
		cl.def("GetY", (double (scenarioengine::OSCPosition::*)()) &scenarioengine::OSCPosition::GetY, "C++: scenarioengine::OSCPosition::GetY() --> double");
		cl.def("GetZ", (double (scenarioengine::OSCPosition::*)()) &scenarioengine::OSCPosition::GetZ, "C++: scenarioengine::OSCPosition::GetZ() --> double");
		cl.def("GetH", (double (scenarioengine::OSCPosition::*)()) &scenarioengine::OSCPosition::GetH, "C++: scenarioengine::OSCPosition::GetH() --> double");
		cl.def("GetP", (double (scenarioengine::OSCPosition::*)()) &scenarioengine::OSCPosition::GetP, "C++: scenarioengine::OSCPosition::GetP() --> double");
		cl.def("GetR", (double (scenarioengine::OSCPosition::*)()) &scenarioengine::OSCPosition::GetR, "C++: scenarioengine::OSCPosition::GetR() --> double");
		cl.def("Print", (void (scenarioengine::OSCPosition::*)()) &scenarioengine::OSCPosition::Print, "C++: scenarioengine::OSCPosition::Print() --> void");
		cl.def("assign", (class scenarioengine::OSCPosition & (scenarioengine::OSCPosition::*)(const class scenarioengine::OSCPosition &)) &scenarioengine::OSCPosition::operator=, "C++: scenarioengine::OSCPosition::operator=(const class scenarioengine::OSCPosition &) --> class scenarioengine::OSCPosition &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCPositionWorld file: line:76
		pybind11::class_<scenarioengine::OSCPositionWorld, std::shared_ptr<scenarioengine::OSCPositionWorld>, PyCallBack_scenarioengine_OSCPositionWorld> cl(M("scenarioengine"), "OSCPositionWorld", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCPositionWorld(); }, [](){ return new PyCallBack_scenarioengine_OSCPositionWorld(); } ) );
		cl.def( pybind11::init<double, double, double, double, double, double>(), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r") );

		cl.def( pybind11::init( [](PyCallBack_scenarioengine_OSCPositionWorld const &o){ return new PyCallBack_scenarioengine_OSCPositionWorld(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCPositionWorld const &o){ return new scenarioengine::OSCPositionWorld(o); } ) );
		cl.def("Print", (void (scenarioengine::OSCPositionWorld::*)()) &scenarioengine::OSCPositionWorld::Print, "C++: scenarioengine::OSCPositionWorld::Print() --> void");
		cl.def("assign", (class scenarioengine::OSCPositionWorld & (scenarioengine::OSCPositionWorld::*)(const class scenarioengine::OSCPositionWorld &)) &scenarioengine::OSCPositionWorld::operator=, "C++: scenarioengine::OSCPositionWorld::operator=(const class scenarioengine::OSCPositionWorld &) --> class scenarioengine::OSCPositionWorld &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


// File: unknown/unknown_3.cpp
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "ScenarioEngine.hpp"
#include "CommonMini.hpp"
#include "ControllerFollowGhost.hpp"
#include "ControllerExternal.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// scenarioengine::OSCPositionLane file: line:85
struct PyCallBack_scenarioengine_OSCPositionLane : public scenarioengine::OSCPositionLane {
	using scenarioengine::OSCPositionLane::OSCPositionLane;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPositionLane *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPositionLane::Print();
	}
};

// scenarioengine::OSCPositionRoad file: line:94
struct PyCallBack_scenarioengine_OSCPositionRoad : public scenarioengine::OSCPositionRoad {
	using scenarioengine::OSCPositionRoad::OSCPositionRoad;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPositionRoad *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPositionRoad::Print();
	}
};

// scenarioengine::OSCPositionRelativeObject file: line:103
struct PyCallBack_scenarioengine_OSCPositionRelativeObject : public scenarioengine::OSCPositionRelativeObject {
	using scenarioengine::OSCPositionRelativeObject::OSCPositionRelativeObject;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPositionRelativeObject *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPositionRelativeObject::Print();
	}
};

// scenarioengine::OSCPositionRelativeWorld file: line:118
struct PyCallBack_scenarioengine_OSCPositionRelativeWorld : public scenarioengine::OSCPositionRelativeWorld {
	using scenarioengine::OSCPositionRelativeWorld::OSCPositionRelativeWorld;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPositionRelativeWorld *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPositionRelativeWorld::Print();
	}
};

// scenarioengine::OSCPositionRelativeLane file: line:132
struct PyCallBack_scenarioengine_OSCPositionRelativeLane : public scenarioengine::OSCPositionRelativeLane {
	using scenarioengine::OSCPositionRelativeLane::OSCPositionRelativeLane;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPositionRelativeLane *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPositionRelativeLane::Print();
	}
};

// scenarioengine::OSCPositionRelativeRoad file: line:148
struct PyCallBack_scenarioengine_OSCPositionRelativeRoad : public scenarioengine::OSCPositionRelativeRoad {
	using scenarioengine::OSCPositionRelativeRoad::OSCPositionRelativeRoad;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPositionRelativeRoad *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPositionRelativeRoad::Print();
	}
};

// scenarioengine::OSCPositionRoute file: line:164
struct PyCallBack_scenarioengine_OSCPositionRoute : public scenarioengine::OSCPositionRoute {
	using scenarioengine::OSCPositionRoute::OSCPositionRoute;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPositionRoute *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPositionRoute::Print();
	}
};

// scenarioengine::Controller file: line:30
struct PyCallBack_scenarioengine_Controller : public scenarioengine::Controller {
	using scenarioengine::Controller::Controller;

	const char * GetTypeName() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "GetTypeName");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<const char *>::value) {
				static pybind11::detail::override_caster_t<const char *> caster;
				return pybind11::detail::cast_ref<const char *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<const char *>(std::move(o));
		}
		return Controller::GetTypeName();
	}
	int GetType() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "GetType");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::override_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Controller::GetType();
	}
	void Assign(class scenarioengine::Object * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "Assign");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Controller::Assign(a0);
	}
	void Activate(int a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "Activate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Controller::Activate(a0);
	}
	void Deactivate() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "Deactivate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Controller::Deactivate();
	}
	void Init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "Init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Controller::Init();
	}
	void ReportKeyEvent(int a0, bool a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "ReportKeyEvent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Controller::ReportKeyEvent(a0, a1);
	}
	void Step(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Controller::Step(a0);
	}
};

void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // scenarioengine::OSCPositionLane file: line:85
		pybind11::class_<scenarioengine::OSCPositionLane, std::shared_ptr<scenarioengine::OSCPositionLane>, PyCallBack_scenarioengine_OSCPositionLane> cl(M("scenarioengine"), "OSCPositionLane", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCPositionLane(); }, [](){ return new PyCallBack_scenarioengine_OSCPositionLane(); } ) );
		cl.def( pybind11::init<int, int, double, double, class scenarioengine::OSCOrientation>(), pybind11::arg("roadId"), pybind11::arg("laneId"), pybind11::arg("s"), pybind11::arg("offset"), pybind11::arg("orientation") );

		cl.def( pybind11::init( [](PyCallBack_scenarioengine_OSCPositionLane const &o){ return new PyCallBack_scenarioengine_OSCPositionLane(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCPositionLane const &o){ return new scenarioengine::OSCPositionLane(o); } ) );
		cl.def("Print", (void (scenarioengine::OSCPositionLane::*)()) &scenarioengine::OSCPositionLane::Print, "C++: scenarioengine::OSCPositionLane::Print() --> void");
		cl.def("assign", (class scenarioengine::OSCPositionLane & (scenarioengine::OSCPositionLane::*)(const class scenarioengine::OSCPositionLane &)) &scenarioengine::OSCPositionLane::operator=, "C++: scenarioengine::OSCPositionLane::operator=(const class scenarioengine::OSCPositionLane &) --> class scenarioengine::OSCPositionLane &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCPositionRoad file: line:94
		pybind11::class_<scenarioengine::OSCPositionRoad, std::shared_ptr<scenarioengine::OSCPositionRoad>, PyCallBack_scenarioengine_OSCPositionRoad> cl(M("scenarioengine"), "OSCPositionRoad", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCPositionRoad(); }, [](){ return new PyCallBack_scenarioengine_OSCPositionRoad(); } ) );
		cl.def( pybind11::init<int, double, double, class scenarioengine::OSCOrientation>(), pybind11::arg("roadId"), pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("orientation") );

		cl.def( pybind11::init( [](PyCallBack_scenarioengine_OSCPositionRoad const &o){ return new PyCallBack_scenarioengine_OSCPositionRoad(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCPositionRoad const &o){ return new scenarioengine::OSCPositionRoad(o); } ) );
		cl.def("Print", (void (scenarioengine::OSCPositionRoad::*)()) &scenarioengine::OSCPositionRoad::Print, "C++: scenarioengine::OSCPositionRoad::Print() --> void");
		cl.def("assign", (class scenarioengine::OSCPositionRoad & (scenarioengine::OSCPositionRoad::*)(const class scenarioengine::OSCPositionRoad &)) &scenarioengine::OSCPositionRoad::operator=, "C++: scenarioengine::OSCPositionRoad::operator=(const class scenarioengine::OSCPositionRoad &) --> class scenarioengine::OSCPositionRoad &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCPositionRelativeObject file: line:103
		pybind11::class_<scenarioengine::OSCPositionRelativeObject, std::shared_ptr<scenarioengine::OSCPositionRelativeObject>, PyCallBack_scenarioengine_OSCPositionRelativeObject> cl(M("scenarioengine"), "OSCPositionRelativeObject", "");
		cl.def( pybind11::init<class scenarioengine::Object *, double, double, double, class scenarioengine::OSCOrientation>(), pybind11::arg("object"), pybind11::arg("dx"), pybind11::arg("dy"), pybind11::arg("dz"), pybind11::arg("orientation") );

		cl.def( pybind11::init( [](PyCallBack_scenarioengine_OSCPositionRelativeObject const &o){ return new PyCallBack_scenarioengine_OSCPositionRelativeObject(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCPositionRelativeObject const &o){ return new scenarioengine::OSCPositionRelativeObject(o); } ) );
		cl.def("Print", (void (scenarioengine::OSCPositionRelativeObject::*)()) &scenarioengine::OSCPositionRelativeObject::Print, "C++: scenarioengine::OSCPositionRelativeObject::Print() --> void");
		cl.def("assign", (class scenarioengine::OSCPositionRelativeObject & (scenarioengine::OSCPositionRelativeObject::*)(const class scenarioengine::OSCPositionRelativeObject &)) &scenarioengine::OSCPositionRelativeObject::operator=, "C++: scenarioengine::OSCPositionRelativeObject::operator=(const class scenarioengine::OSCPositionRelativeObject &) --> class scenarioengine::OSCPositionRelativeObject &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCPositionRelativeWorld file: line:118
		pybind11::class_<scenarioengine::OSCPositionRelativeWorld, std::shared_ptr<scenarioengine::OSCPositionRelativeWorld>, PyCallBack_scenarioengine_OSCPositionRelativeWorld> cl(M("scenarioengine"), "OSCPositionRelativeWorld", "");
		cl.def( pybind11::init<class scenarioengine::Object *, double, double, double, class scenarioengine::OSCOrientation>(), pybind11::arg("object"), pybind11::arg("dx"), pybind11::arg("dy"), pybind11::arg("dz"), pybind11::arg("orientation") );

		cl.def( pybind11::init( [](PyCallBack_scenarioengine_OSCPositionRelativeWorld const &o){ return new PyCallBack_scenarioengine_OSCPositionRelativeWorld(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCPositionRelativeWorld const &o){ return new scenarioengine::OSCPositionRelativeWorld(o); } ) );
		cl.def("Print", (void (scenarioengine::OSCPositionRelativeWorld::*)()) &scenarioengine::OSCPositionRelativeWorld::Print, "C++: scenarioengine::OSCPositionRelativeWorld::Print() --> void");
		cl.def("assign", (class scenarioengine::OSCPositionRelativeWorld & (scenarioengine::OSCPositionRelativeWorld::*)(const class scenarioengine::OSCPositionRelativeWorld &)) &scenarioengine::OSCPositionRelativeWorld::operator=, "C++: scenarioengine::OSCPositionRelativeWorld::operator=(const class scenarioengine::OSCPositionRelativeWorld &) --> class scenarioengine::OSCPositionRelativeWorld &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCPositionRelativeLane file: line:132
		pybind11::class_<scenarioengine::OSCPositionRelativeLane, std::shared_ptr<scenarioengine::OSCPositionRelativeLane>, PyCallBack_scenarioengine_OSCPositionRelativeLane> cl(M("scenarioengine"), "OSCPositionRelativeLane", "");
		cl.def( pybind11::init<class scenarioengine::Object *, int, double, double, class scenarioengine::OSCOrientation>(), pybind11::arg("object"), pybind11::arg("dLane"), pybind11::arg("ds"), pybind11::arg("offset"), pybind11::arg("orientation") );

		cl.def( pybind11::init( [](PyCallBack_scenarioengine_OSCPositionRelativeLane const &o){ return new PyCallBack_scenarioengine_OSCPositionRelativeLane(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCPositionRelativeLane const &o){ return new scenarioengine::OSCPositionRelativeLane(o); } ) );
		cl.def_readwrite("o_", &scenarioengine::OSCPositionRelativeLane::o_);
		cl.def("Print", (void (scenarioengine::OSCPositionRelativeLane::*)()) &scenarioengine::OSCPositionRelativeLane::Print, "C++: scenarioengine::OSCPositionRelativeLane::Print() --> void");
		cl.def("assign", (class scenarioengine::OSCPositionRelativeLane & (scenarioengine::OSCPositionRelativeLane::*)(const class scenarioengine::OSCPositionRelativeLane &)) &scenarioengine::OSCPositionRelativeLane::operator=, "C++: scenarioengine::OSCPositionRelativeLane::operator=(const class scenarioengine::OSCPositionRelativeLane &) --> class scenarioengine::OSCPositionRelativeLane &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCPositionRelativeRoad file: line:148
		pybind11::class_<scenarioengine::OSCPositionRelativeRoad, std::shared_ptr<scenarioengine::OSCPositionRelativeRoad>, PyCallBack_scenarioengine_OSCPositionRelativeRoad> cl(M("scenarioengine"), "OSCPositionRelativeRoad", "");
		cl.def( pybind11::init<class scenarioengine::Object *, double, double, class scenarioengine::OSCOrientation>(), pybind11::arg("object"), pybind11::arg("ds"), pybind11::arg("dt"), pybind11::arg("orientation") );

		cl.def( pybind11::init( [](PyCallBack_scenarioengine_OSCPositionRelativeRoad const &o){ return new PyCallBack_scenarioengine_OSCPositionRelativeRoad(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCPositionRelativeRoad const &o){ return new scenarioengine::OSCPositionRelativeRoad(o); } ) );
		cl.def_readwrite("o_", &scenarioengine::OSCPositionRelativeRoad::o_);
		cl.def("Print", (void (scenarioengine::OSCPositionRelativeRoad::*)()) &scenarioengine::OSCPositionRelativeRoad::Print, "C++: scenarioengine::OSCPositionRelativeRoad::Print() --> void");
		cl.def("assign", (class scenarioengine::OSCPositionRelativeRoad & (scenarioengine::OSCPositionRelativeRoad::*)(const class scenarioengine::OSCPositionRelativeRoad &)) &scenarioengine::OSCPositionRelativeRoad::operator=, "C++: scenarioengine::OSCPositionRelativeRoad::operator=(const class scenarioengine::OSCPositionRelativeRoad &) --> class scenarioengine::OSCPositionRelativeRoad &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCPositionRoute file: line:164
		pybind11::class_<scenarioengine::OSCPositionRoute, std::shared_ptr<scenarioengine::OSCPositionRoute>, PyCallBack_scenarioengine_OSCPositionRoute> cl(M("scenarioengine"), "OSCPositionRoute", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCPositionRoute(); }, [](){ return new PyCallBack_scenarioengine_OSCPositionRoute(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_OSCPositionRoute const &o){ return new PyCallBack_scenarioengine_OSCPositionRoute(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCPositionRoute const &o){ return new scenarioengine::OSCPositionRoute(o); } ) );
		cl.def("SetRouteRelativeHeading", (void (scenarioengine::OSCPositionRoute::*)(double)) &scenarioengine::OSCPositionRoute::SetRouteRelativeHeading, "C++: scenarioengine::OSCPositionRoute::SetRouteRelativeHeading(double) --> void", pybind11::arg("h_relative"));
		cl.def("Print", (void (scenarioengine::OSCPositionRoute::*)()) &scenarioengine::OSCPositionRoute::Print, "C++: scenarioengine::OSCPositionRoute::Print() --> void");
		cl.def("assign", (class scenarioengine::OSCPositionRoute & (scenarioengine::OSCPositionRoute::*)(const class scenarioengine::OSCPositionRoute &)) &scenarioengine::OSCPositionRoute::operator=, "C++: scenarioengine::OSCPositionRoute::operator=(const class scenarioengine::OSCPositionRoute &) --> class scenarioengine::OSCPositionRoute &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCProperties file: line:21
		pybind11::class_<scenarioengine::OSCProperties, std::shared_ptr<scenarioengine::OSCProperties>> cl(M("scenarioengine"), "OSCProperties", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCProperties(); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCProperties const &o){ return new scenarioengine::OSCProperties(o); } ) );
		cl.def_readwrite("property_", &scenarioengine::OSCProperties::property_);
		cl.def_readwrite("file_", &scenarioengine::OSCProperties::file_);

		{ // scenarioengine::OSCProperties::Property file: line:24
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::OSCProperties::Property, std::shared_ptr<scenarioengine::OSCProperties::Property>> cl(enclosing_class, "Property", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::OSCProperties::Property(); } ) );
			cl.def( pybind11::init( [](scenarioengine::OSCProperties::Property const &o){ return new scenarioengine::OSCProperties::Property(o); } ) );
			cl.def_readwrite("name_", &scenarioengine::OSCProperties::Property::name_);
			cl.def_readwrite("value_", &scenarioengine::OSCProperties::Property::value_);
		}

		{ // scenarioengine::OSCProperties::File file: line:31
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::OSCProperties::File, std::shared_ptr<scenarioengine::OSCProperties::File>> cl(enclosing_class, "File", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::OSCProperties::File(); } ) );
			cl.def( pybind11::init( [](scenarioengine::OSCProperties::File const &o){ return new scenarioengine::OSCProperties::File(o); } ) );
			cl.def_readwrite("filepath_", &scenarioengine::OSCProperties::File::filepath_);
			cl.def("assign", (class scenarioengine::OSCProperties::File & (scenarioengine::OSCProperties::File::*)(const class scenarioengine::OSCProperties::File &)) &scenarioengine::OSCProperties::File::operator=, "C++: scenarioengine::OSCProperties::File::operator=(const class scenarioengine::OSCProperties::File &) --> class scenarioengine::OSCProperties::File &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

	}
	{ // scenarioengine::Controller file: line:30
		pybind11::class_<scenarioengine::Controller, std::shared_ptr<scenarioengine::Controller>, PyCallBack_scenarioengine_Controller> cl(M("scenarioengine"), "Controller", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Controller(); }, [](){ return new PyCallBack_scenarioengine_Controller(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_Controller const &o){ return new PyCallBack_scenarioengine_Controller(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::Controller const &o){ return new scenarioengine::Controller(o); } ) );

		pybind11::enum_<scenarioengine::Controller::Type>(cl, "Type", pybind11::arithmetic(), "")
			.value("CONTROLLER_TYPE_DEFAULT", scenarioengine::Controller::CONTROLLER_TYPE_DEFAULT)
			.value("CONTROLLER_TYPE_EXTERNAL", scenarioengine::Controller::CONTROLLER_TYPE_EXTERNAL)
			.value("CONTROLLER_TYPE_FOLLOW_GHOST", scenarioengine::Controller::CONTROLLER_TYPE_FOLLOW_GHOST)
			.value("CONTROLLER_TYPE_INTERACTIVE", scenarioengine::Controller::CONTROLLER_TYPE_INTERACTIVE)
			.value("CONTROLLER_TYPE_SLOPPY_DRIVER", scenarioengine::Controller::CONTROLLER_TYPE_SLOPPY_DRIVER)
			.value("CONTROLLER_TYPE_SUMO", scenarioengine::Controller::CONTROLLER_TYPE_SUMO)
			.value("N_CONTROLLER_TYPES", scenarioengine::Controller::N_CONTROLLER_TYPES)
			.value("GHOST_RESERVED_TYPE", scenarioengine::Controller::GHOST_RESERVED_TYPE)
			.value("USER_CONTROLLER_TYPE_BASE", scenarioengine::Controller::USER_CONTROLLER_TYPE_BASE)
			.export_values();

		cl.def_static("GetTypeNameStatic", (const char * (*)()) &scenarioengine::Controller::GetTypeNameStatic, "C++: scenarioengine::Controller::GetTypeNameStatic() --> const char *", pybind11::return_value_policy::automatic);
		cl.def("GetTypeName", (const char * (scenarioengine::Controller::*)()) &scenarioengine::Controller::GetTypeName, "C++: scenarioengine::Controller::GetTypeName() --> const char *", pybind11::return_value_policy::automatic);
		cl.def_static("GetTypeStatic", (const int (*)()) &scenarioengine::Controller::GetTypeStatic, "C++: scenarioengine::Controller::GetTypeStatic() --> const int");
		cl.def("GetType", (int (scenarioengine::Controller::*)()) &scenarioengine::Controller::GetType, "C++: scenarioengine::Controller::GetType() --> int");
		cl.def("Assign", (void (scenarioengine::Controller::*)(class scenarioengine::Object *)) &scenarioengine::Controller::Assign, "C++: scenarioengine::Controller::Assign(class scenarioengine::Object *) --> void", pybind11::arg("object"));
		cl.def("Activate", (void (scenarioengine::Controller::*)(int)) &scenarioengine::Controller::Activate, "C++: scenarioengine::Controller::Activate(int) --> void", pybind11::arg("domainMask"));
		cl.def("Deactivate", (void (scenarioengine::Controller::*)()) &scenarioengine::Controller::Deactivate, "C++: scenarioengine::Controller::Deactivate() --> void");
		cl.def("Init", (void (scenarioengine::Controller::*)()) &scenarioengine::Controller::Init, "C++: scenarioengine::Controller::Init() --> void");
		cl.def("ReportKeyEvent", (void (scenarioengine::Controller::*)(int, bool)) &scenarioengine::Controller::ReportKeyEvent, "C++: scenarioengine::Controller::ReportKeyEvent(int, bool) --> void", pybind11::arg("key"), pybind11::arg("down"));
		cl.def("Step", (void (scenarioengine::Controller::*)(double)) &scenarioengine::Controller::Step, "C++: scenarioengine::Controller::Step(double) --> void", pybind11::arg("timeStep"));
		cl.def("Active", (bool (scenarioengine::Controller::*)()) &scenarioengine::Controller::Active, "C++: scenarioengine::Controller::Active() --> bool");
		cl.def("GetDomain", (int (scenarioengine::Controller::*)()) &scenarioengine::Controller::GetDomain, "C++: scenarioengine::Controller::GetDomain() --> int");
		cl.def("GetMode", (int (scenarioengine::Controller::*)()) &scenarioengine::Controller::GetMode, "C++: scenarioengine::Controller::GetMode() --> int");
		cl.def("GetObject", (class scenarioengine::Object * (scenarioengine::Controller::*)()) &scenarioengine::Controller::GetObject, "C++: scenarioengine::Controller::GetObject() --> class scenarioengine::Object *", pybind11::return_value_policy::automatic);
		cl.def("assign", (class scenarioengine::Controller & (scenarioengine::Controller::*)(const class scenarioengine::Controller &)) &scenarioengine::Controller::operator=, "C++: scenarioengine::Controller::operator=(const class scenarioengine::Controller &) --> class scenarioengine::Controller &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


// File: unknown/unknown_4.cpp
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "ScenarioEngine.hpp"
#include "CommonMini.hpp"
#include "ControllerFollowGhost.hpp"
#include "ControllerExternal.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// scenarioengine::OSCPrivateAction file: line:32
struct PyCallBack_scenarioengine_OSCPrivateAction : public scenarioengine::OSCPrivateAction {
	using scenarioengine::OSCPrivateAction::OSCPrivateAction;

	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPrivateAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::print();
	}
	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPrivateAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return OSCPrivateAction::Copy();
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPrivateAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::ReplaceObjectRefs(a0, a1);
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPrivateAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"OSCAction::Step\"");
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPrivateAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Start();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPrivateAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCPrivateAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::LongSpeedAction file: line:101
struct PyCallBack_scenarioengine_LongSpeedAction : public scenarioengine::LongSpeedAction {
	using scenarioengine::LongSpeedAction::LongSpeedAction;

	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongSpeedAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return LongSpeedAction::Copy();
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongSpeedAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LongSpeedAction::Start();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongSpeedAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LongSpeedAction::Step(a0, a1);
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongSpeedAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LongSpeedAction::print();
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongSpeedAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LongSpeedAction::ReplaceObjectRefs(a0, a1);
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongSpeedAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongSpeedAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::LongSpeedAction::Target file: line:107
struct PyCallBack_scenarioengine_LongSpeedAction_Target : public scenarioengine::LongSpeedAction::Target {
	using scenarioengine::LongSpeedAction::Target::Target;

	double GetValue() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongSpeedAction::Target *>(this), "GetValue");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Target::GetValue\"");
	}
};

// scenarioengine::LongSpeedAction::TargetAbsolute file: line:123
struct PyCallBack_scenarioengine_LongSpeedAction_TargetAbsolute : public scenarioengine::LongSpeedAction::TargetAbsolute {
	using scenarioengine::LongSpeedAction::TargetAbsolute::TargetAbsolute;

	double GetValue() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongSpeedAction::TargetAbsolute *>(this), "GetValue");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return TargetAbsolute::GetValue();
	}
};

// scenarioengine::LongSpeedAction::TargetRelative file: line:134
struct PyCallBack_scenarioengine_LongSpeedAction_TargetRelative : public scenarioengine::LongSpeedAction::TargetRelative {
	using scenarioengine::LongSpeedAction::TargetRelative::TargetRelative;

	double GetValue() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongSpeedAction::TargetRelative *>(this), "GetValue");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return TargetRelative::GetValue();
	}
};

// scenarioengine::LongDistanceAction file: line:192
struct PyCallBack_scenarioengine_LongDistanceAction : public scenarioengine::LongDistanceAction {
	using scenarioengine::LongDistanceAction::LongDistanceAction;

	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongDistanceAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return LongDistanceAction::Copy();
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongDistanceAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LongDistanceAction::Start();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongDistanceAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LongDistanceAction::Step(a0, a1);
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongDistanceAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LongDistanceAction::print();
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongDistanceAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LongDistanceAction::ReplaceObjectRefs(a0, a1);
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongDistanceAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LongDistanceAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::LatLaneChangeAction file: line:254
struct PyCallBack_scenarioengine_LatLaneChangeAction : public scenarioengine::LatLaneChangeAction {
	using scenarioengine::LatLaneChangeAction::LatLaneChangeAction;

	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneChangeAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return LatLaneChangeAction::Copy();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneChangeAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LatLaneChangeAction::Step(a0, a1);
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneChangeAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LatLaneChangeAction::Start();
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneChangeAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LatLaneChangeAction::ReplaceObjectRefs(a0, a1);
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneChangeAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::print();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneChangeAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneChangeAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// scenarioengine::InstantiateController(void *) file: line:115
	M("scenarioengine").def("InstantiateController", (class scenarioengine::Controller * (*)(void *)) &scenarioengine::InstantiateController, "C++: scenarioengine::InstantiateController(void *) --> class scenarioengine::Controller *", pybind11::return_value_policy::automatic, pybind11::arg("args"));

	{ // scenarioengine::OSCPrivateAction file: line:32
		pybind11::class_<scenarioengine::OSCPrivateAction, std::shared_ptr<scenarioengine::OSCPrivateAction>, PyCallBack_scenarioengine_OSCPrivateAction, scenarioengine::OSCAction> cl(M("scenarioengine"), "OSCPrivateAction", "");
		cl.def( pybind11::init<scenarioengine::OSCPrivateAction::ActionType>(), pybind11::arg("type") );

		cl.def(pybind11::init<PyCallBack_scenarioengine_OSCPrivateAction const &>());
		cl.def_readwrite("type_", &scenarioengine::OSCPrivateAction::type_);
		cl.def("print", (void (scenarioengine::OSCPrivateAction::*)()) &scenarioengine::OSCPrivateAction::print, "C++: scenarioengine::OSCPrivateAction::print() --> void");
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::OSCPrivateAction::*)()) &scenarioengine::OSCPrivateAction::Copy, "C++: scenarioengine::OSCPrivateAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("ReplaceObjectRefs", (void (scenarioengine::OSCPrivateAction::*)(class scenarioengine::Object *, class scenarioengine::Object *)) &scenarioengine::OSCPrivateAction::ReplaceObjectRefs, "C++: scenarioengine::OSCPrivateAction::ReplaceObjectRefs(class scenarioengine::Object *, class scenarioengine::Object *) --> void", pybind11::arg(""), pybind11::arg(""));
		cl.def("assign", (class scenarioengine::OSCPrivateAction & (scenarioengine::OSCPrivateAction::*)(const class scenarioengine::OSCPrivateAction &)) &scenarioengine::OSCPrivateAction::operator=, "C++: scenarioengine::OSCPrivateAction::operator=(const class scenarioengine::OSCPrivateAction &) --> class scenarioengine::OSCPrivateAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		{ // scenarioengine::OSCPrivateAction::TransitionDynamics file: line:69
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::OSCPrivateAction::TransitionDynamics, std::shared_ptr<scenarioengine::OSCPrivateAction::TransitionDynamics>> cl(enclosing_class, "TransitionDynamics", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::OSCPrivateAction::TransitionDynamics(); } ) );
			cl.def( pybind11::init( [](scenarioengine::OSCPrivateAction::TransitionDynamics const &o){ return new scenarioengine::OSCPrivateAction::TransitionDynamics(o); } ) );
			cl.def_readwrite("shape_", &scenarioengine::OSCPrivateAction::TransitionDynamics::shape_);
			cl.def_readwrite("dimension_", &scenarioengine::OSCPrivateAction::TransitionDynamics::dimension_);
			cl.def_readwrite("target_value_", &scenarioengine::OSCPrivateAction::TransitionDynamics::target_value_);
			cl.def("Evaluate", (double (scenarioengine::OSCPrivateAction::TransitionDynamics::*)(double, double, double)) &scenarioengine::OSCPrivateAction::TransitionDynamics::Evaluate, "C++: scenarioengine::OSCPrivateAction::TransitionDynamics::Evaluate(double, double, double) --> double", pybind11::arg("factor"), pybind11::arg("start_value"), pybind11::arg("end_value"));
			cl.def("assign", (class scenarioengine::OSCPrivateAction::TransitionDynamics & (scenarioengine::OSCPrivateAction::TransitionDynamics::*)(const class scenarioengine::OSCPrivateAction::TransitionDynamics &)) &scenarioengine::OSCPrivateAction::TransitionDynamics::operator=, "C++: scenarioengine::OSCPrivateAction::TransitionDynamics::operator=(const class scenarioengine::OSCPrivateAction::TransitionDynamics &) --> class scenarioengine::OSCPrivateAction::TransitionDynamics &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

	}
	{ // scenarioengine::LongSpeedAction file: line:101
		pybind11::class_<scenarioengine::LongSpeedAction, std::shared_ptr<scenarioengine::LongSpeedAction>, PyCallBack_scenarioengine_LongSpeedAction, scenarioengine::OSCPrivateAction> cl(M("scenarioengine"), "LongSpeedAction", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::LongSpeedAction(); }, [](){ return new PyCallBack_scenarioengine_LongSpeedAction(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_LongSpeedAction const &o){ return new PyCallBack_scenarioengine_LongSpeedAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::LongSpeedAction const &o){ return new scenarioengine::LongSpeedAction(o); } ) );
		cl.def_readwrite("transition_dynamics_", &scenarioengine::LongSpeedAction::transition_dynamics_);
		cl.def_readwrite("start_speed_", &scenarioengine::LongSpeedAction::start_speed_);
		cl.def_readwrite("elapsed_", &scenarioengine::LongSpeedAction::elapsed_);
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::LongSpeedAction::*)()) &scenarioengine::LongSpeedAction::Copy, "C++: scenarioengine::LongSpeedAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("Start", (void (scenarioengine::LongSpeedAction::*)()) &scenarioengine::LongSpeedAction::Start, "C++: scenarioengine::LongSpeedAction::Start() --> void");
		cl.def("Step", (void (scenarioengine::LongSpeedAction::*)(double, double)) &scenarioengine::LongSpeedAction::Step, "C++: scenarioengine::LongSpeedAction::Step(double, double) --> void", pybind11::arg("dt"), pybind11::arg("simTime"));
		cl.def("print", (void (scenarioengine::LongSpeedAction::*)()) &scenarioengine::LongSpeedAction::print, "C++: scenarioengine::LongSpeedAction::print() --> void");
		cl.def("ReplaceObjectRefs", (void (scenarioengine::LongSpeedAction::*)(class scenarioengine::Object *, class scenarioengine::Object *)) &scenarioengine::LongSpeedAction::ReplaceObjectRefs, "C++: scenarioengine::LongSpeedAction::ReplaceObjectRefs(class scenarioengine::Object *, class scenarioengine::Object *) --> void", pybind11::arg("obj1"), pybind11::arg("obj2"));
		cl.def("assign", (class scenarioengine::LongSpeedAction & (scenarioengine::LongSpeedAction::*)(const class scenarioengine::LongSpeedAction &)) &scenarioengine::LongSpeedAction::operator=, "C++: scenarioengine::LongSpeedAction::operator=(const class scenarioengine::LongSpeedAction &) --> class scenarioengine::LongSpeedAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		{ // scenarioengine::LongSpeedAction::Target file: line:107
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::LongSpeedAction::Target, std::shared_ptr<scenarioengine::LongSpeedAction::Target>, PyCallBack_scenarioengine_LongSpeedAction_Target> cl(enclosing_class, "Target", "");
			cl.def( pybind11::init<scenarioengine::LongSpeedAction::Target::TargetType>(), pybind11::arg("type") );

			cl.def(pybind11::init<PyCallBack_scenarioengine_LongSpeedAction_Target const &>());
			cl.def_readwrite("type_", &scenarioengine::LongSpeedAction::Target::type_);
			cl.def_readwrite("value_", &scenarioengine::LongSpeedAction::Target::value_);
			cl.def("GetValue", (double (scenarioengine::LongSpeedAction::Target::*)()) &scenarioengine::LongSpeedAction::Target::GetValue, "C++: scenarioengine::LongSpeedAction::Target::GetValue() --> double");
			cl.def("assign", (class scenarioengine::LongSpeedAction::Target & (scenarioengine::LongSpeedAction::Target::*)(const class scenarioengine::LongSpeedAction::Target &)) &scenarioengine::LongSpeedAction::Target::operator=, "C++: scenarioengine::LongSpeedAction::Target::operator=(const class scenarioengine::LongSpeedAction::Target &) --> class scenarioengine::LongSpeedAction::Target &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // scenarioengine::LongSpeedAction::TargetAbsolute file: line:123
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::LongSpeedAction::TargetAbsolute, std::shared_ptr<scenarioengine::LongSpeedAction::TargetAbsolute>, PyCallBack_scenarioengine_LongSpeedAction_TargetAbsolute, scenarioengine::LongSpeedAction::Target> cl(enclosing_class, "TargetAbsolute", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::LongSpeedAction::TargetAbsolute(); }, [](){ return new PyCallBack_scenarioengine_LongSpeedAction_TargetAbsolute(); } ) );
			cl.def("GetValue", (double (scenarioengine::LongSpeedAction::TargetAbsolute::*)()) &scenarioengine::LongSpeedAction::TargetAbsolute::GetValue, "C++: scenarioengine::LongSpeedAction::TargetAbsolute::GetValue() --> double");
			cl.def("assign", (class scenarioengine::LongSpeedAction::TargetAbsolute & (scenarioengine::LongSpeedAction::TargetAbsolute::*)(const class scenarioengine::LongSpeedAction::TargetAbsolute &)) &scenarioengine::LongSpeedAction::TargetAbsolute::operator=, "C++: scenarioengine::LongSpeedAction::TargetAbsolute::operator=(const class scenarioengine::LongSpeedAction::TargetAbsolute &) --> class scenarioengine::LongSpeedAction::TargetAbsolute &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // scenarioengine::LongSpeedAction::TargetRelative file: line:134
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::LongSpeedAction::TargetRelative, std::shared_ptr<scenarioengine::LongSpeedAction::TargetRelative>, PyCallBack_scenarioengine_LongSpeedAction_TargetRelative, scenarioengine::LongSpeedAction::Target> cl(enclosing_class, "TargetRelative", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::LongSpeedAction::TargetRelative(); }, [](){ return new PyCallBack_scenarioengine_LongSpeedAction_TargetRelative(); } ) );
			cl.def_readwrite("value_type_", &scenarioengine::LongSpeedAction::TargetRelative::value_type_);
			cl.def_readwrite("continuous_", &scenarioengine::LongSpeedAction::TargetRelative::continuous_);
			cl.def("GetValue", (double (scenarioengine::LongSpeedAction::TargetRelative::*)()) &scenarioengine::LongSpeedAction::TargetRelative::GetValue, "C++: scenarioengine::LongSpeedAction::TargetRelative::GetValue() --> double");
			cl.def("assign", (class scenarioengine::LongSpeedAction::TargetRelative & (scenarioengine::LongSpeedAction::TargetRelative::*)(const class scenarioengine::LongSpeedAction::TargetRelative &)) &scenarioengine::LongSpeedAction::TargetRelative::operator=, "C++: scenarioengine::LongSpeedAction::TargetRelative::operator=(const class scenarioengine::LongSpeedAction::TargetRelative &) --> class scenarioengine::LongSpeedAction::TargetRelative &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

	}
	{ // scenarioengine::LongDistanceAction file: line:192
		pybind11::class_<scenarioengine::LongDistanceAction, std::shared_ptr<scenarioengine::LongDistanceAction>, PyCallBack_scenarioengine_LongDistanceAction, scenarioengine::OSCPrivateAction> cl(M("scenarioengine"), "LongDistanceAction", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::LongDistanceAction(); }, [](){ return new PyCallBack_scenarioengine_LongDistanceAction(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_LongDistanceAction const &o){ return new PyCallBack_scenarioengine_LongDistanceAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::LongDistanceAction const &o){ return new scenarioengine::LongDistanceAction(o); } ) );
		cl.def_readwrite("distance_", &scenarioengine::LongDistanceAction::distance_);
		cl.def_readwrite("dist_type_", &scenarioengine::LongDistanceAction::dist_type_);
		cl.def_readwrite("freespace_", &scenarioengine::LongDistanceAction::freespace_);
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::LongDistanceAction::*)()) &scenarioengine::LongDistanceAction::Copy, "C++: scenarioengine::LongDistanceAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("Start", (void (scenarioengine::LongDistanceAction::*)()) &scenarioengine::LongDistanceAction::Start, "C++: scenarioengine::LongDistanceAction::Start() --> void");
		cl.def("Step", (void (scenarioengine::LongDistanceAction::*)(double, double)) &scenarioengine::LongDistanceAction::Step, "C++: scenarioengine::LongDistanceAction::Step(double, double) --> void", pybind11::arg("dt"), pybind11::arg("simTime"));
		cl.def("print", (void (scenarioengine::LongDistanceAction::*)()) &scenarioengine::LongDistanceAction::print, "C++: scenarioengine::LongDistanceAction::print() --> void");
		cl.def("ReplaceObjectRefs", (void (scenarioengine::LongDistanceAction::*)(class scenarioengine::Object *, class scenarioengine::Object *)) &scenarioengine::LongDistanceAction::ReplaceObjectRefs, "C++: scenarioengine::LongDistanceAction::ReplaceObjectRefs(class scenarioengine::Object *, class scenarioengine::Object *) --> void", pybind11::arg("obj1"), pybind11::arg("obj2"));
		cl.def("assign", (class scenarioengine::LongDistanceAction & (scenarioengine::LongDistanceAction::*)(const class scenarioengine::LongDistanceAction &)) &scenarioengine::LongDistanceAction::operator=, "C++: scenarioengine::LongDistanceAction::operator=(const class scenarioengine::LongDistanceAction &) --> class scenarioengine::LongDistanceAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::LatLaneChangeAction file: line:254
		pybind11::class_<scenarioengine::LatLaneChangeAction, std::shared_ptr<scenarioengine::LatLaneChangeAction>, PyCallBack_scenarioengine_LatLaneChangeAction, scenarioengine::OSCPrivateAction> cl(M("scenarioengine"), "LatLaneChangeAction", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::LatLaneChangeAction(); }, [](){ return new PyCallBack_scenarioengine_LatLaneChangeAction(); } ), "doc");
		cl.def( pybind11::init<scenarioengine::OSCPrivateAction::DynamicsDimension>(), pybind11::arg("timing_type") );

		cl.def( pybind11::init( [](PyCallBack_scenarioengine_LatLaneChangeAction const &o){ return new PyCallBack_scenarioengine_LatLaneChangeAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::LatLaneChangeAction const &o){ return new scenarioengine::LatLaneChangeAction(o); } ) );
		cl.def_readwrite("transition_dynamics_", &scenarioengine::LatLaneChangeAction::transition_dynamics_);
		cl.def_readwrite("start_t_", &scenarioengine::LatLaneChangeAction::start_t_);
		cl.def_readwrite("target_t_", &scenarioengine::LatLaneChangeAction::target_t_);
		cl.def_readwrite("target_lane_offset_", &scenarioengine::LatLaneChangeAction::target_lane_offset_);
		cl.def_readwrite("target_lane_id_", &scenarioengine::LatLaneChangeAction::target_lane_id_);
		cl.def_readwrite("elapsed_", &scenarioengine::LatLaneChangeAction::elapsed_);
		cl.def_readwrite("t_", &scenarioengine::LatLaneChangeAction::t_);
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::LatLaneChangeAction::*)()) &scenarioengine::LatLaneChangeAction::Copy, "C++: scenarioengine::LatLaneChangeAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("Step", (void (scenarioengine::LatLaneChangeAction::*)(double, double)) &scenarioengine::LatLaneChangeAction::Step, "C++: scenarioengine::LatLaneChangeAction::Step(double, double) --> void", pybind11::arg("dt"), pybind11::arg("simTime"));
		cl.def("Start", (void (scenarioengine::LatLaneChangeAction::*)()) &scenarioengine::LatLaneChangeAction::Start, "C++: scenarioengine::LatLaneChangeAction::Start() --> void");
		cl.def("ReplaceObjectRefs", (void (scenarioengine::LatLaneChangeAction::*)(class scenarioengine::Object *, class scenarioengine::Object *)) &scenarioengine::LatLaneChangeAction::ReplaceObjectRefs, "C++: scenarioengine::LatLaneChangeAction::ReplaceObjectRefs(class scenarioengine::Object *, class scenarioengine::Object *) --> void", pybind11::arg("obj1"), pybind11::arg("obj2"));
		cl.def("assign", (class scenarioengine::LatLaneChangeAction & (scenarioengine::LatLaneChangeAction::*)(const class scenarioengine::LatLaneChangeAction &)) &scenarioengine::LatLaneChangeAction::operator=, "C++: scenarioengine::LatLaneChangeAction::operator=(const class scenarioengine::LatLaneChangeAction &) --> class scenarioengine::LatLaneChangeAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		{ // scenarioengine::LatLaneChangeAction::Target file: line:259
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::LatLaneChangeAction::Target, std::shared_ptr<scenarioengine::LatLaneChangeAction::Target>> cl(enclosing_class, "Target", "");
			cl.def( pybind11::init<scenarioengine::LatLaneChangeAction::Target::Type>(), pybind11::arg("type") );

			cl.def( pybind11::init( [](scenarioengine::LatLaneChangeAction::Target const &o){ return new scenarioengine::LatLaneChangeAction::Target(o); } ) );
			cl.def_readwrite("type_", &scenarioengine::LatLaneChangeAction::Target::type_);
			cl.def_readwrite("value_", &scenarioengine::LatLaneChangeAction::Target::value_);
		}

		{ // scenarioengine::LatLaneChangeAction::TargetAbsolute file: line:274
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::LatLaneChangeAction::TargetAbsolute, std::shared_ptr<scenarioengine::LatLaneChangeAction::TargetAbsolute>, scenarioengine::LatLaneChangeAction::Target> cl(enclosing_class, "TargetAbsolute", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::LatLaneChangeAction::TargetAbsolute(); } ) );
		}

		{ // scenarioengine::LatLaneChangeAction::TargetRelative file: line:280
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::LatLaneChangeAction::TargetRelative, std::shared_ptr<scenarioengine::LatLaneChangeAction::TargetRelative>, scenarioengine::LatLaneChangeAction::Target> cl(enclosing_class, "TargetRelative", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::LatLaneChangeAction::TargetRelative(); } ) );
		}

	}
}


// File: unknown/unknown_5.cpp
#include <memory>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "ScenarioEngine.hpp"
#include "CommonMini.hpp"
#include "ControllerFollowGhost.hpp"
#include "ControllerExternal.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// scenarioengine::LatLaneOffsetAction file: line:329
struct PyCallBack_scenarioengine_LatLaneOffsetAction : public scenarioengine::LatLaneOffsetAction {
	using scenarioengine::LatLaneOffsetAction::LatLaneOffsetAction;

	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneOffsetAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return LatLaneOffsetAction::Copy();
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneOffsetAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LatLaneOffsetAction::Start();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneOffsetAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LatLaneOffsetAction::Step(a0, a1);
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneOffsetAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return LatLaneOffsetAction::ReplaceObjectRefs(a0, a1);
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneOffsetAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::print();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneOffsetAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::LatLaneOffsetAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::SynchronizeAction file: line:402
struct PyCallBack_scenarioengine_SynchronizeAction : public scenarioengine::SynchronizeAction {
	using scenarioengine::SynchronizeAction::SynchronizeAction;

	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::SynchronizeAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return SynchronizeAction::Copy();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::SynchronizeAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SynchronizeAction::Step(a0, a1);
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::SynchronizeAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return SynchronizeAction::Start();
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::SynchronizeAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::print();
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::SynchronizeAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::ReplaceObjectRefs(a0, a1);
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::SynchronizeAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::SynchronizeAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::TeleportAction file: line:524
struct PyCallBack_scenarioengine_TeleportAction : public scenarioengine::TeleportAction {
	using scenarioengine::TeleportAction::TeleportAction;

	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TeleportAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return TeleportAction::Copy();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TeleportAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TeleportAction::Step(a0, a1);
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TeleportAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TeleportAction::Start();
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TeleportAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TeleportAction::ReplaceObjectRefs(a0, a1);
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TeleportAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::print();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TeleportAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TeleportAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::AssignRouteAction file: line:548
struct PyCallBack_scenarioengine_AssignRouteAction : public scenarioengine::AssignRouteAction {
	using scenarioengine::AssignRouteAction::AssignRouteAction;

	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignRouteAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return AssignRouteAction::Copy();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignRouteAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return AssignRouteAction::Step(a0, a1);
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignRouteAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return AssignRouteAction::Start();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignRouteAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return AssignRouteAction::End();
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignRouteAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return AssignRouteAction::ReplaceObjectRefs(a0, a1);
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignRouteAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::print();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignRouteAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
};

// scenarioengine::FollowTrajectoryAction file: line:578
struct PyCallBack_scenarioengine_FollowTrajectoryAction : public scenarioengine::FollowTrajectoryAction {
	using scenarioengine::FollowTrajectoryAction::FollowTrajectoryAction;

	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::FollowTrajectoryAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return FollowTrajectoryAction::Copy();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::FollowTrajectoryAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return FollowTrajectoryAction::Step(a0, a1);
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::FollowTrajectoryAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return FollowTrajectoryAction::Start();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::FollowTrajectoryAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return FollowTrajectoryAction::End();
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::FollowTrajectoryAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return FollowTrajectoryAction::ReplaceObjectRefs(a0, a1);
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::FollowTrajectoryAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::print();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::FollowTrajectoryAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
};

// scenarioengine::AssignControllerAction file: line:619
struct PyCallBack_scenarioengine_AssignControllerAction : public scenarioengine::AssignControllerAction {
	using scenarioengine::AssignControllerAction::AssignControllerAction;

	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignControllerAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return AssignControllerAction::Copy();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignControllerAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return AssignControllerAction::Step(a0, a1);
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignControllerAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return AssignControllerAction::Start();
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignControllerAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::print();
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignControllerAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::ReplaceObjectRefs(a0, a1);
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignControllerAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::AssignControllerAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::ActivateControllerAction file: line:643
struct PyCallBack_scenarioengine_ActivateControllerAction : public scenarioengine::ActivateControllerAction {
	using scenarioengine::ActivateControllerAction::ActivateControllerAction;

	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ActivateControllerAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return ActivateControllerAction::Copy();
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ActivateControllerAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ActivateControllerAction::Start();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ActivateControllerAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ActivateControllerAction::Step(a0, a1);
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ActivateControllerAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ActivateControllerAction::End();
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ActivateControllerAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::print();
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ActivateControllerAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::ReplaceObjectRefs(a0, a1);
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ActivateControllerAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
};

void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // scenarioengine::LatLaneOffsetAction file: line:329
		pybind11::class_<scenarioengine::LatLaneOffsetAction, std::shared_ptr<scenarioengine::LatLaneOffsetAction>, PyCallBack_scenarioengine_LatLaneOffsetAction, scenarioengine::OSCPrivateAction> cl(M("scenarioengine"), "LatLaneOffsetAction", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::LatLaneOffsetAction(); }, [](){ return new PyCallBack_scenarioengine_LatLaneOffsetAction(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_LatLaneOffsetAction const &o){ return new PyCallBack_scenarioengine_LatLaneOffsetAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::LatLaneOffsetAction const &o){ return new scenarioengine::LatLaneOffsetAction(o); } ) );
		cl.def_readwrite("elapsed_", &scenarioengine::LatLaneOffsetAction::elapsed_);
		cl.def_readwrite("start_lane_offset_", &scenarioengine::LatLaneOffsetAction::start_lane_offset_);
		cl.def_readwrite("target_lane_offset_", &scenarioengine::LatLaneOffsetAction::target_lane_offset_);
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::LatLaneOffsetAction::*)()) &scenarioengine::LatLaneOffsetAction::Copy, "C++: scenarioengine::LatLaneOffsetAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("Start", (void (scenarioengine::LatLaneOffsetAction::*)()) &scenarioengine::LatLaneOffsetAction::Start, "C++: scenarioengine::LatLaneOffsetAction::Start() --> void");
		cl.def("Step", (void (scenarioengine::LatLaneOffsetAction::*)(double, double)) &scenarioengine::LatLaneOffsetAction::Step, "C++: scenarioengine::LatLaneOffsetAction::Step(double, double) --> void", pybind11::arg("dt"), pybind11::arg("simTime"));
		cl.def("ReplaceObjectRefs", (void (scenarioengine::LatLaneOffsetAction::*)(class scenarioengine::Object *, class scenarioengine::Object *)) &scenarioengine::LatLaneOffsetAction::ReplaceObjectRefs, "C++: scenarioengine::LatLaneOffsetAction::ReplaceObjectRefs(class scenarioengine::Object *, class scenarioengine::Object *) --> void", pybind11::arg("obj1"), pybind11::arg("obj2"));
		cl.def("assign", (class scenarioengine::LatLaneOffsetAction & (scenarioengine::LatLaneOffsetAction::*)(const class scenarioengine::LatLaneOffsetAction &)) &scenarioengine::LatLaneOffsetAction::operator=, "C++: scenarioengine::LatLaneOffsetAction::operator=(const class scenarioengine::LatLaneOffsetAction &) --> class scenarioengine::LatLaneOffsetAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		{ // scenarioengine::LatLaneOffsetAction::Target file: line:338
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::LatLaneOffsetAction::Target, std::shared_ptr<scenarioengine::LatLaneOffsetAction::Target>> cl(enclosing_class, "Target", "");
			cl.def( pybind11::init<scenarioengine::LatLaneOffsetAction::Target::Type>(), pybind11::arg("type") );

			cl.def( pybind11::init( [](scenarioengine::LatLaneOffsetAction::Target const &o){ return new scenarioengine::LatLaneOffsetAction::Target(o); } ) );
			cl.def_readwrite("type_", &scenarioengine::LatLaneOffsetAction::Target::type_);
			cl.def_readwrite("value_", &scenarioengine::LatLaneOffsetAction::Target::value_);
		}

		{ // scenarioengine::LatLaneOffsetAction::TargetAbsolute file: line:353
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::LatLaneOffsetAction::TargetAbsolute, std::shared_ptr<scenarioengine::LatLaneOffsetAction::TargetAbsolute>, scenarioengine::LatLaneOffsetAction::Target> cl(enclosing_class, "TargetAbsolute", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::LatLaneOffsetAction::TargetAbsolute(); } ) );
		}

		{ // scenarioengine::LatLaneOffsetAction::TargetRelative file: line:359
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::LatLaneOffsetAction::TargetRelative, std::shared_ptr<scenarioengine::LatLaneOffsetAction::TargetRelative>, scenarioengine::LatLaneOffsetAction::Target> cl(enclosing_class, "TargetRelative", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::LatLaneOffsetAction::TargetRelative(); } ) );
		}

	}
	{ // scenarioengine::SynchronizeAction file: line:402
		pybind11::class_<scenarioengine::SynchronizeAction, std::shared_ptr<scenarioengine::SynchronizeAction>, PyCallBack_scenarioengine_SynchronizeAction, scenarioengine::OSCPrivateAction> cl(M("scenarioengine"), "SynchronizeAction", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::SynchronizeAction(); }, [](){ return new PyCallBack_scenarioengine_SynchronizeAction(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_SynchronizeAction const &o){ return new PyCallBack_scenarioengine_SynchronizeAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::SynchronizeAction const &o){ return new scenarioengine::SynchronizeAction(o); } ) );
		cl.def_readwrite("tolerance_", &scenarioengine::SynchronizeAction::tolerance_);
		cl.def_readwrite("tolerance_master_", &scenarioengine::SynchronizeAction::tolerance_master_);
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::SynchronizeAction::*)()) &scenarioengine::SynchronizeAction::Copy, "C++: scenarioengine::SynchronizeAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("Step", (void (scenarioengine::SynchronizeAction::*)(double, double)) &scenarioengine::SynchronizeAction::Step, "C++: scenarioengine::SynchronizeAction::Step(double, double) --> void", pybind11::arg("dt"), pybind11::arg("simTime"));
		cl.def("Start", (void (scenarioengine::SynchronizeAction::*)()) &scenarioengine::SynchronizeAction::Start, "C++: scenarioengine::SynchronizeAction::Start() --> void");
		cl.def("assign", (class scenarioengine::SynchronizeAction & (scenarioengine::SynchronizeAction::*)(const class scenarioengine::SynchronizeAction &)) &scenarioengine::SynchronizeAction::operator=, "C++: scenarioengine::SynchronizeAction::operator=(const class scenarioengine::SynchronizeAction &) --> class scenarioengine::SynchronizeAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TeleportAction file: line:524
		pybind11::class_<scenarioengine::TeleportAction, std::shared_ptr<scenarioengine::TeleportAction>, PyCallBack_scenarioengine_TeleportAction, scenarioengine::OSCPrivateAction> cl(M("scenarioengine"), "TeleportAction", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TeleportAction(); }, [](){ return new PyCallBack_scenarioengine_TeleportAction(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_TeleportAction const &o){ return new PyCallBack_scenarioengine_TeleportAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::TeleportAction const &o){ return new scenarioengine::TeleportAction(o); } ) );
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::TeleportAction::*)()) &scenarioengine::TeleportAction::Copy, "C++: scenarioengine::TeleportAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("Step", (void (scenarioengine::TeleportAction::*)(double, double)) &scenarioengine::TeleportAction::Step, "C++: scenarioengine::TeleportAction::Step(double, double) --> void", pybind11::arg("dt"), pybind11::arg("simTime"));
		cl.def("Start", (void (scenarioengine::TeleportAction::*)()) &scenarioengine::TeleportAction::Start, "C++: scenarioengine::TeleportAction::Start() --> void");
		cl.def("ReplaceObjectRefs", (void (scenarioengine::TeleportAction::*)(class scenarioengine::Object *, class scenarioengine::Object *)) &scenarioengine::TeleportAction::ReplaceObjectRefs, "C++: scenarioengine::TeleportAction::ReplaceObjectRefs(class scenarioengine::Object *, class scenarioengine::Object *) --> void", pybind11::arg("obj1"), pybind11::arg("obj2"));
		cl.def("assign", (class scenarioengine::TeleportAction & (scenarioengine::TeleportAction::*)(const class scenarioengine::TeleportAction &)) &scenarioengine::TeleportAction::operator=, "C++: scenarioengine::TeleportAction::operator=(const class scenarioengine::TeleportAction &) --> class scenarioengine::TeleportAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::AssignRouteAction file: line:548
		pybind11::class_<scenarioengine::AssignRouteAction, std::shared_ptr<scenarioengine::AssignRouteAction>, PyCallBack_scenarioengine_AssignRouteAction, scenarioengine::OSCPrivateAction> cl(M("scenarioengine"), "AssignRouteAction", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::AssignRouteAction(); }, [](){ return new PyCallBack_scenarioengine_AssignRouteAction(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_AssignRouteAction const &o){ return new PyCallBack_scenarioengine_AssignRouteAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::AssignRouteAction const &o){ return new scenarioengine::AssignRouteAction(o); } ) );
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::AssignRouteAction::*)()) &scenarioengine::AssignRouteAction::Copy, "C++: scenarioengine::AssignRouteAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("Step", (void (scenarioengine::AssignRouteAction::*)(double, double)) &scenarioengine::AssignRouteAction::Step, "C++: scenarioengine::AssignRouteAction::Step(double, double) --> void", pybind11::arg("dt"), pybind11::arg("simTime"));
		cl.def("Start", (void (scenarioengine::AssignRouteAction::*)()) &scenarioengine::AssignRouteAction::Start, "C++: scenarioengine::AssignRouteAction::Start() --> void");
		cl.def("End", (void (scenarioengine::AssignRouteAction::*)()) &scenarioengine::AssignRouteAction::End, "C++: scenarioengine::AssignRouteAction::End() --> void");
		cl.def("ReplaceObjectRefs", (void (scenarioengine::AssignRouteAction::*)(class scenarioengine::Object *, class scenarioengine::Object *)) &scenarioengine::AssignRouteAction::ReplaceObjectRefs, "C++: scenarioengine::AssignRouteAction::ReplaceObjectRefs(class scenarioengine::Object *, class scenarioengine::Object *) --> void", pybind11::arg("obj1"), pybind11::arg("obj2"));
		cl.def("assign", (class scenarioengine::AssignRouteAction & (scenarioengine::AssignRouteAction::*)(const class scenarioengine::AssignRouteAction &)) &scenarioengine::AssignRouteAction::operator=, "C++: scenarioengine::AssignRouteAction::operator=(const class scenarioengine::AssignRouteAction &) --> class scenarioengine::AssignRouteAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::FollowTrajectoryAction file: line:578
		pybind11::class_<scenarioengine::FollowTrajectoryAction, std::shared_ptr<scenarioengine::FollowTrajectoryAction>, PyCallBack_scenarioengine_FollowTrajectoryAction, scenarioengine::OSCPrivateAction> cl(M("scenarioengine"), "FollowTrajectoryAction", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::FollowTrajectoryAction(); }, [](){ return new PyCallBack_scenarioengine_FollowTrajectoryAction(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_FollowTrajectoryAction const &o){ return new PyCallBack_scenarioengine_FollowTrajectoryAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::FollowTrajectoryAction const &o){ return new scenarioengine::FollowTrajectoryAction(o); } ) );
		cl.def_readwrite("timing_domain_", &scenarioengine::FollowTrajectoryAction::timing_domain_);
		cl.def_readwrite("timing_scale_", &scenarioengine::FollowTrajectoryAction::timing_scale_);
		cl.def_readwrite("timing_offset_", &scenarioengine::FollowTrajectoryAction::timing_offset_);
		cl.def_readwrite("time_", &scenarioengine::FollowTrajectoryAction::time_);
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::FollowTrajectoryAction::*)()) &scenarioengine::FollowTrajectoryAction::Copy, "C++: scenarioengine::FollowTrajectoryAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("Step", (void (scenarioengine::FollowTrajectoryAction::*)(double, double)) &scenarioengine::FollowTrajectoryAction::Step, "C++: scenarioengine::FollowTrajectoryAction::Step(double, double) --> void", pybind11::arg("dt"), pybind11::arg("simTime"));
		cl.def("Start", (void (scenarioengine::FollowTrajectoryAction::*)()) &scenarioengine::FollowTrajectoryAction::Start, "C++: scenarioengine::FollowTrajectoryAction::Start() --> void");
		cl.def("End", (void (scenarioengine::FollowTrajectoryAction::*)()) &scenarioengine::FollowTrajectoryAction::End, "C++: scenarioengine::FollowTrajectoryAction::End() --> void");
		cl.def("ReplaceObjectRefs", (void (scenarioengine::FollowTrajectoryAction::*)(class scenarioengine::Object *, class scenarioengine::Object *)) &scenarioengine::FollowTrajectoryAction::ReplaceObjectRefs, "C++: scenarioengine::FollowTrajectoryAction::ReplaceObjectRefs(class scenarioengine::Object *, class scenarioengine::Object *) --> void", pybind11::arg("obj1"), pybind11::arg("obj2"));
		cl.def("assign", (class scenarioengine::FollowTrajectoryAction & (scenarioengine::FollowTrajectoryAction::*)(const class scenarioengine::FollowTrajectoryAction &)) &scenarioengine::FollowTrajectoryAction::operator=, "C++: scenarioengine::FollowTrajectoryAction::operator=(const class scenarioengine::FollowTrajectoryAction &) --> class scenarioengine::FollowTrajectoryAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::AssignControllerAction file: line:619
		pybind11::class_<scenarioengine::AssignControllerAction, std::shared_ptr<scenarioengine::AssignControllerAction>, PyCallBack_scenarioengine_AssignControllerAction, scenarioengine::OSCPrivateAction> cl(M("scenarioengine"), "AssignControllerAction", "");
		cl.def( pybind11::init<class scenarioengine::Controller *>(), pybind11::arg("controller") );

		cl.def( pybind11::init( [](PyCallBack_scenarioengine_AssignControllerAction const &o){ return new PyCallBack_scenarioengine_AssignControllerAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::AssignControllerAction const &o){ return new scenarioengine::AssignControllerAction(o); } ) );
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::AssignControllerAction::*)()) &scenarioengine::AssignControllerAction::Copy, "C++: scenarioengine::AssignControllerAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("Step", (void (scenarioengine::AssignControllerAction::*)(double, double)) &scenarioengine::AssignControllerAction::Step, "C++: scenarioengine::AssignControllerAction::Step(double, double) --> void", pybind11::arg(""), pybind11::arg(""));
		cl.def("Start", (void (scenarioengine::AssignControllerAction::*)()) &scenarioengine::AssignControllerAction::Start, "C++: scenarioengine::AssignControllerAction::Start() --> void");
		cl.def("assign", (class scenarioengine::AssignControllerAction & (scenarioengine::AssignControllerAction::*)(const class scenarioengine::AssignControllerAction &)) &scenarioengine::AssignControllerAction::operator=, "C++: scenarioengine::AssignControllerAction::operator=(const class scenarioengine::AssignControllerAction &) --> class scenarioengine::AssignControllerAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::ActivateControllerAction file: line:643
		pybind11::class_<scenarioengine::ActivateControllerAction, std::shared_ptr<scenarioengine::ActivateControllerAction>, PyCallBack_scenarioengine_ActivateControllerAction, scenarioengine::OSCPrivateAction> cl(M("scenarioengine"), "ActivateControllerAction", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::ActivateControllerAction(); }, [](){ return new PyCallBack_scenarioengine_ActivateControllerAction(); } ) );
		cl.def( pybind11::init<int>(), pybind11::arg("domainMask") );

		cl.def( pybind11::init( [](PyCallBack_scenarioengine_ActivateControllerAction const &o){ return new PyCallBack_scenarioengine_ActivateControllerAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::ActivateControllerAction const &o){ return new scenarioengine::ActivateControllerAction(o); } ) );
		cl.def_readwrite("domainMask_", &scenarioengine::ActivateControllerAction::domainMask_);
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::ActivateControllerAction::*)()) &scenarioengine::ActivateControllerAction::Copy, "C++: scenarioengine::ActivateControllerAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("Start", (void (scenarioengine::ActivateControllerAction::*)()) &scenarioengine::ActivateControllerAction::Start, "C++: scenarioengine::ActivateControllerAction::Start() --> void");
		cl.def("Step", (void (scenarioengine::ActivateControllerAction::*)(double, double)) &scenarioengine::ActivateControllerAction::Step, "C++: scenarioengine::ActivateControllerAction::Step(double, double) --> void", pybind11::arg(""), pybind11::arg(""));
		cl.def("End", (void (scenarioengine::ActivateControllerAction::*)()) &scenarioengine::ActivateControllerAction::End, "C++: scenarioengine::ActivateControllerAction::End() --> void");
		cl.def("assign", (class scenarioengine::ActivateControllerAction & (scenarioengine::ActivateControllerAction::*)(const class scenarioengine::ActivateControllerAction &)) &scenarioengine::ActivateControllerAction::operator=, "C++: scenarioengine::ActivateControllerAction::operator=(const class scenarioengine::ActivateControllerAction &) --> class scenarioengine::ActivateControllerAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


// File: unknown/unknown_6.cpp
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "ScenarioEngine.hpp"
#include "CommonMini.hpp"
#include "ControllerFollowGhost.hpp"
#include "ControllerExternal.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// scenarioengine::VisibilityAction file: line:702
struct PyCallBack_scenarioengine_VisibilityAction : public scenarioengine::VisibilityAction {
	using scenarioengine::VisibilityAction::VisibilityAction;

	class scenarioengine::OSCPrivateAction * Copy() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::VisibilityAction *>(this), "Copy");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class scenarioengine::OSCPrivateAction *>::value) {
				static pybind11::detail::override_caster_t<class scenarioengine::OSCPrivateAction *> caster;
				return pybind11::detail::cast_ref<class scenarioengine::OSCPrivateAction *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class scenarioengine::OSCPrivateAction *>(std::move(o));
		}
		return VisibilityAction::Copy();
	}
	void Step(double a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::VisibilityAction *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return VisibilityAction::Step(a0, a1);
	}
	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::VisibilityAction *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return VisibilityAction::Start();
	}
	void print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::VisibilityAction *>(this), "print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::print();
	}
	void ReplaceObjectRefs(class scenarioengine::Object * a0, class scenarioengine::Object * a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::VisibilityAction *>(this), "ReplaceObjectRefs");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCPrivateAction::ReplaceObjectRefs(a0, a1);
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::VisibilityAction *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::VisibilityAction *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::OSCCondition file: line:31
struct PyCallBack_scenarioengine_OSCCondition : public scenarioengine::OSCCondition {
	using scenarioengine::OSCCondition::OSCCondition;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCCondition *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"OSCCondition::CheckCondition\"");
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::OSCCondition *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCCondition::Log();
	}
};

// scenarioengine::TrigByEntity file: line:84
struct PyCallBack_scenarioengine_TrigByEntity : public scenarioengine::TrigByEntity {
	using scenarioengine::TrigByEntity::TrigByEntity;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByEntity *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"OSCCondition::CheckCondition\"");
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByEntity *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCCondition::Log();
	}
};

// scenarioengine::TrigByTimeHeadway file: line:134
struct PyCallBack_scenarioengine_TrigByTimeHeadway : public scenarioengine::TrigByTimeHeadway {
	using scenarioengine::TrigByTimeHeadway::TrigByTimeHeadway;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByTimeHeadway *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByTimeHeadway::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByTimeHeadway *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByTimeHeadway::Log();
	}
};

// scenarioengine::TrigByTimeToCollision file: line:149
struct PyCallBack_scenarioengine_TrigByTimeToCollision : public scenarioengine::TrigByTimeToCollision {
	using scenarioengine::TrigByTimeToCollision::TrigByTimeToCollision;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByTimeToCollision *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByTimeToCollision::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByTimeToCollision *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByTimeToCollision::Log();
	}
};

// scenarioengine::TrigByReachPosition file: line:165
struct PyCallBack_scenarioengine_TrigByReachPosition : public scenarioengine::TrigByReachPosition {
	using scenarioengine::TrigByReachPosition::TrigByReachPosition;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByReachPosition *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByReachPosition::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByReachPosition *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByReachPosition::Log();
	}
};

// scenarioengine::TrigByDistance file: line:177
struct PyCallBack_scenarioengine_TrigByDistance : public scenarioengine::TrigByDistance {
	using scenarioengine::TrigByDistance::TrigByDistance;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByDistance *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByDistance::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByDistance *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByDistance::Log();
	}
};

void bind_unknown_unknown_6(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // scenarioengine::VisibilityAction file: line:702
		pybind11::class_<scenarioengine::VisibilityAction, std::shared_ptr<scenarioengine::VisibilityAction>, PyCallBack_scenarioengine_VisibilityAction, scenarioengine::OSCPrivateAction> cl(M("scenarioengine"), "VisibilityAction", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::VisibilityAction(); }, [](){ return new PyCallBack_scenarioengine_VisibilityAction(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_VisibilityAction const &o){ return new PyCallBack_scenarioengine_VisibilityAction(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::VisibilityAction const &o){ return new scenarioengine::VisibilityAction(o); } ) );
		cl.def_readwrite("graphics_", &scenarioengine::VisibilityAction::graphics_);
		cl.def_readwrite("traffic_", &scenarioengine::VisibilityAction::traffic_);
		cl.def_readwrite("sensors_", &scenarioengine::VisibilityAction::sensors_);
		cl.def("Copy", (class scenarioengine::OSCPrivateAction * (scenarioengine::VisibilityAction::*)()) &scenarioengine::VisibilityAction::Copy, "C++: scenarioengine::VisibilityAction::Copy() --> class scenarioengine::OSCPrivateAction *", pybind11::return_value_policy::automatic);
		cl.def("Step", (void (scenarioengine::VisibilityAction::*)(double, double)) &scenarioengine::VisibilityAction::Step, "C++: scenarioengine::VisibilityAction::Step(double, double) --> void", pybind11::arg("dt"), pybind11::arg("simTime"));
		cl.def("Start", (void (scenarioengine::VisibilityAction::*)()) &scenarioengine::VisibilityAction::Start, "C++: scenarioengine::VisibilityAction::Start() --> void");
		cl.def("assign", (class scenarioengine::VisibilityAction & (scenarioengine::VisibilityAction::*)(const class scenarioengine::VisibilityAction &)) &scenarioengine::VisibilityAction::operator=, "C++: scenarioengine::VisibilityAction::operator=(const class scenarioengine::VisibilityAction &) --> class scenarioengine::VisibilityAction &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::Init file: line:22
		pybind11::class_<scenarioengine::Init, std::shared_ptr<scenarioengine::Init>> cl(M("scenarioengine"), "Init", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Init(); } ) );
		cl.def( pybind11::init( [](scenarioengine::Init const &o){ return new scenarioengine::Init(o); } ) );
		cl.def_readwrite("private_action_", &scenarioengine::Init::private_action_);
		cl.def_readwrite("global_action_", &scenarioengine::Init::global_action_);
		cl.def("assign", (class scenarioengine::Init & (scenarioengine::Init::*)(const class scenarioengine::Init &)) &scenarioengine::Init::operator=, "C++: scenarioengine::Init::operator=(const class scenarioengine::Init &) --> class scenarioengine::Init &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCCondition file: line:31
		pybind11::class_<scenarioengine::OSCCondition, std::shared_ptr<scenarioengine::OSCCondition>, PyCallBack_scenarioengine_OSCCondition> cl(M("scenarioengine"), "OSCCondition", "");
		cl.def( pybind11::init<scenarioengine::OSCCondition::ConditionType>(), pybind11::arg("base_type") );

		cl.def(pybind11::init<PyCallBack_scenarioengine_OSCCondition const &>());
		cl.def_readwrite("base_type_", &scenarioengine::OSCCondition::base_type_);
		cl.def_readwrite("name_", &scenarioengine::OSCCondition::name_);
		cl.def_readwrite("delay_", &scenarioengine::OSCCondition::delay_);
		cl.def_readwrite("evaluated_", &scenarioengine::OSCCondition::evaluated_);
		cl.def_readwrite("last_result_", &scenarioengine::OSCCondition::last_result_);
		cl.def_readwrite("edge_", &scenarioengine::OSCCondition::edge_);
		cl.def_readwrite("timer_", &scenarioengine::OSCCondition::timer_);
		cl.def("Evaluate", (bool (scenarioengine::OSCCondition::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::OSCCondition::Evaluate, "C++: scenarioengine::OSCCondition::Evaluate(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("CheckCondition", (bool (scenarioengine::OSCCondition::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::OSCCondition::CheckCondition, "C++: scenarioengine::OSCCondition::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::OSCCondition::*)()) &scenarioengine::OSCCondition::Log, "C++: scenarioengine::OSCCondition::Log() --> void");
		cl.def("CheckEdge", (bool (scenarioengine::OSCCondition::*)(bool, bool, scenarioengine::OSCCondition::ConditionEdge)) &scenarioengine::OSCCondition::CheckEdge, "C++: scenarioengine::OSCCondition::CheckEdge(bool, bool, scenarioengine::OSCCondition::ConditionEdge) --> bool", pybind11::arg("new_value"), pybind11::arg("old_value"), pybind11::arg("edge"));
		cl.def("assign", (class scenarioengine::OSCCondition & (scenarioengine::OSCCondition::*)(const class scenarioengine::OSCCondition &)) &scenarioengine::OSCCondition::operator=, "C++: scenarioengine::OSCCondition::operator=(const class scenarioengine::OSCCondition &) --> class scenarioengine::OSCCondition &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::ConditionGroup file: line:68
		pybind11::class_<scenarioengine::ConditionGroup, std::shared_ptr<scenarioengine::ConditionGroup>> cl(M("scenarioengine"), "ConditionGroup", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::ConditionGroup(); } ) );
		cl.def( pybind11::init( [](scenarioengine::ConditionGroup const &o){ return new scenarioengine::ConditionGroup(o); } ) );
		cl.def_readwrite("condition_", &scenarioengine::ConditionGroup::condition_);
		cl.def("Evaluate", (bool (scenarioengine::ConditionGroup::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::ConditionGroup::Evaluate, "C++: scenarioengine::ConditionGroup::Evaluate(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
	}
	{ // scenarioengine::Trigger file: line:76
		pybind11::class_<scenarioengine::Trigger, std::shared_ptr<scenarioengine::Trigger>> cl(M("scenarioengine"), "Trigger", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Trigger(); } ) );
		cl.def( pybind11::init( [](scenarioengine::Trigger const &o){ return new scenarioengine::Trigger(o); } ) );
		cl.def_readwrite("conditionGroup_", &scenarioengine::Trigger::conditionGroup_);
		cl.def("Evaluate", (bool (scenarioengine::Trigger::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::Trigger::Evaluate, "C++: scenarioengine::Trigger::Evaluate(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
	}
	{ // scenarioengine::TrigByEntity file: line:84
		pybind11::class_<scenarioengine::TrigByEntity, std::shared_ptr<scenarioengine::TrigByEntity>, PyCallBack_scenarioengine_TrigByEntity, scenarioengine::OSCCondition> cl(M("scenarioengine"), "TrigByEntity", "");
		cl.def( pybind11::init<scenarioengine::TrigByEntity::EntityConditionType>(), pybind11::arg("type") );

		cl.def(pybind11::init<PyCallBack_scenarioengine_TrigByEntity const &>());
		cl.def_readwrite("triggering_entity_rule_", &scenarioengine::TrigByEntity::triggering_entity_rule_);
		cl.def_readwrite("triggering_entities_", &scenarioengine::TrigByEntity::triggering_entities_);
		cl.def_readwrite("type_", &scenarioengine::TrigByEntity::type_);
		cl.def_readwrite("triggered_by_entities_", &scenarioengine::TrigByEntity::triggered_by_entities_);
		cl.def("Print", (void (scenarioengine::TrigByEntity::*)()) &scenarioengine::TrigByEntity::Print, "C++: scenarioengine::TrigByEntity::Print() --> void");
		cl.def("assign", (class scenarioengine::TrigByEntity & (scenarioengine::TrigByEntity::*)(const class scenarioengine::TrigByEntity &)) &scenarioengine::TrigByEntity::operator=, "C++: scenarioengine::TrigByEntity::operator=(const class scenarioengine::TrigByEntity &) --> class scenarioengine::TrigByEntity &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		{ // scenarioengine::TrigByEntity::Entity file: line:87
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::TrigByEntity::Entity, std::shared_ptr<scenarioengine::TrigByEntity::Entity>> cl(enclosing_class, "Entity", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::TrigByEntity::Entity(); } ) );
		}

		{ // scenarioengine::TrigByEntity::TriggeringEntities file: line:98
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::TrigByEntity::TriggeringEntities, std::shared_ptr<scenarioengine::TrigByEntity::TriggeringEntities>> cl(enclosing_class, "TriggeringEntities", "");
			cl.def( pybind11::init( [](scenarioengine::TrigByEntity::TriggeringEntities const &o){ return new scenarioengine::TrigByEntity::TriggeringEntities(o); } ) );
			cl.def( pybind11::init( [](){ return new scenarioengine::TrigByEntity::TriggeringEntities(); } ) );
			cl.def_readwrite("entity_", &scenarioengine::TrigByEntity::TriggeringEntities::entity_);
			cl.def_readwrite("rule_", &scenarioengine::TrigByEntity::TriggeringEntities::rule_);
			cl.def("assign", (struct scenarioengine::TrigByEntity::TriggeringEntities & (scenarioengine::TrigByEntity::TriggeringEntities::*)(const struct scenarioengine::TrigByEntity::TriggeringEntities &)) &scenarioengine::TrigByEntity::TriggeringEntities::operator=, "C++: scenarioengine::TrigByEntity::TriggeringEntities::operator=(const struct scenarioengine::TrigByEntity::TriggeringEntities &) --> struct scenarioengine::TrigByEntity::TriggeringEntities &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

	}
	{ // scenarioengine::TrigByTimeHeadway file: line:134
		pybind11::class_<scenarioengine::TrigByTimeHeadway, std::shared_ptr<scenarioengine::TrigByTimeHeadway>, PyCallBack_scenarioengine_TrigByTimeHeadway, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByTimeHeadway", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByTimeHeadway(); }, [](){ return new PyCallBack_scenarioengine_TrigByTimeHeadway(); } ) );
		cl.def_readwrite("value_", &scenarioengine::TrigByTimeHeadway::value_);
		cl.def_readwrite("freespace_", &scenarioengine::TrigByTimeHeadway::freespace_);
		cl.def_readwrite("along_route_", &scenarioengine::TrigByTimeHeadway::along_route_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByTimeHeadway::rule_);
		cl.def_readwrite("hwt_", &scenarioengine::TrigByTimeHeadway::hwt_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByTimeHeadway::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByTimeHeadway::CheckCondition, "C++: scenarioengine::TrigByTimeHeadway::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByTimeHeadway::*)()) &scenarioengine::TrigByTimeHeadway::Log, "C++: scenarioengine::TrigByTimeHeadway::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByTimeHeadway & (scenarioengine::TrigByTimeHeadway::*)(const class scenarioengine::TrigByTimeHeadway &)) &scenarioengine::TrigByTimeHeadway::operator=, "C++: scenarioengine::TrigByTimeHeadway::operator=(const class scenarioengine::TrigByTimeHeadway &) --> class scenarioengine::TrigByTimeHeadway &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByTimeToCollision file: line:149
		pybind11::class_<scenarioengine::TrigByTimeToCollision, std::shared_ptr<scenarioengine::TrigByTimeToCollision>, PyCallBack_scenarioengine_TrigByTimeToCollision, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByTimeToCollision", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByTimeToCollision(); }, [](){ return new PyCallBack_scenarioengine_TrigByTimeToCollision(); } ) );
		cl.def_readwrite("value_", &scenarioengine::TrigByTimeToCollision::value_);
		cl.def_readwrite("freespace_", &scenarioengine::TrigByTimeToCollision::freespace_);
		cl.def_readwrite("along_route_", &scenarioengine::TrigByTimeToCollision::along_route_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByTimeToCollision::rule_);
		cl.def_readwrite("ttc_", &scenarioengine::TrigByTimeToCollision::ttc_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByTimeToCollision::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByTimeToCollision::CheckCondition, "C++: scenarioengine::TrigByTimeToCollision::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByTimeToCollision::*)()) &scenarioengine::TrigByTimeToCollision::Log, "C++: scenarioengine::TrigByTimeToCollision::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByTimeToCollision & (scenarioengine::TrigByTimeToCollision::*)(const class scenarioengine::TrigByTimeToCollision &)) &scenarioengine::TrigByTimeToCollision::operator=, "C++: scenarioengine::TrigByTimeToCollision::operator=(const class scenarioengine::TrigByTimeToCollision &) --> class scenarioengine::TrigByTimeToCollision &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByReachPosition file: line:165
		pybind11::class_<scenarioengine::TrigByReachPosition, std::shared_ptr<scenarioengine::TrigByReachPosition>, PyCallBack_scenarioengine_TrigByReachPosition, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByReachPosition", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByReachPosition(); }, [](){ return new PyCallBack_scenarioengine_TrigByReachPosition(); } ) );
		cl.def_readwrite("tolerance_", &scenarioengine::TrigByReachPosition::tolerance_);
		cl.def_readwrite("dist_", &scenarioengine::TrigByReachPosition::dist_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByReachPosition::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByReachPosition::CheckCondition, "C++: scenarioengine::TrigByReachPosition::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByReachPosition::*)()) &scenarioengine::TrigByReachPosition::Log, "C++: scenarioengine::TrigByReachPosition::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByReachPosition & (scenarioengine::TrigByReachPosition::*)(const class scenarioengine::TrigByReachPosition &)) &scenarioengine::TrigByReachPosition::operator=, "C++: scenarioengine::TrigByReachPosition::operator=(const class scenarioengine::TrigByReachPosition &) --> class scenarioengine::TrigByReachPosition &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByDistance file: line:177
		pybind11::class_<scenarioengine::TrigByDistance, std::shared_ptr<scenarioengine::TrigByDistance>, PyCallBack_scenarioengine_TrigByDistance, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByDistance", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByDistance(); }, [](){ return new PyCallBack_scenarioengine_TrigByDistance(); } ) );
		cl.def_readwrite("value_", &scenarioengine::TrigByDistance::value_);
		cl.def_readwrite("freespace_", &scenarioengine::TrigByDistance::freespace_);
		cl.def_readwrite("along_route_", &scenarioengine::TrigByDistance::along_route_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByDistance::rule_);
		cl.def_readwrite("dist_", &scenarioengine::TrigByDistance::dist_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByDistance::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByDistance::CheckCondition, "C++: scenarioengine::TrigByDistance::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByDistance::*)()) &scenarioengine::TrigByDistance::Log, "C++: scenarioengine::TrigByDistance::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByDistance & (scenarioengine::TrigByDistance::*)(const class scenarioengine::TrigByDistance &)) &scenarioengine::TrigByDistance::operator=, "C++: scenarioengine::TrigByDistance::operator=(const class scenarioengine::TrigByDistance &) --> class scenarioengine::TrigByDistance &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


// File: unknown/unknown_7.cpp
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "ScenarioEngine.hpp"
#include "CommonMini.hpp"
#include "ControllerFollowGhost.hpp"
#include "ControllerExternal.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// scenarioengine::TrigByTraveledDistance file: line:192
struct PyCallBack_scenarioengine_TrigByTraveledDistance : public scenarioengine::TrigByTraveledDistance {
	using scenarioengine::TrigByTraveledDistance::TrigByTraveledDistance;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByTraveledDistance *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByTraveledDistance::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByTraveledDistance *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByTraveledDistance::Log();
	}
};

// scenarioengine::TrigByRelativeDistance file: line:203
struct PyCallBack_scenarioengine_TrigByRelativeDistance : public scenarioengine::TrigByRelativeDistance {
	using scenarioengine::TrigByRelativeDistance::TrigByRelativeDistance;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByRelativeDistance *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByRelativeDistance::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByRelativeDistance *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByRelativeDistance::Log();
	}
};

// scenarioengine::TrigByCollision file: line:225
struct PyCallBack_scenarioengine_TrigByCollision : public scenarioengine::TrigByCollision {
	using scenarioengine::TrigByCollision::TrigByCollision;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByCollision *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByCollision::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByCollision *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByCollision::Log();
	}
};

// scenarioengine::TrigByEndOfRoad file: line:251
struct PyCallBack_scenarioengine_TrigByEndOfRoad : public scenarioengine::TrigByEndOfRoad {
	using scenarioengine::TrigByEndOfRoad::TrigByEndOfRoad;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByEndOfRoad *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByEndOfRoad::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByEndOfRoad *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByEndOfRoad::Log();
	}
};

// scenarioengine::TrigByOffRoad file: line:268
struct PyCallBack_scenarioengine_TrigByOffRoad : public scenarioengine::TrigByOffRoad {
	using scenarioengine::TrigByOffRoad::TrigByOffRoad;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByOffRoad *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByOffRoad::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByOffRoad *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByOffRoad::Log();
	}
};

// scenarioengine::TrigByAcceleration file: line:284
struct PyCallBack_scenarioengine_TrigByAcceleration : public scenarioengine::TrigByAcceleration {
	using scenarioengine::TrigByAcceleration::TrigByAcceleration;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByAcceleration *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByAcceleration::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByAcceleration *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByAcceleration::Log();
	}
};

// scenarioengine::TrigBySpeed file: line:296
struct PyCallBack_scenarioengine_TrigBySpeed : public scenarioengine::TrigBySpeed {
	using scenarioengine::TrigBySpeed::TrigBySpeed;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigBySpeed *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigBySpeed::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigBySpeed *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigBySpeed::Log();
	}
};

// scenarioengine::TrigByRelativeSpeed file: line:308
struct PyCallBack_scenarioengine_TrigByRelativeSpeed : public scenarioengine::TrigByRelativeSpeed {
	using scenarioengine::TrigByRelativeSpeed::TrigByRelativeSpeed;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByRelativeSpeed *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByRelativeSpeed::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByRelativeSpeed *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByRelativeSpeed::Log();
	}
};

// scenarioengine::TrigByStandStill file: line:321
struct PyCallBack_scenarioengine_TrigByStandStill : public scenarioengine::TrigByStandStill {
	using scenarioengine::TrigByStandStill::TrigByStandStill;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByStandStill *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByStandStill::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByStandStill *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByStandStill::Log();
	}
};

// scenarioengine::TrigByState file: line:337
struct PyCallBack_scenarioengine_TrigByState : public scenarioengine::TrigByState {
	using scenarioengine::TrigByState::TrigByState;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByState *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByState::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByState *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByState::Log();
	}
};

// scenarioengine::TrigByValue file: line:366
struct PyCallBack_scenarioengine_TrigByValue : public scenarioengine::TrigByValue {
	using scenarioengine::TrigByValue::TrigByValue;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByValue *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"OSCCondition::CheckCondition\"");
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByValue *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return OSCCondition::Log();
	}
};

void bind_unknown_unknown_7(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // scenarioengine::TrigByTraveledDistance file: line:192
		pybind11::class_<scenarioengine::TrigByTraveledDistance, std::shared_ptr<scenarioengine::TrigByTraveledDistance>, PyCallBack_scenarioengine_TrigByTraveledDistance, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByTraveledDistance", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByTraveledDistance(); }, [](){ return new PyCallBack_scenarioengine_TrigByTraveledDistance(); } ) );
		cl.def_readwrite("value_", &scenarioengine::TrigByTraveledDistance::value_);
		cl.def_readwrite("odom_", &scenarioengine::TrigByTraveledDistance::odom_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByTraveledDistance::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByTraveledDistance::CheckCondition, "C++: scenarioengine::TrigByTraveledDistance::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByTraveledDistance::*)()) &scenarioengine::TrigByTraveledDistance::Log, "C++: scenarioengine::TrigByTraveledDistance::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByTraveledDistance & (scenarioengine::TrigByTraveledDistance::*)(const class scenarioengine::TrigByTraveledDistance &)) &scenarioengine::TrigByTraveledDistance::operator=, "C++: scenarioengine::TrigByTraveledDistance::operator=(const class scenarioengine::TrigByTraveledDistance &) --> class scenarioengine::TrigByTraveledDistance &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByRelativeDistance file: line:203
		pybind11::class_<scenarioengine::TrigByRelativeDistance, std::shared_ptr<scenarioengine::TrigByRelativeDistance>, PyCallBack_scenarioengine_TrigByRelativeDistance, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByRelativeDistance", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByRelativeDistance(); }, [](){ return new PyCallBack_scenarioengine_TrigByRelativeDistance(); } ) );
		cl.def_readwrite("value_", &scenarioengine::TrigByRelativeDistance::value_);
		cl.def_readwrite("freespace_", &scenarioengine::TrigByRelativeDistance::freespace_);
		cl.def_readwrite("type_", &scenarioengine::TrigByRelativeDistance::type_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByRelativeDistance::rule_);
		cl.def_readwrite("rel_dist_", &scenarioengine::TrigByRelativeDistance::rel_dist_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByRelativeDistance::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByRelativeDistance::CheckCondition, "C++: scenarioengine::TrigByRelativeDistance::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByRelativeDistance::*)()) &scenarioengine::TrigByRelativeDistance::Log, "C++: scenarioengine::TrigByRelativeDistance::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByRelativeDistance & (scenarioengine::TrigByRelativeDistance::*)(const class scenarioengine::TrigByRelativeDistance &)) &scenarioengine::TrigByRelativeDistance::operator=, "C++: scenarioengine::TrigByRelativeDistance::operator=(const class scenarioengine::TrigByRelativeDistance &) --> class scenarioengine::TrigByRelativeDistance &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByCollision file: line:225
		pybind11::class_<scenarioengine::TrigByCollision, std::shared_ptr<scenarioengine::TrigByCollision>, PyCallBack_scenarioengine_TrigByCollision, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByCollision", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByCollision(); }, [](){ return new PyCallBack_scenarioengine_TrigByCollision(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_TrigByCollision const &o){ return new PyCallBack_scenarioengine_TrigByCollision(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::TrigByCollision const &o){ return new scenarioengine::TrigByCollision(o); } ) );
		cl.def_readwrite("type_", &scenarioengine::TrigByCollision::type_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByCollision::rule_);
		cl.def_readwrite("collision_pair_", &scenarioengine::TrigByCollision::collision_pair_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByCollision::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByCollision::CheckCondition, "C++: scenarioengine::TrigByCollision::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByCollision::*)()) &scenarioengine::TrigByCollision::Log, "C++: scenarioengine::TrigByCollision::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByCollision & (scenarioengine::TrigByCollision::*)(const class scenarioengine::TrigByCollision &)) &scenarioengine::TrigByCollision::operator=, "C++: scenarioengine::TrigByCollision::operator=(const class scenarioengine::TrigByCollision &) --> class scenarioengine::TrigByCollision &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByEndOfRoad file: line:251
		pybind11::class_<scenarioengine::TrigByEndOfRoad, std::shared_ptr<scenarioengine::TrigByEndOfRoad>, PyCallBack_scenarioengine_TrigByEndOfRoad, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByEndOfRoad", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByEndOfRoad(); }, [](){ return new PyCallBack_scenarioengine_TrigByEndOfRoad(); } ) );
		cl.def_readwrite("duration_", &scenarioengine::TrigByEndOfRoad::duration_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByEndOfRoad::rule_);
		cl.def_readwrite("current_duration_", &scenarioengine::TrigByEndOfRoad::current_duration_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByEndOfRoad::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByEndOfRoad::CheckCondition, "C++: scenarioengine::TrigByEndOfRoad::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByEndOfRoad::*)()) &scenarioengine::TrigByEndOfRoad::Log, "C++: scenarioengine::TrigByEndOfRoad::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByEndOfRoad & (scenarioengine::TrigByEndOfRoad::*)(const class scenarioengine::TrigByEndOfRoad &)) &scenarioengine::TrigByEndOfRoad::operator=, "C++: scenarioengine::TrigByEndOfRoad::operator=(const class scenarioengine::TrigByEndOfRoad &) --> class scenarioengine::TrigByEndOfRoad &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByOffRoad file: line:268
		pybind11::class_<scenarioengine::TrigByOffRoad, std::shared_ptr<scenarioengine::TrigByOffRoad>, PyCallBack_scenarioengine_TrigByOffRoad, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByOffRoad", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByOffRoad(); }, [](){ return new PyCallBack_scenarioengine_TrigByOffRoad(); } ) );
		cl.def_readwrite("duration_", &scenarioengine::TrigByOffRoad::duration_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByOffRoad::rule_);
		cl.def_readwrite("current_duration_", &scenarioengine::TrigByOffRoad::current_duration_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByOffRoad::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByOffRoad::CheckCondition, "C++: scenarioengine::TrigByOffRoad::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByOffRoad::*)()) &scenarioengine::TrigByOffRoad::Log, "C++: scenarioengine::TrigByOffRoad::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByOffRoad & (scenarioengine::TrigByOffRoad::*)(const class scenarioengine::TrigByOffRoad &)) &scenarioengine::TrigByOffRoad::operator=, "C++: scenarioengine::TrigByOffRoad::operator=(const class scenarioengine::TrigByOffRoad &) --> class scenarioengine::TrigByOffRoad &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByAcceleration file: line:284
		pybind11::class_<scenarioengine::TrigByAcceleration, std::shared_ptr<scenarioengine::TrigByAcceleration>, PyCallBack_scenarioengine_TrigByAcceleration, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByAcceleration", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByAcceleration(); }, [](){ return new PyCallBack_scenarioengine_TrigByAcceleration(); } ) );
		cl.def_readwrite("value_", &scenarioengine::TrigByAcceleration::value_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByAcceleration::rule_);
		cl.def_readwrite("current_acceleration_", &scenarioengine::TrigByAcceleration::current_acceleration_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByAcceleration::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByAcceleration::CheckCondition, "C++: scenarioengine::TrigByAcceleration::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByAcceleration::*)()) &scenarioengine::TrigByAcceleration::Log, "C++: scenarioengine::TrigByAcceleration::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByAcceleration & (scenarioengine::TrigByAcceleration::*)(const class scenarioengine::TrigByAcceleration &)) &scenarioengine::TrigByAcceleration::operator=, "C++: scenarioengine::TrigByAcceleration::operator=(const class scenarioengine::TrigByAcceleration &) --> class scenarioengine::TrigByAcceleration &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigBySpeed file: line:296
		pybind11::class_<scenarioengine::TrigBySpeed, std::shared_ptr<scenarioengine::TrigBySpeed>, PyCallBack_scenarioengine_TrigBySpeed, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigBySpeed", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigBySpeed(); }, [](){ return new PyCallBack_scenarioengine_TrigBySpeed(); } ) );
		cl.def_readwrite("value_", &scenarioengine::TrigBySpeed::value_);
		cl.def_readwrite("rule_", &scenarioengine::TrigBySpeed::rule_);
		cl.def_readwrite("current_speed_", &scenarioengine::TrigBySpeed::current_speed_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigBySpeed::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigBySpeed::CheckCondition, "C++: scenarioengine::TrigBySpeed::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigBySpeed::*)()) &scenarioengine::TrigBySpeed::Log, "C++: scenarioengine::TrigBySpeed::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigBySpeed & (scenarioengine::TrigBySpeed::*)(const class scenarioengine::TrigBySpeed &)) &scenarioengine::TrigBySpeed::operator=, "C++: scenarioengine::TrigBySpeed::operator=(const class scenarioengine::TrigBySpeed &) --> class scenarioengine::TrigBySpeed &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByRelativeSpeed file: line:308
		pybind11::class_<scenarioengine::TrigByRelativeSpeed, std::shared_ptr<scenarioengine::TrigByRelativeSpeed>, PyCallBack_scenarioengine_TrigByRelativeSpeed, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByRelativeSpeed", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByRelativeSpeed(); }, [](){ return new PyCallBack_scenarioengine_TrigByRelativeSpeed(); } ) );
		cl.def_readwrite("value_", &scenarioengine::TrigByRelativeSpeed::value_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByRelativeSpeed::rule_);
		cl.def_readwrite("current_rel_speed_", &scenarioengine::TrigByRelativeSpeed::current_rel_speed_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByRelativeSpeed::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByRelativeSpeed::CheckCondition, "C++: scenarioengine::TrigByRelativeSpeed::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByRelativeSpeed::*)()) &scenarioengine::TrigByRelativeSpeed::Log, "C++: scenarioengine::TrigByRelativeSpeed::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByRelativeSpeed & (scenarioengine::TrigByRelativeSpeed::*)(const class scenarioengine::TrigByRelativeSpeed &)) &scenarioengine::TrigByRelativeSpeed::operator=, "C++: scenarioengine::TrigByRelativeSpeed::operator=(const class scenarioengine::TrigByRelativeSpeed &) --> class scenarioengine::TrigByRelativeSpeed &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByStandStill file: line:321
		pybind11::class_<scenarioengine::TrigByStandStill, std::shared_ptr<scenarioengine::TrigByStandStill>, PyCallBack_scenarioengine_TrigByStandStill, scenarioengine::TrigByEntity> cl(M("scenarioengine"), "TrigByStandStill", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByStandStill(); }, [](){ return new PyCallBack_scenarioengine_TrigByStandStill(); } ) );
		cl.def_readwrite("duration_", &scenarioengine::TrigByStandStill::duration_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByStandStill::rule_);
		cl.def_readwrite("current_duration_", &scenarioengine::TrigByStandStill::current_duration_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByStandStill::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByStandStill::CheckCondition, "C++: scenarioengine::TrigByStandStill::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByStandStill::*)()) &scenarioengine::TrigByStandStill::Log, "C++: scenarioengine::TrigByStandStill::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByStandStill & (scenarioengine::TrigByStandStill::*)(const class scenarioengine::TrigByStandStill &)) &scenarioengine::TrigByStandStill::operator=, "C++: scenarioengine::TrigByStandStill::operator=(const class scenarioengine::TrigByStandStill &) --> class scenarioengine::TrigByStandStill &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByState file: line:337
		pybind11::class_<scenarioengine::TrigByState, std::shared_ptr<scenarioengine::TrigByState>, PyCallBack_scenarioengine_TrigByState, scenarioengine::OSCCondition> cl(M("scenarioengine"), "TrigByState", "");
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_TrigByState const &o){ return new PyCallBack_scenarioengine_TrigByState(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::TrigByState const &o){ return new scenarioengine::TrigByState(o); } ) );
		cl.def_readwrite("state_", &scenarioengine::TrigByState::state_);
		cl.def_readwrite("element_type_", &scenarioengine::TrigByState::element_type_);
		cl.def_readwrite("element_name_", &scenarioengine::TrigByState::element_name_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByState::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByState::CheckCondition, "C++: scenarioengine::TrigByState::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByState::*)()) &scenarioengine::TrigByState::Log, "C++: scenarioengine::TrigByState::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByState & (scenarioengine::TrigByState::*)(const class scenarioengine::TrigByState &)) &scenarioengine::TrigByState::operator=, "C++: scenarioengine::TrigByState::operator=(const class scenarioengine::TrigByState &) --> class scenarioengine::TrigByState &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByValue file: line:366
		pybind11::class_<scenarioengine::TrigByValue, std::shared_ptr<scenarioengine::TrigByValue>, PyCallBack_scenarioengine_TrigByValue, scenarioengine::OSCCondition> cl(M("scenarioengine"), "TrigByValue", "");
		cl.def( pybind11::init<scenarioengine::TrigByValue::Type>(), pybind11::arg("type") );

		cl.def(pybind11::init<PyCallBack_scenarioengine_TrigByValue const &>());
		cl.def_readwrite("type_", &scenarioengine::TrigByValue::type_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByValue::rule_);
		cl.def("assign", (class scenarioengine::TrigByValue & (scenarioengine::TrigByValue::*)(const class scenarioengine::TrigByValue &)) &scenarioengine::TrigByValue::operator=, "C++: scenarioengine::TrigByValue::operator=(const class scenarioengine::TrigByValue &) --> class scenarioengine::TrigByValue &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


// File: unknown/unknown_8.cpp
#include <OSCFile.hpp>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "ScenarioEngine.hpp"
#include "CommonMini.hpp"
#include "ControllerFollowGhost.hpp"
#include "ControllerExternal.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// scenarioengine::TrigBySimulationTime file: line:383
struct PyCallBack_scenarioengine_TrigBySimulationTime : public scenarioengine::TrigBySimulationTime {
	using scenarioengine::TrigBySimulationTime::TrigBySimulationTime;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigBySimulationTime *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigBySimulationTime::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigBySimulationTime *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigBySimulationTime::Log();
	}
};

// scenarioengine::TrigByParameter file: line:394
struct PyCallBack_scenarioengine_TrigByParameter : public scenarioengine::TrigByParameter {
	using scenarioengine::TrigByParameter::TrigByParameter;

	bool CheckCondition(class scenarioengine::StoryBoard * a0, double a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByParameter *>(this), "CheckCondition");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return TrigByParameter::CheckCondition(a0, a1);
	}
	void Log() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::TrigByParameter *>(this), "Log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return TrigByParameter::Log();
	}
};

// scenarioengine::Event file: line:28
struct PyCallBack_scenarioengine_Event : public scenarioengine::Event {
	using scenarioengine::Event::Event;

	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Event *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Event::Start();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Event *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Event::End();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Event *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Event::Stop();
	}
};

// scenarioengine::ManeuverGroup file: line:25
struct PyCallBack_scenarioengine_ManeuverGroup : public scenarioengine::ManeuverGroup {
	using scenarioengine::ManeuverGroup::ManeuverGroup;

	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ManeuverGroup *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Start();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ManeuverGroup *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::ManeuverGroup *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

// scenarioengine::Act file: line:64
struct PyCallBack_scenarioengine_Act : public scenarioengine::Act {
	using scenarioengine::Act::Act;

	void Start() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Act *>(this), "Start");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Start();
	}
	void Stop() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Act *>(this), "Stop");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::Stop();
	}
	void End() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Act *>(this), "End");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return StoryBoardElement::End();
	}
};

void bind_unknown_unknown_8(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // scenarioengine::TrigBySimulationTime file: line:383
		pybind11::class_<scenarioengine::TrigBySimulationTime, std::shared_ptr<scenarioengine::TrigBySimulationTime>, PyCallBack_scenarioengine_TrigBySimulationTime, scenarioengine::TrigByValue> cl(M("scenarioengine"), "TrigBySimulationTime", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigBySimulationTime(); }, [](){ return new PyCallBack_scenarioengine_TrigBySimulationTime(); } ) );
		cl.def_readwrite("value_", &scenarioengine::TrigBySimulationTime::value_);
		cl.def_readwrite("sim_time_", &scenarioengine::TrigBySimulationTime::sim_time_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigBySimulationTime::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigBySimulationTime::CheckCondition, "C++: scenarioengine::TrigBySimulationTime::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigBySimulationTime::*)()) &scenarioengine::TrigBySimulationTime::Log, "C++: scenarioengine::TrigBySimulationTime::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigBySimulationTime & (scenarioengine::TrigBySimulationTime::*)(const class scenarioengine::TrigBySimulationTime &)) &scenarioengine::TrigBySimulationTime::operator=, "C++: scenarioengine::TrigBySimulationTime::operator=(const class scenarioengine::TrigBySimulationTime &) --> class scenarioengine::TrigBySimulationTime &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::TrigByParameter file: line:394
		pybind11::class_<scenarioengine::TrigByParameter, std::shared_ptr<scenarioengine::TrigByParameter>, PyCallBack_scenarioengine_TrigByParameter, scenarioengine::TrigByValue> cl(M("scenarioengine"), "TrigByParameter", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::TrigByParameter(); }, [](){ return new PyCallBack_scenarioengine_TrigByParameter(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_TrigByParameter const &o){ return new PyCallBack_scenarioengine_TrigByParameter(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::TrigByParameter const &o){ return new scenarioengine::TrigByParameter(o); } ) );
		cl.def_readwrite("name_", &scenarioengine::TrigByParameter::name_);
		cl.def_readwrite("value_", &scenarioengine::TrigByParameter::value_);
		cl.def_readwrite("rule_", &scenarioengine::TrigByParameter::rule_);
		cl.def_readwrite("current_value_str_", &scenarioengine::TrigByParameter::current_value_str_);
		cl.def("CheckCondition", (bool (scenarioengine::TrigByParameter::*)(class scenarioengine::StoryBoard *, double)) &scenarioengine::TrigByParameter::CheckCondition, "C++: scenarioengine::TrigByParameter::CheckCondition(class scenarioengine::StoryBoard *, double) --> bool", pybind11::arg("storyBoard"), pybind11::arg("sim_time"));
		cl.def("Log", (void (scenarioengine::TrigByParameter::*)()) &scenarioengine::TrigByParameter::Log, "C++: scenarioengine::TrigByParameter::Log() --> void");
		cl.def("assign", (class scenarioengine::TrigByParameter & (scenarioengine::TrigByParameter::*)(const class scenarioengine::TrigByParameter &)) &scenarioengine::TrigByParameter::operator=, "C++: scenarioengine::TrigByParameter::operator=(const class scenarioengine::TrigByParameter &) --> class scenarioengine::TrigByParameter &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::Event file: line:28
		pybind11::class_<scenarioengine::Event, std::shared_ptr<scenarioengine::Event>, PyCallBack_scenarioengine_Event, scenarioengine::StoryBoardElement> cl(M("scenarioengine"), "Event", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Event(); }, [](){ return new PyCallBack_scenarioengine_Event(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_Event const &o){ return new PyCallBack_scenarioengine_Event(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::Event const &o){ return new scenarioengine::Event(o); } ) );
		cl.def_readwrite("priority_", &scenarioengine::Event::priority_);
		cl.def_readwrite("action_", &scenarioengine::Event::action_);
		cl.def("Start", (void (scenarioengine::Event::*)()) &scenarioengine::Event::Start, "C++: scenarioengine::Event::Start() --> void");
		cl.def("End", (void (scenarioengine::Event::*)()) &scenarioengine::Event::End, "C++: scenarioengine::Event::End() --> void");
		cl.def("Stop", (void (scenarioengine::Event::*)()) &scenarioengine::Event::Stop, "C++: scenarioengine::Event::Stop() --> void");
		cl.def("assign", (class scenarioengine::Event & (scenarioengine::Event::*)(const class scenarioengine::Event &)) &scenarioengine::Event::operator=, "C++: scenarioengine::Event::operator=(const class scenarioengine::Event &) --> class scenarioengine::Event &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::OSCManeuver file: line:54
		pybind11::class_<scenarioengine::OSCManeuver, std::shared_ptr<scenarioengine::OSCManeuver>> cl(M("scenarioengine"), "OSCManeuver", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCManeuver(); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCManeuver const &o){ return new scenarioengine::OSCManeuver(o); } ) );
		cl.def_readwrite("parameter_declarations_", &scenarioengine::OSCManeuver::parameter_declarations_);
		cl.def_readwrite("event_", &scenarioengine::OSCManeuver::event_);
		cl.def_readwrite("name_", &scenarioengine::OSCManeuver::name_);
		cl.def("IsAnyEventActive", (bool (scenarioengine::OSCManeuver::*)()) &scenarioengine::OSCManeuver::IsAnyEventActive, "C++: scenarioengine::OSCManeuver::IsAnyEventActive() --> bool");
		cl.def("Print", (void (scenarioengine::OSCManeuver::*)()) &scenarioengine::OSCManeuver::Print, "C++: scenarioengine::OSCManeuver::Print() --> void");
	}
	{ // scenarioengine::ManeuverGroup file: line:25
		pybind11::class_<scenarioengine::ManeuverGroup, std::shared_ptr<scenarioengine::ManeuverGroup>, PyCallBack_scenarioengine_ManeuverGroup, scenarioengine::StoryBoardElement> cl(M("scenarioengine"), "ManeuverGroup", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::ManeuverGroup(); }, [](){ return new PyCallBack_scenarioengine_ManeuverGroup(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_ManeuverGroup const &o){ return new PyCallBack_scenarioengine_ManeuverGroup(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::ManeuverGroup const &o){ return new scenarioengine::ManeuverGroup(o); } ) );
		cl.def_readwrite("actor_", &scenarioengine::ManeuverGroup::actor_);
		cl.def_readwrite("maneuver_", &scenarioengine::ManeuverGroup::maneuver_);
		cl.def_readwrite("name_", &scenarioengine::ManeuverGroup::name_);
		cl.def("IsObjectActor", (bool (scenarioengine::ManeuverGroup::*)(class scenarioengine::Object *)) &scenarioengine::ManeuverGroup::IsObjectActor, "C++: scenarioengine::ManeuverGroup::IsObjectActor(class scenarioengine::Object *) --> bool", pybind11::arg("object"));
		cl.def("assign", (class scenarioengine::ManeuverGroup & (scenarioengine::ManeuverGroup::*)(const class scenarioengine::ManeuverGroup &)) &scenarioengine::ManeuverGroup::operator=, "C++: scenarioengine::ManeuverGroup::operator=(const class scenarioengine::ManeuverGroup &) --> class scenarioengine::ManeuverGroup &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::Act file: line:64
		pybind11::class_<scenarioengine::Act, std::shared_ptr<scenarioengine::Act>, PyCallBack_scenarioengine_Act, scenarioengine::StoryBoardElement> cl(M("scenarioengine"), "Act", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Act(); }, [](){ return new PyCallBack_scenarioengine_Act(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_Act const &o){ return new PyCallBack_scenarioengine_Act(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::Act const &o){ return new scenarioengine::Act(o); } ) );
		cl.def_readwrite("maneuverGroup_", &scenarioengine::Act::maneuverGroup_);
		cl.def("assign", (class scenarioengine::Act & (scenarioengine::Act::*)(const class scenarioengine::Act &)) &scenarioengine::Act::operator=, "C++: scenarioengine::Act::operator=(const class scenarioengine::Act &) --> class scenarioengine::Act &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::Story file: line:75
		pybind11::class_<scenarioengine::Story, std::shared_ptr<scenarioengine::Story>> cl(M("scenarioengine"), "Story", "");
		cl.def( pybind11::init( [](scenarioengine::Story const &o){ return new scenarioengine::Story(o); } ) );
		cl.def_readwrite("parameter_declarations_", &scenarioengine::Story::parameter_declarations_);
		cl.def_readwrite("act_", &scenarioengine::Story::act_);
		cl.def_readwrite("name_", &scenarioengine::Story::name_);
		cl.def("Print", (void (scenarioengine::Story::*)()) &scenarioengine::Story::Print, "C++: scenarioengine::Story::Print() --> void");
	}
	{ // scenarioengine::StoryBoard file: line:90
		pybind11::class_<scenarioengine::StoryBoard, std::shared_ptr<scenarioengine::StoryBoard>> cl(M("scenarioengine"), "StoryBoard", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::StoryBoard(); } ) );
		cl.def( pybind11::init( [](scenarioengine::StoryBoard const &o){ return new scenarioengine::StoryBoard(o); } ) );
		cl.def_readwrite("story_", &scenarioengine::StoryBoard::story_);
		cl.def("Print", (void (scenarioengine::StoryBoard::*)()) &scenarioengine::StoryBoard::Print, "C++: scenarioengine::StoryBoard::Print() --> void");
		cl.def("assign", (class scenarioengine::StoryBoard & (scenarioengine::StoryBoard::*)(const class scenarioengine::StoryBoard &)) &scenarioengine::StoryBoard::operator=, "C++: scenarioengine::StoryBoard::operator=(const class scenarioengine::StoryBoard &) --> class scenarioengine::StoryBoard &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::ObjectStateStruct file: line:23
		pybind11::class_<scenarioengine::ObjectStateStruct, std::shared_ptr<scenarioengine::ObjectStateStruct>> cl(M("scenarioengine"), "ObjectStateStruct", "");
		cl.def( pybind11::init( [](scenarioengine::ObjectStateStruct const &o){ return new scenarioengine::ObjectStateStruct(o); } ) );
		cl.def( pybind11::init( [](){ return new scenarioengine::ObjectStateStruct(); } ) );
		cl.def_readwrite("id", &scenarioengine::ObjectStateStruct::id);
		cl.def_readwrite("model_id", &scenarioengine::ObjectStateStruct::model_id);
		cl.def_readwrite("obj_type", &scenarioengine::ObjectStateStruct::obj_type);
		cl.def_readwrite("obj_category", &scenarioengine::ObjectStateStruct::obj_category);
		cl.def_readwrite("ctrl_type", &scenarioengine::ObjectStateStruct::ctrl_type);
		cl.def_readwrite("timeStamp", &scenarioengine::ObjectStateStruct::timeStamp);
		cl.def_readwrite("pos", &scenarioengine::ObjectStateStruct::pos);
		cl.def_readwrite("speed", &scenarioengine::ObjectStateStruct::speed);
		cl.def_readwrite("wheel_angle", &scenarioengine::ObjectStateStruct::wheel_angle);
		cl.def_readwrite("wheel_rot", &scenarioengine::ObjectStateStruct::wheel_rot);
		cl.def_readwrite("boundingbox", &scenarioengine::ObjectStateStruct::boundingbox);
	}
	{ // scenarioengine::ObjectState file: line:39
		pybind11::class_<scenarioengine::ObjectState, std::shared_ptr<scenarioengine::ObjectState>> cl(M("scenarioengine"), "ObjectState", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::ObjectState(); } ) );
		cl.def( pybind11::init( [](scenarioengine::ObjectState const &o){ return new scenarioengine::ObjectState(o); } ) );
		cl.def_readwrite("state_", &scenarioengine::ObjectState::state_);
		cl.def("getStruct", (struct scenarioengine::ObjectStateStruct (scenarioengine::ObjectState::*)()) &scenarioengine::ObjectState::getStruct, "C++: scenarioengine::ObjectState::getStruct() --> struct scenarioengine::ObjectStateStruct");
		cl.def("Print", (void (scenarioengine::ObjectState::*)()) &scenarioengine::ObjectState::Print, "C++: scenarioengine::ObjectState::Print() --> void");
	}
	{ // scenarioengine::ScenarioGateway file: line:60
		pybind11::class_<scenarioengine::ScenarioGateway, std::shared_ptr<scenarioengine::ScenarioGateway>> cl(M("scenarioengine"), "ScenarioGateway", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::ScenarioGateway(); } ) );
		cl.def_readwrite("objectState_", &scenarioengine::ScenarioGateway::objectState_);
		cl.def("removeObject", (void (scenarioengine::ScenarioGateway::*)(int)) &scenarioengine::ScenarioGateway::removeObject, "C++: scenarioengine::ScenarioGateway::removeObject(int) --> void", pybind11::arg("id"));
		cl.def("getNumberOfObjects", (int (scenarioengine::ScenarioGateway::*)()) &scenarioengine::ScenarioGateway::getNumberOfObjects, "C++: scenarioengine::ScenarioGateway::getNumberOfObjects() --> int");
		cl.def("getObjectStateByIdx", (class scenarioengine::ObjectState (scenarioengine::ScenarioGateway::*)(int)) &scenarioengine::ScenarioGateway::getObjectStateByIdx, "C++: scenarioengine::ScenarioGateway::getObjectStateByIdx(int) --> class scenarioengine::ObjectState", pybind11::arg("idx"));
		cl.def("getObjectStatePtrByIdx", (class scenarioengine::ObjectState * (scenarioengine::ScenarioGateway::*)(int)) &scenarioengine::ScenarioGateway::getObjectStatePtrByIdx, "C++: scenarioengine::ScenarioGateway::getObjectStatePtrByIdx(int) --> class scenarioengine::ObjectState *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("getObjectStatePtrById", (class scenarioengine::ObjectState * (scenarioengine::ScenarioGateway::*)(int)) &scenarioengine::ScenarioGateway::getObjectStatePtrById, "C++: scenarioengine::ScenarioGateway::getObjectStatePtrById(int) --> class scenarioengine::ObjectState *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("getObjectStateById", (int (scenarioengine::ScenarioGateway::*)(int, class scenarioengine::ObjectState &)) &scenarioengine::ScenarioGateway::getObjectStateById, "C++: scenarioengine::ScenarioGateway::getObjectStateById(int, class scenarioengine::ObjectState &) --> int", pybind11::arg("idx"), pybind11::arg("objState"));
		cl.def("WriteStatesToFile", (void (scenarioengine::ScenarioGateway::*)()) &scenarioengine::ScenarioGateway::WriteStatesToFile, "C++: scenarioengine::ScenarioGateway::WriteStatesToFile() --> void");
	}
	{ // scenarioengine::OSCFile file:OSCFile.hpp line:22
		pybind11::class_<scenarioengine::OSCFile, std::shared_ptr<scenarioengine::OSCFile>> cl(M("scenarioengine"), "OSCFile", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCFile(); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCFile const &o){ return new scenarioengine::OSCFile(o); } ) );
		cl.def_readwrite("filepath", &scenarioengine::OSCFile::filepath);
		cl.def("Print", (void (scenarioengine::OSCFile::*)()) &scenarioengine::OSCFile::Print, "C++: scenarioengine::OSCFile::Print() --> void");
		cl.def("assign", (class scenarioengine::OSCFile & (scenarioengine::OSCFile::*)(const class scenarioengine::OSCFile &)) &scenarioengine::OSCFile::operator=, "C++: scenarioengine::OSCFile::operator=(const class scenarioengine::OSCFile &) --> class scenarioengine::OSCFile &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::RoadNetwork file: line:22
		pybind11::class_<scenarioengine::RoadNetwork, std::shared_ptr<scenarioengine::RoadNetwork>> cl(M("scenarioengine"), "RoadNetwork", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::RoadNetwork(); } ) );
		cl.def( pybind11::init( [](scenarioengine::RoadNetwork const &o){ return new scenarioengine::RoadNetwork(o); } ) );
		cl.def_readwrite("logicFile", &scenarioengine::RoadNetwork::logicFile);
		cl.def_readwrite("sceneGraphFile", &scenarioengine::RoadNetwork::sceneGraphFile);
		cl.def("Print", (void (scenarioengine::RoadNetwork::*)()) &scenarioengine::RoadNetwork::Print, "C++: scenarioengine::RoadNetwork::Print() --> void");
		cl.def("assign", (class scenarioengine::RoadNetwork & (scenarioengine::RoadNetwork::*)(const class scenarioengine::RoadNetwork &)) &scenarioengine::RoadNetwork::operator=, "C++: scenarioengine::RoadNetwork::operator=(const class scenarioengine::RoadNetwork &) --> class scenarioengine::RoadNetwork &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // scenarioengine::ControllerPool file: line:35
		pybind11::class_<scenarioengine::ControllerPool, std::shared_ptr<scenarioengine::ControllerPool>> cl(M("scenarioengine"), "ControllerPool", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::ControllerPool(); } ) );
		cl.def( pybind11::init( [](scenarioengine::ControllerPool const &o){ return new scenarioengine::ControllerPool(o); } ) );
		cl.def_readwrite("controller_", &scenarioengine::ControllerPool::controller_);
		cl.def("Clear", (void (scenarioengine::ControllerPool::*)()) &scenarioengine::ControllerPool::Clear, "C++: scenarioengine::ControllerPool::Clear() --> void");
	}
}


// File: unknown/unknown_9.cpp
#include <OSCFile.hpp>
#include <istream>
#include <iterator>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "ScenarioEngine.hpp"
#include "CommonMini.hpp"
#include "ControllerFollowGhost.hpp"
#include "ControllerExternal.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_9(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // scenarioengine::ScenarioReader file: line:74
		pybind11::class_<scenarioengine::ScenarioReader, std::shared_ptr<scenarioengine::ScenarioReader>> cl(M("scenarioengine"), "ScenarioReader", "");
		cl.def( pybind11::init( [](class scenarioengine::Entities * a0, class scenarioengine::Catalogs * a1){ return new scenarioengine::ScenarioReader(a0, a1); } ), "doc" , pybind11::arg("entities"), pybind11::arg("catalogs"));
		cl.def( pybind11::init<class scenarioengine::Entities *, class scenarioengine::Catalogs *, bool>(), pybind11::arg("entities"), pybind11::arg("catalogs"), pybind11::arg("disable_controllers") );

		cl.def_readwrite("controller_", &scenarioengine::ScenarioReader::controller_);
		cl.def_readwrite("parameters", &scenarioengine::ScenarioReader::parameters);
		cl.def("loadOSCFile", (int (scenarioengine::ScenarioReader::*)(const char *)) &scenarioengine::ScenarioReader::loadOSCFile, "C++: scenarioengine::ScenarioReader::loadOSCFile(const char *) --> int", pybind11::arg("path"));
		cl.def("SetGateway", (void (scenarioengine::ScenarioReader::*)(class scenarioengine::ScenarioGateway *)) &scenarioengine::ScenarioReader::SetGateway, "C++: scenarioengine::ScenarioReader::SetGateway(class scenarioengine::ScenarioGateway *) --> void", pybind11::arg("gateway"));
		cl.def("parseRoadNetwork", (void (scenarioengine::ScenarioReader::*)(class scenarioengine::RoadNetwork &)) &scenarioengine::ScenarioReader::parseRoadNetwork, "C++: scenarioengine::ScenarioReader::parseRoadNetwork(class scenarioengine::RoadNetwork &) --> void", pybind11::arg("roadNetwork"));
		cl.def("parseCatalogs", (void (scenarioengine::ScenarioReader::*)()) &scenarioengine::ScenarioReader::parseCatalogs, "C++: scenarioengine::ScenarioReader::parseCatalogs() --> void");
		cl.def("parseGlobalParameterDeclarations", (void (scenarioengine::ScenarioReader::*)()) &scenarioengine::ScenarioReader::parseGlobalParameterDeclarations, "C++: scenarioengine::ScenarioReader::parseGlobalParameterDeclarations() --> void");
		cl.def("parseEntities", (int (scenarioengine::ScenarioReader::*)()) &scenarioengine::ScenarioReader::parseEntities, "C++: scenarioengine::ScenarioReader::parseEntities() --> int");
		cl.def("parseInit", (void (scenarioengine::ScenarioReader::*)(class scenarioengine::Init &)) &scenarioengine::ScenarioReader::parseInit, "C++: scenarioengine::ScenarioReader::parseInit(class scenarioengine::Init &) --> void", pybind11::arg("init"));
		cl.def("parseStoryBoard", (int (scenarioengine::ScenarioReader::*)(class scenarioengine::StoryBoard &)) &scenarioengine::ScenarioReader::parseStoryBoard, "C++: scenarioengine::ScenarioReader::parseStoryBoard(class scenarioengine::StoryBoard &) --> int", pybind11::arg("storyBoard"));
		cl.def("IsLoaded", (bool (scenarioengine::ScenarioReader::*)()) &scenarioengine::ScenarioReader::IsLoaded, "C++: scenarioengine::ScenarioReader::IsLoaded() --> bool");
		cl.def("LoadControllers", (void (scenarioengine::ScenarioReader::*)()) &scenarioengine::ScenarioReader::LoadControllers, "C++: scenarioengine::ScenarioReader::LoadControllers() --> void");
		cl.def("UnloadControllers", (void (scenarioengine::ScenarioReader::*)()) &scenarioengine::ScenarioReader::UnloadControllers, "C++: scenarioengine::ScenarioReader::UnloadControllers() --> void");
	}
	{ // scenarioengine::ScenarioEngine file: line:32
		pybind11::class_<scenarioengine::ScenarioEngine, std::shared_ptr<scenarioengine::ScenarioEngine>> cl(M("scenarioengine"), "ScenarioEngine", "");
		cl.def_readwrite("entities", &scenarioengine::ScenarioEngine::entities);
		cl.def("step", (void (scenarioengine::ScenarioEngine::*)(double)) &scenarioengine::ScenarioEngine::step, "C++: scenarioengine::ScenarioEngine::step(double) --> void", pybind11::arg("deltaSimTime"));
		cl.def("printSimulationTime", (void (scenarioengine::ScenarioEngine::*)()) &scenarioengine::ScenarioEngine::printSimulationTime, "C++: scenarioengine::ScenarioEngine::printSimulationTime() --> void");
		cl.def("prepareOSIGroundTruth", (void (scenarioengine::ScenarioEngine::*)(double)) &scenarioengine::ScenarioEngine::prepareOSIGroundTruth, "C++: scenarioengine::ScenarioEngine::prepareOSIGroundTruth(double) --> void", pybind11::arg("dt"));
		cl.def("defaultController", (void (scenarioengine::ScenarioEngine::*)(class scenarioengine::Object *, double)) &scenarioengine::ScenarioEngine::defaultController, "C++: scenarioengine::ScenarioEngine::defaultController(class scenarioengine::Object *, double) --> void", pybind11::arg("obj"), pybind11::arg("dt"));
		cl.def("ReplaceObjectInTrigger", (void (scenarioengine::ScenarioEngine::*)(class scenarioengine::Trigger *, class scenarioengine::Object *, class scenarioengine::Object *, double)) &scenarioengine::ScenarioEngine::ReplaceObjectInTrigger, "C++: scenarioengine::ScenarioEngine::ReplaceObjectInTrigger(class scenarioengine::Trigger *, class scenarioengine::Object *, class scenarioengine::Object *, double) --> void", pybind11::arg("trigger"), pybind11::arg("obj1"), pybind11::arg("obj2"), pybind11::arg("timeOffset"));
		cl.def("SetupGhost", (void (scenarioengine::ScenarioEngine::*)(class scenarioengine::Object *)) &scenarioengine::ScenarioEngine::SetupGhost, "C++: scenarioengine::ScenarioEngine::SetupGhost(class scenarioengine::Object *) --> void", pybind11::arg("object"));
		cl.def("getScenarioGateway", (class scenarioengine::ScenarioGateway * (scenarioengine::ScenarioEngine::*)()) &scenarioengine::ScenarioEngine::getScenarioGateway, "C++: scenarioengine::ScenarioEngine::getScenarioGateway() --> class scenarioengine::ScenarioGateway *", pybind11::return_value_policy::automatic);
		cl.def("getSimulationTime", (double (scenarioengine::ScenarioEngine::*)()) &scenarioengine::ScenarioEngine::getSimulationTime, "C++: scenarioengine::ScenarioEngine::getSimulationTime() --> double");
		cl.def("GetQuitFlag", (bool (scenarioengine::ScenarioEngine::*)()) &scenarioengine::ScenarioEngine::GetQuitFlag, "C++: scenarioengine::ScenarioEngine::GetQuitFlag() --> bool");
		cl.def("GetScenarioReader", (class scenarioengine::ScenarioReader * (scenarioengine::ScenarioEngine::*)()) &scenarioengine::ScenarioEngine::GetScenarioReader, "C++: scenarioengine::ScenarioEngine::GetScenarioReader() --> class scenarioengine::ScenarioReader *", pybind11::return_value_policy::automatic);
		cl.def("SetHeadstartTime", (void (scenarioengine::ScenarioEngine::*)(double)) &scenarioengine::ScenarioEngine::SetHeadstartTime, "C++: scenarioengine::ScenarioEngine::SetHeadstartTime(double) --> void", pybind11::arg("headstartTime"));
		cl.def("GetHeadstartTime", (double (scenarioengine::ScenarioEngine::*)()) &scenarioengine::ScenarioEngine::GetHeadstartTime, "C++: scenarioengine::ScenarioEngine::GetHeadstartTime() --> double");
		cl.def("SetSimulationTime", (void (scenarioengine::ScenarioEngine::*)(double)) &scenarioengine::ScenarioEngine::SetSimulationTime, "C++: scenarioengine::ScenarioEngine::SetSimulationTime(double) --> void", pybind11::arg("time"));
		cl.def("GetSimulationTimePtr", (double * (scenarioengine::ScenarioEngine::*)()) &scenarioengine::ScenarioEngine::GetSimulationTimePtr, "C++: scenarioengine::ScenarioEngine::GetSimulationTimePtr() --> double *", pybind11::return_value_policy::automatic);
	}
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
void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_6(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_7(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_8(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_9(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(pyscenarioengine, root_module) {
	root_module.doc() = "pyscenarioengine module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	std::vector< std::pair<std::string, std::string> > sub_modules {
		{"", "scenarioengine"},
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule(p.second.c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_unknown_unknown(M);
	bind_unknown_unknown_1(M);
	bind_unknown_unknown_2(M);
	bind_unknown_unknown_3(M);
	bind_unknown_unknown_4(M);
	bind_unknown_unknown_5(M);
	bind_unknown_unknown_6(M);
	bind_unknown_unknown_7(M);
	bind_unknown_unknown_8(M);
	bind_unknown_unknown_9(M);

}

// Source list file: /home/wave/repositories/esmini-pybind11/src/scenarioengine/pyscenarioengine.sources
// pyscenarioengine.cpp
// unknown/unknown.cpp
// unknown/unknown_1.cpp
// unknown/unknown_2.cpp
// unknown/unknown_3.cpp
// unknown/unknown_4.cpp
// unknown/unknown_5.cpp
// unknown/unknown_6.cpp
// unknown/unknown_7.cpp
// unknown/unknown_8.cpp
// unknown/unknown_9.cpp

// Modules list file: /home/wave/repositories/esmini-pybind11/src/scenarioengine/pyscenarioengine.modules
// scenarioengine 

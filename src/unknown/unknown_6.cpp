#include <iterator>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_6(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // roadmanager::LaneSection file: line:592
		pybind11::class_<roadmanager::LaneSection, std::shared_ptr<roadmanager::LaneSection>> cl(M("roadmanager"), "LaneSection", "");
		cl.def( pybind11::init<double>(), pybind11::arg("s") );

		cl.def( pybind11::init( [](roadmanager::LaneSection const &o){ return new roadmanager::LaneSection(o); } ) );
		cl.def("AddLane", (void (roadmanager::LaneSection::*)(class roadmanager::Lane *)) &roadmanager::LaneSection::AddLane, "C++: roadmanager::LaneSection::AddLane(class roadmanager::Lane *) --> void", pybind11::arg("lane"));
		cl.def("GetS", (double (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetS, "C++: roadmanager::LaneSection::GetS() --> double");
		cl.def("GetLaneByIdx", (class roadmanager::Lane * (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneByIdx, "C++: roadmanager::LaneSection::GetLaneByIdx(int) --> class roadmanager::Lane *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetLaneById", (class roadmanager::Lane * (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneById, "C++: roadmanager::LaneSection::GetLaneById(int) --> class roadmanager::Lane *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("GetLaneIdByIdx", (int (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneIdByIdx, "C++: roadmanager::LaneSection::GetLaneIdByIdx(int) --> int", pybind11::arg("idx"));
		cl.def("GetLaneIdxById", (int (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneIdxById, "C++: roadmanager::LaneSection::GetLaneIdxById(int) --> int", pybind11::arg("id"));
		cl.def("IsOSILaneById", (bool (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::IsOSILaneById, "C++: roadmanager::LaneSection::IsOSILaneById(int) --> bool", pybind11::arg("id"));
		cl.def("GetLaneGlobalIdByIdx", (int (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneGlobalIdByIdx, "C++: roadmanager::LaneSection::GetLaneGlobalIdByIdx(int) --> int", pybind11::arg("idx"));
		cl.def("GetLaneGlobalIdById", (int (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetLaneGlobalIdById, "C++: roadmanager::LaneSection::GetLaneGlobalIdById(int) --> int", pybind11::arg("id"));
		cl.def("GetOuterOffset", (double (roadmanager::LaneSection::*)(double, int)) &roadmanager::LaneSection::GetOuterOffset, "C++: roadmanager::LaneSection::GetOuterOffset(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetWidth", (double (roadmanager::LaneSection::*)(double, int)) &roadmanager::LaneSection::GetWidth, "C++: roadmanager::LaneSection::GetWidth(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetClosestLaneIdx", [](roadmanager::LaneSection &o, double const & a0, double const & a1, double & a2, bool const & a3) -> int { return o.GetClosestLaneIdx(a0, a1, a2, a3); }, "", pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("offset"), pybind11::arg("noZeroWidth"));
		cl.def("GetClosestLaneIdx", (int (roadmanager::LaneSection::*)(double, double, double &, bool, int)) &roadmanager::LaneSection::GetClosestLaneIdx, "C++: roadmanager::LaneSection::GetClosestLaneIdx(double, double, double &, bool, int) --> int", pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("offset"), pybind11::arg("noZeroWidth"), pybind11::arg("laneTypeMask"));
		cl.def("GetCenterOffset", (double (roadmanager::LaneSection::*)(double, int)) &roadmanager::LaneSection::GetCenterOffset, "		Get lateral position of lane center, from road reference lane (lane id=0)\n		Example: If lane id 1 is 5 m wide and lane id 2 is 4 m wide, then \n				lane 1 center offset is 5/2 = 2.5 and lane 2 center offset is 5 + 4/2 = 7\n		\n\n distance along the road segment\n		\n\n lane specifier, starting from center -1, -2, ... is on the right side, 1, 2... on the left \n\nC++: roadmanager::LaneSection::GetCenterOffset(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetOuterOffsetHeading", (double (roadmanager::LaneSection::*)(double, int)) &roadmanager::LaneSection::GetOuterOffsetHeading, "C++: roadmanager::LaneSection::GetOuterOffsetHeading(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetCenterOffsetHeading", (double (roadmanager::LaneSection::*)(double, int)) &roadmanager::LaneSection::GetCenterOffsetHeading, "C++: roadmanager::LaneSection::GetCenterOffsetHeading(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetLength", (double (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetLength, "C++: roadmanager::LaneSection::GetLength() --> double");
		cl.def("GetNumberOfLanes", (int (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetNumberOfLanes, "C++: roadmanager::LaneSection::GetNumberOfLanes() --> int");
		cl.def("GetNumberOfDrivingLanes", (int (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetNumberOfDrivingLanes, "C++: roadmanager::LaneSection::GetNumberOfDrivingLanes() --> int");
		cl.def("GetNumberOfDrivingLanesSide", (int (roadmanager::LaneSection::*)(int)) &roadmanager::LaneSection::GetNumberOfDrivingLanesSide, "C++: roadmanager::LaneSection::GetNumberOfDrivingLanesSide(int) --> int", pybind11::arg("side"));
		cl.def("GetNUmberOfLanesRight", (int (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetNUmberOfLanesRight, "C++: roadmanager::LaneSection::GetNUmberOfLanesRight() --> int");
		cl.def("GetNUmberOfLanesLeft", (int (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::GetNUmberOfLanesLeft, "C++: roadmanager::LaneSection::GetNUmberOfLanesLeft() --> int");
		cl.def("SetLength", (void (roadmanager::LaneSection::*)(double)) &roadmanager::LaneSection::SetLength, "C++: roadmanager::LaneSection::SetLength(double) --> void", pybind11::arg("length"));
		cl.def("GetConnectingLaneId", (int (roadmanager::LaneSection::*)(int, roadmanager::LinkType)) &roadmanager::LaneSection::GetConnectingLaneId, "C++: roadmanager::LaneSection::GetConnectingLaneId(int, roadmanager::LinkType) --> int", pybind11::arg("incoming_lane_id"), pybind11::arg("link_type"));
		cl.def("GetWidthBetweenLanes", (double (roadmanager::LaneSection::*)(int, int, double)) &roadmanager::LaneSection::GetWidthBetweenLanes, "C++: roadmanager::LaneSection::GetWidthBetweenLanes(int, int, double) --> double", pybind11::arg("lane_id1"), pybind11::arg("lane_id2"), pybind11::arg("s"));
		cl.def("GetOffsetBetweenLanes", (double (roadmanager::LaneSection::*)(int, int, double)) &roadmanager::LaneSection::GetOffsetBetweenLanes, "C++: roadmanager::LaneSection::GetOffsetBetweenLanes(int, int, double) --> double", pybind11::arg("lane_id1"), pybind11::arg("lane_id2"), pybind11::arg("s"));
		cl.def("Print", (void (roadmanager::LaneSection::*)()) &roadmanager::LaneSection::Print, "C++: roadmanager::LaneSection::Print() --> void");
	}
	// roadmanager::ContactPointType file: line:637
	pybind11::enum_<roadmanager::ContactPointType>(M("roadmanager"), "ContactPointType", pybind11::arithmetic(), "")
		.value("CONTACT_POINT_UNKNOWN", roadmanager::CONTACT_POINT_UNKNOWN)
		.value("CONTACT_POINT_START", roadmanager::CONTACT_POINT_START)
		.value("CONTACT_POINT_END", roadmanager::CONTACT_POINT_END)
		.value("CONTACT_POINT_NONE", roadmanager::CONTACT_POINT_NONE)
		.export_values();

;

	{ // roadmanager::RoadLink file: line:645
		pybind11::class_<roadmanager::RoadLink, std::shared_ptr<roadmanager::RoadLink>> cl(M("roadmanager"), "RoadLink", "");
		cl.def( pybind11::init( [](){ return new roadmanager::RoadLink(); } ) );
		cl.def( pybind11::init<roadmanager::LinkType, roadmanager::RoadLink::ElementType, int, enum roadmanager::ContactPointType>(), pybind11::arg("type"), pybind11::arg("element_type"), pybind11::arg("element_id"), pybind11::arg("contact_point_type") );

		cl.def( pybind11::init<roadmanager::LinkType, class pugi::xml_node>(), pybind11::arg("type"), pybind11::arg("node") );

		cl.def("GetElementId", (int (roadmanager::RoadLink::*)()) &roadmanager::RoadLink::GetElementId, "C++: roadmanager::RoadLink::GetElementId() --> int");
		cl.def("GetType", (roadmanager::LinkType (roadmanager::RoadLink::*)()) &roadmanager::RoadLink::GetType, "C++: roadmanager::RoadLink::GetType() --> roadmanager::LinkType");
		cl.def("GetElementType", (roadmanager::RoadLink::ElementType (roadmanager::RoadLink::*)()) &roadmanager::RoadLink::GetElementType, "C++: roadmanager::RoadLink::GetElementType() --> roadmanager::RoadLink::ElementType");
		cl.def("GetContactPointType", (enum roadmanager::ContactPointType (roadmanager::RoadLink::*)()) &roadmanager::RoadLink::GetContactPointType, "C++: roadmanager::RoadLink::GetContactPointType() --> enum roadmanager::ContactPointType");
		cl.def("Print", (void (roadmanager::RoadLink::*)()) &roadmanager::RoadLink::Print, "C++: roadmanager::RoadLink::Print() --> void");
	}
	{ // roadmanager::LaneInfo file: line:674
		pybind11::class_<roadmanager::LaneInfo, std::shared_ptr<roadmanager::LaneInfo>> cl(M("roadmanager"), "LaneInfo", "");
		cl.def( pybind11::init( [](){ return new roadmanager::LaneInfo(); } ) );
		cl.def_readwrite("lane_section_idx_", &roadmanager::LaneInfo::lane_section_idx_);
		cl.def_readwrite("lane_id_", &roadmanager::LaneInfo::lane_id_);
	}
	// roadmanager::RoadType file: line:680
	pybind11::enum_<roadmanager::RoadType>(M("roadmanager"), "RoadType", pybind11::arithmetic(), "")
		.value("ROADTYPE_UNKNOWN", roadmanager::ROADTYPE_UNKNOWN)
		.value("ROADTYPE_RURAL", roadmanager::ROADTYPE_RURAL)
		.value("ROADTYPE_MOTORWAY", roadmanager::ROADTYPE_MOTORWAY)
		.value("ROADTYPE_TOWN", roadmanager::ROADTYPE_TOWN)
		.value("ROADTYPE_LOWSPEED", roadmanager::ROADTYPE_LOWSPEED)
		.value("ROADTYPE_PEDESTRIAN", roadmanager::ROADTYPE_PEDESTRIAN)
		.value("ROADTYPE_BICYCLE", roadmanager::ROADTYPE_BICYCLE)
		.export_values();

;

	{ // roadmanager::Signal file: line:698
		pybind11::class_<roadmanager::Signal, std::shared_ptr<roadmanager::Signal>> cl(M("roadmanager"), "Signal", "");
		cl.def( pybind11::init<double, double, int, std::string, bool, enum roadmanager::Signal::Orientation, double, std::string, enum roadmanager::Signal::Type, enum roadmanager::Signal::SubType, double, std::string, double, double, std::string, double, double, double>(), pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("id"), pybind11::arg("name"), pybind11::arg("dynamic"), pybind11::arg("orientation"), pybind11::arg("z_offset"), pybind11::arg("country"), pybind11::arg("type"), pybind11::arg("sub_type"), pybind11::arg("value"), pybind11::arg("unit"), pybind11::arg("height"), pybind11::arg("width"), pybind11::arg("text"), pybind11::arg("h_offset"), pybind11::arg("pitch"), pybind11::arg("roll") );

		cl.def( pybind11::init( [](roadmanager::Signal const &o){ return new roadmanager::Signal(o); } ) );

		pybind11::enum_<roadmanager::Signal::Orientation>(cl, "Orientation", pybind11::arithmetic(), "")
			.value("POSITIVE", roadmanager::Signal::POSITIVE)
			.value("NEGATIVE", roadmanager::Signal::NEGATIVE)
			.value("NONE", roadmanager::Signal::NONE)
			.export_values();


		pybind11::enum_<roadmanager::Signal::Type>(cl, "Type", pybind11::arithmetic(), "")
			.value("NONETYPE", roadmanager::Signal::NONETYPE)
			.value("T1000001", roadmanager::Signal::T1000001)
			.value("T1000002", roadmanager::Signal::T1000002)
			.value("T1000007", roadmanager::Signal::T1000007)
			.value("T1000008", roadmanager::Signal::T1000008)
			.value("T1000009", roadmanager::Signal::T1000009)
			.value("T1000010", roadmanager::Signal::T1000010)
			.value("T1000011", roadmanager::Signal::T1000011)
			.value("T1000012", roadmanager::Signal::T1000012)
			.value("T1000013", roadmanager::Signal::T1000013)
			.value("T1000014", roadmanager::Signal::T1000014)
			.value("T1000015", roadmanager::Signal::T1000015)
			.export_values();


		pybind11::enum_<roadmanager::Signal::SubType>(cl, "SubType", pybind11::arithmetic(), "")
			.value("NONESUBTYPE", roadmanager::Signal::NONESUBTYPE)
			.value("SUBT10", roadmanager::Signal::SUBT10)
			.value("SUBT20", roadmanager::Signal::SUBT20)
			.value("SUBT30", roadmanager::Signal::SUBT30)
			.value("SUBT40", roadmanager::Signal::SUBT40)
			.value("SUBT50", roadmanager::Signal::SUBT50)
			.export_values();

		cl.def("GetName", (std::string (roadmanager::Signal::*)()) &roadmanager::Signal::GetName, "C++: roadmanager::Signal::GetName() --> std::string");
		cl.def("GetId", (int (roadmanager::Signal::*)()) &roadmanager::Signal::GetId, "C++: roadmanager::Signal::GetId() --> int");
		cl.def("GetS", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetS, "C++: roadmanager::Signal::GetS() --> double");
		cl.def("GetT", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetT, "C++: roadmanager::Signal::GetT() --> double");
		cl.def("SetLength", (void (roadmanager::Signal::*)(double)) &roadmanager::Signal::SetLength, "C++: roadmanager::Signal::SetLength(double) --> void", pybind11::arg("length"));
		cl.def("GetLength", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetLength, "C++: roadmanager::Signal::GetLength() --> double");
		cl.def("GetHOffset", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetHOffset, "C++: roadmanager::Signal::GetHOffset() --> double");
		cl.def("GetZOffset", (double (roadmanager::Signal::*)()) &roadmanager::Signal::GetZOffset, "C++: roadmanager::Signal::GetZOffset() --> double");
		cl.def("GetOrientation", (enum roadmanager::Signal::Orientation (roadmanager::Signal::*)()) &roadmanager::Signal::GetOrientation, "C++: roadmanager::Signal::GetOrientation() --> enum roadmanager::Signal::Orientation");
	}
	{ // roadmanager::Object file: line:772
		pybind11::class_<roadmanager::Object, std::shared_ptr<roadmanager::Object>> cl(M("roadmanager"), "Object", "");
		cl.def( pybind11::init<double, double, int, std::string, enum roadmanager::Object::Orientation, double, std::string, double, double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("id"), pybind11::arg("name"), pybind11::arg("orientation"), pybind11::arg("z_offset"), pybind11::arg("type"), pybind11::arg("length"), pybind11::arg("height"), pybind11::arg("width"), pybind11::arg("heading"), pybind11::arg("pitch"), pybind11::arg("roll") );

		cl.def( pybind11::init( [](roadmanager::Object const &o){ return new roadmanager::Object(o); } ) );

		pybind11::enum_<roadmanager::Object::Orientation>(cl, "Orientation", pybind11::arithmetic(), "")
			.value("POSITIVE", roadmanager::Object::POSITIVE)
			.value("NEGATIVE", roadmanager::Object::NEGATIVE)
			.value("NONE", roadmanager::Object::NONE)
			.export_values();

		cl.def("GetName", (std::string (roadmanager::Object::*)()) &roadmanager::Object::GetName, "C++: roadmanager::Object::GetName() --> std::string");
		cl.def("GetS", (double (roadmanager::Object::*)()) &roadmanager::Object::GetS, "C++: roadmanager::Object::GetS() --> double");
		cl.def("GetT", (double (roadmanager::Object::*)()) &roadmanager::Object::GetT, "C++: roadmanager::Object::GetT() --> double");
		cl.def("GetHOffset", (double (roadmanager::Object::*)()) &roadmanager::Object::GetHOffset, "C++: roadmanager::Object::GetHOffset() --> double");
		cl.def("GetZOffset", (double (roadmanager::Object::*)()) &roadmanager::Object::GetZOffset, "C++: roadmanager::Object::GetZOffset() --> double");
		cl.def("GetHeight", (double (roadmanager::Object::*)()) &roadmanager::Object::GetHeight, "C++: roadmanager::Object::GetHeight() --> double");
		cl.def("GetOrientation", (enum roadmanager::Object::Orientation (roadmanager::Object::*)()) &roadmanager::Object::GetOrientation, "C++: roadmanager::Object::GetOrientation() --> enum roadmanager::Object::Orientation");
	}
	{ // roadmanager::Road file: line:811
		pybind11::class_<roadmanager::Road, std::shared_ptr<roadmanager::Road>> cl(M("roadmanager"), "Road", "");
		cl.def( pybind11::init<int, std::string>(), pybind11::arg("id"), pybind11::arg("name") );

		cl.def( pybind11::init( [](roadmanager::Road const &o){ return new roadmanager::Road(o); } ) );
		cl.def("Print", (void (roadmanager::Road::*)()) &roadmanager::Road::Print, "C++: roadmanager::Road::Print() --> void");
		cl.def("SetId", (void (roadmanager::Road::*)(int)) &roadmanager::Road::SetId, "C++: roadmanager::Road::SetId(int) --> void", pybind11::arg("id"));
		cl.def("GetId", (int (roadmanager::Road::*)()) &roadmanager::Road::GetId, "C++: roadmanager::Road::GetId() --> int");
		cl.def("SetName", (void (roadmanager::Road::*)(std::string)) &roadmanager::Road::SetName, "C++: roadmanager::Road::SetName(std::string) --> void", pybind11::arg("name"));
		cl.def("GetGeometry", (class roadmanager::Geometry * (roadmanager::Road::*)(int)) &roadmanager::Road::GetGeometry, "C++: roadmanager::Road::GetGeometry(int) --> class roadmanager::Geometry *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumberOfGeometries", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfGeometries, "C++: roadmanager::Road::GetNumberOfGeometries() --> int");
		cl.def("GetLaneSectionByIdx", (class roadmanager::LaneSection * (roadmanager::Road::*)(int)) &roadmanager::Road::GetLaneSectionByIdx, "		Retrieve the lanesection specified by vector element index (idx)\n		useful for iterating over all available lane sections, e.g:\n		for (int i = 0; i < road->GetNumberOfLaneSections(); i++)\n		{\n			int n_lanes = road->GetLaneSectionByIdx(i)->GetNumberOfLanes();\n		...\n		\n\n index into the vector of lane sections\n\nC++: roadmanager::Road::GetLaneSectionByIdx(int) --> class roadmanager::LaneSection *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetLaneSectionIdxByS", [](roadmanager::Road &o, double const & a0) -> int { return o.GetLaneSectionIdxByS(a0); }, "", pybind11::arg("s"));
		cl.def("GetLaneSectionIdxByS", (int (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetLaneSectionIdxByS, "		Retrieve the lanesection index at specified s-value\n		\n\n distance along the road segment\n\nC++: roadmanager::Road::GetLaneSectionIdxByS(double, int) --> int", pybind11::arg("s"), pybind11::arg("start_at"));
		cl.def("GetLaneSectionByS", [](roadmanager::Road &o, double const & a0) -> roadmanager::LaneSection * { return o.GetLaneSectionByS(a0); }, "", pybind11::return_value_policy::automatic, pybind11::arg("s"));
		cl.def("GetLaneSectionByS", (class roadmanager::LaneSection * (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetLaneSectionByS, "		Retrieve the lanesection at specified s-value\n		\n\n distance along the road segment\n\nC++: roadmanager::Road::GetLaneSectionByS(double, int) --> class roadmanager::LaneSection *", pybind11::return_value_policy::automatic, pybind11::arg("s"), pybind11::arg("start_at"));
		cl.def("GetCenterOffset", (double (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetCenterOffset, "		Get lateral position of lane center, from road reference lane (lane id=0)\n		Example: If lane id 1 is 5 m wide and lane id 2 is 4 m wide, then\n		lane 1 center offset is 5/2 = 2.5 and lane 2 center offset is 5 + 4/2 = 7\n		\n\n distance along the road segment\n		\n\n lane specifier, starting from center -1, -2, ... is on the right side, 1, 2... on the left\n\nC++: roadmanager::Road::GetCenterOffset(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetLaneInfoByS", [](roadmanager::Road &o, double const & a0, int const & a1, int const & a2) -> roadmanager::LaneInfo { return o.GetLaneInfoByS(a0, a1, a2); }, "", pybind11::arg("s"), pybind11::arg("start_lane_link_idx"), pybind11::arg("start_lane_id"));
		cl.def("GetLaneInfoByS", (struct roadmanager::LaneInfo (roadmanager::Road::*)(double, int, int, int)) &roadmanager::Road::GetLaneInfoByS, "C++: roadmanager::Road::GetLaneInfoByS(double, int, int, int) --> struct roadmanager::LaneInfo", pybind11::arg("s"), pybind11::arg("start_lane_link_idx"), pybind11::arg("start_lane_id"), pybind11::arg("laneTypeMask"));
		cl.def("GetLaneWidthByS", (double (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetLaneWidthByS, "C++: roadmanager::Road::GetLaneWidthByS(double, int) --> double", pybind11::arg("s"), pybind11::arg("lane_id"));
		cl.def("GetSpeedByS", (double (roadmanager::Road::*)(double)) &roadmanager::Road::GetSpeedByS, "C++: roadmanager::Road::GetSpeedByS(double) --> double", pybind11::arg("s"));
		cl.def("GetZAndPitchByS", (bool (roadmanager::Road::*)(double, double *, double *, int *)) &roadmanager::Road::GetZAndPitchByS, "C++: roadmanager::Road::GetZAndPitchByS(double, double *, double *, int *) --> bool", pybind11::arg("s"), pybind11::arg("z"), pybind11::arg("pitch"), pybind11::arg("index"));
		cl.def("UpdateZAndRollBySAndT", (bool (roadmanager::Road::*)(double, double, double *, double *, int *)) &roadmanager::Road::UpdateZAndRollBySAndT, "C++: roadmanager::Road::UpdateZAndRollBySAndT(double, double, double *, double *, int *) --> bool", pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("z"), pybind11::arg("roll"), pybind11::arg("index"));
		cl.def("GetNumberOfLaneSections", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfLaneSections, "C++: roadmanager::Road::GetNumberOfLaneSections() --> int");
		cl.def("GetName", (std::string (roadmanager::Road::*)()) &roadmanager::Road::GetName, "C++: roadmanager::Road::GetName() --> std::string");
		cl.def("SetLength", (void (roadmanager::Road::*)(double)) &roadmanager::Road::SetLength, "C++: roadmanager::Road::SetLength(double) --> void", pybind11::arg("length"));
		cl.def("GetLength", (double (roadmanager::Road::*)()) &roadmanager::Road::GetLength, "C++: roadmanager::Road::GetLength() --> double");
		cl.def("SetJunction", (void (roadmanager::Road::*)(int)) &roadmanager::Road::SetJunction, "C++: roadmanager::Road::SetJunction(int) --> void", pybind11::arg("junction"));
		cl.def("GetJunction", (int (roadmanager::Road::*)()) &roadmanager::Road::GetJunction, "C++: roadmanager::Road::GetJunction() --> int");
		cl.def("AddLink", (void (roadmanager::Road::*)(class roadmanager::RoadLink *)) &roadmanager::Road::AddLink, "C++: roadmanager::Road::AddLink(class roadmanager::RoadLink *) --> void", pybind11::arg("link"));
		cl.def("GetLink", (class roadmanager::RoadLink * (roadmanager::Road::*)(roadmanager::LinkType)) &roadmanager::Road::GetLink, "C++: roadmanager::Road::GetLink(roadmanager::LinkType) --> class roadmanager::RoadLink *", pybind11::return_value_policy::automatic, pybind11::arg("type"));
		cl.def("AddLine", (void (roadmanager::Road::*)(class roadmanager::Line *)) &roadmanager::Road::AddLine, "C++: roadmanager::Road::AddLine(class roadmanager::Line *) --> void", pybind11::arg("line"));
		cl.def("AddArc", (void (roadmanager::Road::*)(class roadmanager::Arc *)) &roadmanager::Road::AddArc, "C++: roadmanager::Road::AddArc(class roadmanager::Arc *) --> void", pybind11::arg("arc"));
		cl.def("AddSpiral", (void (roadmanager::Road::*)(class roadmanager::Spiral *)) &roadmanager::Road::AddSpiral, "C++: roadmanager::Road::AddSpiral(class roadmanager::Spiral *) --> void", pybind11::arg("spiral"));
		cl.def("AddPoly3", (void (roadmanager::Road::*)(class roadmanager::Poly3 *)) &roadmanager::Road::AddPoly3, "C++: roadmanager::Road::AddPoly3(class roadmanager::Poly3 *) --> void", pybind11::arg("poly3"));
		cl.def("AddParamPoly3", (void (roadmanager::Road::*)(class roadmanager::ParamPoly3 *)) &roadmanager::Road::AddParamPoly3, "C++: roadmanager::Road::AddParamPoly3(class roadmanager::ParamPoly3 *) --> void", pybind11::arg("param_poly3"));
		cl.def("AddElevation", (void (roadmanager::Road::*)(class roadmanager::Elevation *)) &roadmanager::Road::AddElevation, "C++: roadmanager::Road::AddElevation(class roadmanager::Elevation *) --> void", pybind11::arg("elevation"));
		cl.def("AddSuperElevation", (void (roadmanager::Road::*)(class roadmanager::Elevation *)) &roadmanager::Road::AddSuperElevation, "C++: roadmanager::Road::AddSuperElevation(class roadmanager::Elevation *) --> void", pybind11::arg("super_elevation"));
		cl.def("AddLaneSection", (void (roadmanager::Road::*)(class roadmanager::LaneSection *)) &roadmanager::Road::AddLaneSection, "C++: roadmanager::Road::AddLaneSection(class roadmanager::LaneSection *) --> void", pybind11::arg("lane_section"));
		cl.def("AddLaneOffset", (void (roadmanager::Road::*)(class roadmanager::LaneOffset *)) &roadmanager::Road::AddLaneOffset, "C++: roadmanager::Road::AddLaneOffset(class roadmanager::LaneOffset *) --> void", pybind11::arg("lane_offset"));
		cl.def("AddSignal", (void (roadmanager::Road::*)(class roadmanager::Signal *)) &roadmanager::Road::AddSignal, "C++: roadmanager::Road::AddSignal(class roadmanager::Signal *) --> void", pybind11::arg("signal"));
		cl.def("AddObject", (void (roadmanager::Road::*)(class roadmanager::Object *)) &roadmanager::Road::AddObject, "C++: roadmanager::Road::AddObject(class roadmanager::Object *) --> void", pybind11::arg("object"));
		cl.def("GetElevation", (class roadmanager::Elevation * (roadmanager::Road::*)(int)) &roadmanager::Road::GetElevation, "C++: roadmanager::Road::GetElevation(int) --> class roadmanager::Elevation *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetSuperElevation", (class roadmanager::Elevation * (roadmanager::Road::*)(int)) &roadmanager::Road::GetSuperElevation, "C++: roadmanager::Road::GetSuperElevation(int) --> class roadmanager::Elevation *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumberOfSignals", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfSignals, "C++: roadmanager::Road::GetNumberOfSignals() --> int");
		cl.def("GetSignal", (class roadmanager::Signal * (roadmanager::Road::*)(int)) &roadmanager::Road::GetSignal, "C++: roadmanager::Road::GetSignal(int) --> class roadmanager::Signal *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumberOfObjects", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfObjects, "C++: roadmanager::Road::GetNumberOfObjects() --> int");
		cl.def("GetObject", (class roadmanager::Object * (roadmanager::Road::*)(int)) &roadmanager::Road::GetObject, "C++: roadmanager::Road::GetObject(int) --> class roadmanager::Object *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumberOfElevations", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfElevations, "C++: roadmanager::Road::GetNumberOfElevations() --> int");
		cl.def("GetNumberOfSuperElevations", (int (roadmanager::Road::*)()) &roadmanager::Road::GetNumberOfSuperElevations, "C++: roadmanager::Road::GetNumberOfSuperElevations() --> int");
		cl.def("GetLaneOffset", (double (roadmanager::Road::*)(double)) &roadmanager::Road::GetLaneOffset, "C++: roadmanager::Road::GetLaneOffset(double) --> double", pybind11::arg("s"));
		cl.def("GetLaneOffsetPrim", (double (roadmanager::Road::*)(double)) &roadmanager::Road::GetLaneOffsetPrim, "C++: roadmanager::Road::GetLaneOffsetPrim(double) --> double", pybind11::arg("s"));
		cl.def("GetNumberOfLanes", (int (roadmanager::Road::*)(double)) &roadmanager::Road::GetNumberOfLanes, "C++: roadmanager::Road::GetNumberOfLanes(double) --> int", pybind11::arg("s"));
		cl.def("GetNumberOfDrivingLanes", (int (roadmanager::Road::*)(double)) &roadmanager::Road::GetNumberOfDrivingLanes, "C++: roadmanager::Road::GetNumberOfDrivingLanes(double) --> int", pybind11::arg("s"));
		cl.def("GetDrivingLaneByIdx", (class roadmanager::Lane * (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetDrivingLaneByIdx, "C++: roadmanager::Road::GetDrivingLaneByIdx(double, int) --> class roadmanager::Lane *", pybind11::return_value_policy::automatic, pybind11::arg("s"), pybind11::arg("idx"));
		cl.def("GetNumberOfDrivingLanesSide", (int (roadmanager::Road::*)(double, int)) &roadmanager::Road::GetNumberOfDrivingLanesSide, "C++: roadmanager::Road::GetNumberOfDrivingLanesSide(double, int) --> int", pybind11::arg("s"), pybind11::arg("side"));
		cl.def("GetWidth", [](roadmanager::Road &o, double const & a0, int const & a1) -> double { return o.GetWidth(a0, a1); }, "", pybind11::arg("s"), pybind11::arg("side"));
		cl.def("GetWidth", (double (roadmanager::Road::*)(double, int, int)) &roadmanager::Road::GetWidth, "<summary>Get width of road</summary>\n <param name=\"s\">Longitudinal position/distance along the road</param>\n <param name=\"side\">Side of the road: -1=right, 1=left, 0=both</param>\n <param name=\"laneTypeMask\">Bitmask specifying what lane types to consider - see Lane::LaneType</param>\n <returns>Width (m)</returns>\n\nC++: roadmanager::Road::GetWidth(double, int, int) --> double", pybind11::arg("s"), pybind11::arg("side"), pybind11::arg("laneTypeMask"));
	}
}

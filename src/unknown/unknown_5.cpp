#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>
#include <vector>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // roadmanager::LaneLink file: line:284
		pybind11::class_<roadmanager::LaneLink, std::shared_ptr<roadmanager::LaneLink>> cl(M("roadmanager"), "LaneLink", "");
		cl.def( pybind11::init<roadmanager::LinkType, int>(), pybind11::arg("type"), pybind11::arg("id") );

		cl.def("GetType", (roadmanager::LinkType (roadmanager::LaneLink::*)()) &roadmanager::LaneLink::GetType, "C++: roadmanager::LaneLink::GetType() --> roadmanager::LinkType");
		cl.def("GetId", (int (roadmanager::LaneLink::*)()) &roadmanager::LaneLink::GetId, "C++: roadmanager::LaneLink::GetId() --> int");
		cl.def("Print", (void (roadmanager::LaneLink::*)()) &roadmanager::LaneLink::Print, "C++: roadmanager::LaneLink::Print() --> void");
	}
	{ // roadmanager::LaneWidth file: line:298
		pybind11::class_<roadmanager::LaneWidth, std::shared_ptr<roadmanager::LaneWidth>> cl(M("roadmanager"), "LaneWidth", "");
		cl.def( pybind11::init<double, double, double, double, double>(), pybind11::arg("s_offset"), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d") );

		cl.def_readwrite("poly3_", &roadmanager::LaneWidth::poly3_);
		cl.def("GetSOffset", (double (roadmanager::LaneWidth::*)()) &roadmanager::LaneWidth::GetSOffset, "C++: roadmanager::LaneWidth::GetSOffset() --> double");
		cl.def("Print", (void (roadmanager::LaneWidth::*)()) &roadmanager::LaneWidth::Print, "C++: roadmanager::LaneWidth::Print() --> void");
	}
	{ // roadmanager::LaneBoundaryOSI file: line:315
		pybind11::class_<roadmanager::LaneBoundaryOSI, std::shared_ptr<roadmanager::LaneBoundaryOSI>> cl(M("roadmanager"), "LaneBoundaryOSI", "");
		cl.def( pybind11::init<int>(), pybind11::arg("gbid") );

		cl.def_readwrite("osi_points_", &roadmanager::LaneBoundaryOSI::osi_points_);
		cl.def("SetGlobalId", (void (roadmanager::LaneBoundaryOSI::*)()) &roadmanager::LaneBoundaryOSI::SetGlobalId, "C++: roadmanager::LaneBoundaryOSI::SetGlobalId() --> void");
		cl.def("GetGlobalId", (int (roadmanager::LaneBoundaryOSI::*)()) &roadmanager::LaneBoundaryOSI::GetGlobalId, "C++: roadmanager::LaneBoundaryOSI::GetGlobalId() --> int");
		cl.def("GetOSIPoints", (class roadmanager::OSIPoints * (roadmanager::LaneBoundaryOSI::*)()) &roadmanager::LaneBoundaryOSI::GetOSIPoints, "C++: roadmanager::LaneBoundaryOSI::GetOSIPoints() --> class roadmanager::OSIPoints *", pybind11::return_value_policy::automatic);
	}
	{ // roadmanager::RoadMarkInfo file: line:328
		pybind11::class_<roadmanager::RoadMarkInfo, std::shared_ptr<roadmanager::RoadMarkInfo>> cl(M("roadmanager"), "RoadMarkInfo", "");
		cl.def( pybind11::init( [](){ return new roadmanager::RoadMarkInfo(); } ) );
		cl.def_readwrite("roadmark_idx_", &roadmanager::RoadMarkInfo::roadmark_idx_);
		cl.def_readwrite("roadmarkline_idx_", &roadmanager::RoadMarkInfo::roadmarkline_idx_);
	}
	{ // roadmanager::LaneRoadMarkTypeLine file: line:334
		pybind11::class_<roadmanager::LaneRoadMarkTypeLine, std::shared_ptr<roadmanager::LaneRoadMarkTypeLine>> cl(M("roadmanager"), "LaneRoadMarkTypeLine", "");
		cl.def( pybind11::init<double, double, double, double, enum roadmanager::LaneRoadMarkTypeLine::RoadMarkTypeLineRule, double>(), pybind11::arg("length"), pybind11::arg("space"), pybind11::arg("t_offset"), pybind11::arg("s_offset"), pybind11::arg("rule"), pybind11::arg("width") );


		pybind11::enum_<roadmanager::LaneRoadMarkTypeLine::RoadMarkTypeLineRule>(cl, "RoadMarkTypeLineRule", pybind11::arithmetic(), "")
			.value("NO_PASSING", roadmanager::LaneRoadMarkTypeLine::NO_PASSING)
			.value("CAUTION", roadmanager::LaneRoadMarkTypeLine::CAUTION)
			.value("NONE", roadmanager::LaneRoadMarkTypeLine::NONE)
			.export_values();

		cl.def_readwrite("osi_points_", &roadmanager::LaneRoadMarkTypeLine::osi_points_);
		cl.def("GetSOffset", (double (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetSOffset, "C++: roadmanager::LaneRoadMarkTypeLine::GetSOffset() --> double");
		cl.def("GetTOffset", (double (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetTOffset, "C++: roadmanager::LaneRoadMarkTypeLine::GetTOffset() --> double");
		cl.def("GetLength", (double (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetLength, "C++: roadmanager::LaneRoadMarkTypeLine::GetLength() --> double");
		cl.def("GetSpace", (double (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetSpace, "C++: roadmanager::LaneRoadMarkTypeLine::GetSpace() --> double");
		cl.def("GetWidth", (double (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetWidth, "C++: roadmanager::LaneRoadMarkTypeLine::GetWidth() --> double");
		cl.def("GetOSIPoints", (class roadmanager::OSIPoints (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetOSIPoints, "C++: roadmanager::LaneRoadMarkTypeLine::GetOSIPoints() --> class roadmanager::OSIPoints");
		cl.def("SetGlobalId", (void (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::SetGlobalId, "C++: roadmanager::LaneRoadMarkTypeLine::SetGlobalId() --> void");
		cl.def("GetGlobalId", (int (roadmanager::LaneRoadMarkTypeLine::*)()) &roadmanager::LaneRoadMarkTypeLine::GetGlobalId, "C++: roadmanager::LaneRoadMarkTypeLine::GetGlobalId() --> int");
	}
	{ // roadmanager::LaneRoadMarkType file: line:367
		pybind11::class_<roadmanager::LaneRoadMarkType, std::shared_ptr<roadmanager::LaneRoadMarkType>> cl(M("roadmanager"), "LaneRoadMarkType", "");
		cl.def( pybind11::init<std::string, double>(), pybind11::arg("name"), pybind11::arg("width") );

		cl.def( pybind11::init( [](roadmanager::LaneRoadMarkType const &o){ return new roadmanager::LaneRoadMarkType(o); } ) );
		cl.def("AddLine", (void (roadmanager::LaneRoadMarkType::*)(class roadmanager::LaneRoadMarkTypeLine *)) &roadmanager::LaneRoadMarkType::AddLine, "C++: roadmanager::LaneRoadMarkType::AddLine(class roadmanager::LaneRoadMarkTypeLine *) --> void", pybind11::arg("lane_roadMarkTypeLine"));
		cl.def("GetName", (std::string (roadmanager::LaneRoadMarkType::*)()) &roadmanager::LaneRoadMarkType::GetName, "C++: roadmanager::LaneRoadMarkType::GetName() --> std::string");
		cl.def("GetWidth", (double (roadmanager::LaneRoadMarkType::*)()) &roadmanager::LaneRoadMarkType::GetWidth, "C++: roadmanager::LaneRoadMarkType::GetWidth() --> double");
		cl.def("GetLaneRoadMarkTypeLineByIdx", (class roadmanager::LaneRoadMarkTypeLine * (roadmanager::LaneRoadMarkType::*)(int)) &roadmanager::LaneRoadMarkType::GetLaneRoadMarkTypeLineByIdx, "C++: roadmanager::LaneRoadMarkType::GetLaneRoadMarkTypeLineByIdx(int) --> class roadmanager::LaneRoadMarkTypeLine *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumberOfRoadMarkTypeLines", (int (roadmanager::LaneRoadMarkType::*)()) &roadmanager::LaneRoadMarkType::GetNumberOfRoadMarkTypeLines, "C++: roadmanager::LaneRoadMarkType::GetNumberOfRoadMarkTypeLines() --> int");
		cl.def("Print", (void (roadmanager::LaneRoadMarkType::*)()) &roadmanager::LaneRoadMarkType::Print, "C++: roadmanager::LaneRoadMarkType::Print() --> void");
	}
	{ // roadmanager::LaneRoadMark file: line:385
		pybind11::class_<roadmanager::LaneRoadMark, std::shared_ptr<roadmanager::LaneRoadMark>> cl(M("roadmanager"), "LaneRoadMark", "");
		cl.def( pybind11::init<double, enum roadmanager::LaneRoadMark::RoadMarkType, enum roadmanager::LaneRoadMark::RoadMarkWeight, enum roadmanager::LaneRoadMark::RoadMarkColor, enum roadmanager::LaneRoadMark::RoadMarkMaterial, enum roadmanager::LaneRoadMark::RoadMarkLaneChange, double, double>(), pybind11::arg("s_offset"), pybind11::arg("type"), pybind11::arg("weight"), pybind11::arg("color"), pybind11::arg("material"), pybind11::arg("lane_change"), pybind11::arg("width"), pybind11::arg("height") );

		cl.def( pybind11::init( [](roadmanager::LaneRoadMark const &o){ return new roadmanager::LaneRoadMark(o); } ) );

		pybind11::enum_<roadmanager::LaneRoadMark::RoadMarkType>(cl, "RoadMarkType", pybind11::arithmetic(), "")
			.value("NONE_TYPE", roadmanager::LaneRoadMark::NONE_TYPE)
			.value("SOLID", roadmanager::LaneRoadMark::SOLID)
			.value("BROKEN", roadmanager::LaneRoadMark::BROKEN)
			.value("SOLID_SOLID", roadmanager::LaneRoadMark::SOLID_SOLID)
			.value("SOLID_BROKEN", roadmanager::LaneRoadMark::SOLID_BROKEN)
			.value("BROKEN_SOLID", roadmanager::LaneRoadMark::BROKEN_SOLID)
			.value("BROKEN_BROKEN", roadmanager::LaneRoadMark::BROKEN_BROKEN)
			.value("BOTTS_DOTS", roadmanager::LaneRoadMark::BOTTS_DOTS)
			.value("GRASS", roadmanager::LaneRoadMark::GRASS)
			.value("CURB", roadmanager::LaneRoadMark::CURB)
			.export_values();


		pybind11::enum_<roadmanager::LaneRoadMark::RoadMarkWeight>(cl, "RoadMarkWeight", pybind11::arithmetic(), "")
			.value("STANDARD", roadmanager::LaneRoadMark::STANDARD)
			.value("BOLD", roadmanager::LaneRoadMark::BOLD)
			.export_values();


		pybind11::enum_<roadmanager::LaneRoadMark::RoadMarkColor>(cl, "RoadMarkColor", pybind11::arithmetic(), "")
			.value("STANDARD_COLOR", roadmanager::LaneRoadMark::STANDARD_COLOR)
			.value("BLUE", roadmanager::LaneRoadMark::BLUE)
			.value("GREEN", roadmanager::LaneRoadMark::GREEN)
			.value("RED", roadmanager::LaneRoadMark::RED)
			.value("WHITE", roadmanager::LaneRoadMark::WHITE)
			.value("YELLOW", roadmanager::LaneRoadMark::YELLOW)
			.export_values();


		pybind11::enum_<roadmanager::LaneRoadMark::RoadMarkMaterial>(cl, "RoadMarkMaterial", pybind11::arithmetic(), "")
			.value("STANDARD_MATERIAL", roadmanager::LaneRoadMark::STANDARD_MATERIAL)
			.export_values();


		pybind11::enum_<roadmanager::LaneRoadMark::RoadMarkLaneChange>(cl, "RoadMarkLaneChange", pybind11::arithmetic(), "")
			.value("INCREASE", roadmanager::LaneRoadMark::INCREASE)
			.value("DECREASE", roadmanager::LaneRoadMark::DECREASE)
			.value("BOTH", roadmanager::LaneRoadMark::BOTH)
			.value("NONE_LANECHANGE", roadmanager::LaneRoadMark::NONE_LANECHANGE)
			.export_values();

		cl.def("AddType", (void (roadmanager::LaneRoadMark::*)(class roadmanager::LaneRoadMarkType *)) &roadmanager::LaneRoadMark::AddType, "C++: roadmanager::LaneRoadMark::AddType(class roadmanager::LaneRoadMarkType *) --> void", pybind11::arg("lane_roadMarkType"));
		cl.def("GetSOffset", (double (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetSOffset, "C++: roadmanager::LaneRoadMark::GetSOffset() --> double");
		cl.def("GetWidth", (double (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetWidth, "C++: roadmanager::LaneRoadMark::GetWidth() --> double");
		cl.def("GetHeight", (double (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetHeight, "C++: roadmanager::LaneRoadMark::GetHeight() --> double");
		cl.def("GetType", (enum roadmanager::LaneRoadMark::RoadMarkType (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetType, "C++: roadmanager::LaneRoadMark::GetType() --> enum roadmanager::LaneRoadMark::RoadMarkType");
		cl.def("GetWeight", (enum roadmanager::LaneRoadMark::RoadMarkWeight (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetWeight, "C++: roadmanager::LaneRoadMark::GetWeight() --> enum roadmanager::LaneRoadMark::RoadMarkWeight");
		cl.def("GetColor", (enum roadmanager::LaneRoadMark::RoadMarkColor (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetColor, "C++: roadmanager::LaneRoadMark::GetColor() --> enum roadmanager::LaneRoadMark::RoadMarkColor");
		cl.def("GetMaterial", (enum roadmanager::LaneRoadMark::RoadMarkMaterial (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetMaterial, "C++: roadmanager::LaneRoadMark::GetMaterial() --> enum roadmanager::LaneRoadMark::RoadMarkMaterial");
		cl.def("GetLaneChange", (enum roadmanager::LaneRoadMark::RoadMarkLaneChange (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetLaneChange, "C++: roadmanager::LaneRoadMark::GetLaneChange() --> enum roadmanager::LaneRoadMark::RoadMarkLaneChange");
		cl.def("GetNumberOfRoadMarkTypes", (int (roadmanager::LaneRoadMark::*)()) &roadmanager::LaneRoadMark::GetNumberOfRoadMarkTypes, "C++: roadmanager::LaneRoadMark::GetNumberOfRoadMarkTypes() --> int");
		cl.def("GetLaneRoadMarkTypeByIdx", (class roadmanager::LaneRoadMarkType * (roadmanager::LaneRoadMark::*)(int)) &roadmanager::LaneRoadMark::GetLaneRoadMarkTypeByIdx, "C++: roadmanager::LaneRoadMark::GetLaneRoadMarkTypeByIdx(int) --> class roadmanager::LaneRoadMarkType *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
	}
	{ // roadmanager::LaneOffset file: line:462
		pybind11::class_<roadmanager::LaneOffset, std::shared_ptr<roadmanager::LaneOffset>> cl(M("roadmanager"), "LaneOffset", "");
		cl.def( pybind11::init( [](){ return new roadmanager::LaneOffset(); } ) );
		cl.def( pybind11::init<double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d") );

		cl.def("Set", (void (roadmanager::LaneOffset::*)(double, double, double, double, double)) &roadmanager::LaneOffset::Set, "C++: roadmanager::LaneOffset::Set(double, double, double, double, double) --> void", pybind11::arg("s"), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d"));
		cl.def("SetLength", (void (roadmanager::LaneOffset::*)(double)) &roadmanager::LaneOffset::SetLength, "C++: roadmanager::LaneOffset::SetLength(double) --> void", pybind11::arg("length"));
		cl.def("GetS", (double (roadmanager::LaneOffset::*)()) &roadmanager::LaneOffset::GetS, "C++: roadmanager::LaneOffset::GetS() --> double");
		cl.def("GetPolynomial", (class roadmanager::Polynomial (roadmanager::LaneOffset::*)()) &roadmanager::LaneOffset::GetPolynomial, "C++: roadmanager::LaneOffset::GetPolynomial() --> class roadmanager::Polynomial");
		cl.def("GetLength", (double (roadmanager::LaneOffset::*)()) &roadmanager::LaneOffset::GetLength, "C++: roadmanager::LaneOffset::GetLength() --> double");
		cl.def("GetLaneOffset", (double (roadmanager::LaneOffset::*)(double)) &roadmanager::LaneOffset::GetLaneOffset, "C++: roadmanager::LaneOffset::GetLaneOffset(double) --> double", pybind11::arg("s"));
		cl.def("GetLaneOffsetPrim", (double (roadmanager::LaneOffset::*)(double)) &roadmanager::LaneOffset::GetLaneOffsetPrim, "C++: roadmanager::LaneOffset::GetLaneOffsetPrim(double) --> double", pybind11::arg("s"));
		cl.def("Print", (void (roadmanager::LaneOffset::*)()) &roadmanager::LaneOffset::Print, "C++: roadmanager::LaneOffset::Print() --> void");
	}
	{ // roadmanager::Lane file: line:491
		pybind11::class_<roadmanager::Lane, std::shared_ptr<roadmanager::Lane>> cl(M("roadmanager"), "Lane", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Lane(); } ) );
		cl.def( pybind11::init<int, roadmanager::Lane::LaneType>(), pybind11::arg("id"), pybind11::arg("type") );

		cl.def( pybind11::init( [](roadmanager::Lane const &o){ return new roadmanager::Lane(o); } ) );

		pybind11::enum_<roadmanager::Lane::LanePosition>(cl, "LanePosition", pybind11::arithmetic(), "")
			.value("LANE_POS_CENTER", roadmanager::Lane::LANE_POS_CENTER)
			.value("LANE_POS_LEFT", roadmanager::Lane::LANE_POS_LEFT)
			.value("LANE_POS_RIGHT", roadmanager::Lane::LANE_POS_RIGHT)
			.export_values();

		cl.def_readwrite("osi_points_", &roadmanager::Lane::osi_points_);
		cl.def("GetId", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetId, "C++: roadmanager::Lane::GetId() --> int");
		cl.def("GetOffsetFromRef", (double (roadmanager::Lane::*)()) &roadmanager::Lane::GetOffsetFromRef, "C++: roadmanager::Lane::GetOffsetFromRef() --> double");
		cl.def("GetLaneType", (roadmanager::Lane::LaneType (roadmanager::Lane::*)()) &roadmanager::Lane::GetLaneType, "C++: roadmanager::Lane::GetLaneType() --> roadmanager::Lane::LaneType");
		cl.def("GetGlobalId", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetGlobalId, "C++: roadmanager::Lane::GetGlobalId() --> int");
		cl.def("AddLink", (void (roadmanager::Lane::*)(class roadmanager::LaneLink *)) &roadmanager::Lane::AddLink, "C++: roadmanager::Lane::AddLink(class roadmanager::LaneLink *) --> void", pybind11::arg("lane_link"));
		cl.def("AddLaneWidth", (void (roadmanager::Lane::*)(class roadmanager::LaneWidth *)) &roadmanager::Lane::AddLaneWidth, "C++: roadmanager::Lane::AddLaneWidth(class roadmanager::LaneWidth *) --> void", pybind11::arg("lane_width"));
		cl.def("AddLaneRoadMark", (void (roadmanager::Lane::*)(class roadmanager::LaneRoadMark *)) &roadmanager::Lane::AddLaneRoadMark, "C++: roadmanager::Lane::AddLaneRoadMark(class roadmanager::LaneRoadMark *) --> void", pybind11::arg("lane_roadMark"));
		cl.def("GetNumberOfRoadMarks", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetNumberOfRoadMarks, "C++: roadmanager::Lane::GetNumberOfRoadMarks() --> int");
		cl.def("GetNumberOfLinks", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetNumberOfLinks, "C++: roadmanager::Lane::GetNumberOfLinks() --> int");
		cl.def("GetNumberOfLaneWidths", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetNumberOfLaneWidths, "C++: roadmanager::Lane::GetNumberOfLaneWidths() --> int");
		cl.def("GetLink", (class roadmanager::LaneLink * (roadmanager::Lane::*)(roadmanager::LinkType)) &roadmanager::Lane::GetLink, "C++: roadmanager::Lane::GetLink(roadmanager::LinkType) --> class roadmanager::LaneLink *", pybind11::return_value_policy::automatic, pybind11::arg("type"));
		cl.def("GetWidthByIndex", (class roadmanager::LaneWidth * (roadmanager::Lane::*)(int)) &roadmanager::Lane::GetWidthByIndex, "C++: roadmanager::Lane::GetWidthByIndex(int) --> class roadmanager::LaneWidth *", pybind11::return_value_policy::automatic, pybind11::arg("index"));
		cl.def("GetWidthByS", (class roadmanager::LaneWidth * (roadmanager::Lane::*)(double)) &roadmanager::Lane::GetWidthByS, "C++: roadmanager::Lane::GetWidthByS(double) --> class roadmanager::LaneWidth *", pybind11::return_value_policy::automatic, pybind11::arg("s"));
		cl.def("GetLaneRoadMarkByIdx", (class roadmanager::LaneRoadMark * (roadmanager::Lane::*)(int)) &roadmanager::Lane::GetLaneRoadMarkByIdx, "C++: roadmanager::Lane::GetLaneRoadMarkByIdx(int) --> class roadmanager::LaneRoadMark *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetRoadMarkInfoByS", (struct roadmanager::RoadMarkInfo (roadmanager::Lane::*)(int, int, double)) &roadmanager::Lane::GetRoadMarkInfoByS, "C++: roadmanager::Lane::GetRoadMarkInfoByS(int, int, double) --> struct roadmanager::RoadMarkInfo", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"));
		cl.def("GetOSIPoints", (class roadmanager::OSIPoints * (roadmanager::Lane::*)()) &roadmanager::Lane::GetOSIPoints, "C++: roadmanager::Lane::GetOSIPoints() --> class roadmanager::OSIPoints *", pybind11::return_value_policy::automatic);
		cl.def("GetLaneBoundary", (class roadmanager::LaneBoundaryOSI * (roadmanager::Lane::*)()) &roadmanager::Lane::GetLaneBoundary, "C++: roadmanager::Lane::GetLaneBoundary() --> class roadmanager::LaneBoundaryOSI *", pybind11::return_value_policy::automatic);
		cl.def("GetLaneBoundaryGlobalId", (int (roadmanager::Lane::*)()) &roadmanager::Lane::GetLaneBoundaryGlobalId, "C++: roadmanager::Lane::GetLaneBoundaryGlobalId() --> int");
		cl.def("SetGlobalId", (void (roadmanager::Lane::*)()) &roadmanager::Lane::SetGlobalId, "C++: roadmanager::Lane::SetGlobalId() --> void");
		cl.def("SetLaneBoundary", (void (roadmanager::Lane::*)(class roadmanager::LaneBoundaryOSI *)) &roadmanager::Lane::SetLaneBoundary, "C++: roadmanager::Lane::SetLaneBoundary(class roadmanager::LaneBoundaryOSI *) --> void", pybind11::arg("lane_boundary"));
		cl.def("SetOffsetFromRef", (void (roadmanager::Lane::*)(double)) &roadmanager::Lane::SetOffsetFromRef, "C++: roadmanager::Lane::SetOffsetFromRef(double) --> void", pybind11::arg("offset"));
		cl.def("IsType", (bool (roadmanager::Lane::*)(roadmanager::Lane::LaneType)) &roadmanager::Lane::IsType, "C++: roadmanager::Lane::IsType(roadmanager::Lane::LaneType) --> bool", pybind11::arg("type"));
		cl.def("IsCenter", (bool (roadmanager::Lane::*)()) &roadmanager::Lane::IsCenter, "C++: roadmanager::Lane::IsCenter() --> bool");
		cl.def("IsDriving", (bool (roadmanager::Lane::*)()) &roadmanager::Lane::IsDriving, "C++: roadmanager::Lane::IsDriving() --> bool");
		cl.def("Print", (void (roadmanager::Lane::*)()) &roadmanager::Lane::Print, "C++: roadmanager::Lane::Print() --> void");
	}
}

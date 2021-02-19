#include <memory>
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

void bind_unknown_unknown_8(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // roadmanager::Position file: line:1121
		pybind11::class_<roadmanager::Position, std::shared_ptr<roadmanager::Position>> cl(M("roadmanager"), "Position", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Position(); } ) );
		cl.def( pybind11::init<int, double, double>(), pybind11::arg("track_id"), pybind11::arg("s"), pybind11::arg("t") );

		cl.def( pybind11::init<int, int, double, double>(), pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"), pybind11::arg("offset") );

		cl.def( pybind11::init<double, double, double, double, double, double>(), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r") );

		cl.def( pybind11::init<double, double, double, double, double, double, bool>(), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"), pybind11::arg("calculateTrackPosition") );

		cl.def( pybind11::init( [](roadmanager::Position const &o){ return new roadmanager::Position(o); } ) );

		pybind11::enum_<roadmanager::Position::PositionType>(cl, "PositionType", pybind11::arithmetic(), "")
			.value("NORMAL", roadmanager::Position::NORMAL)
			.value("ROUTE", roadmanager::Position::ROUTE)
			.value("RELATIVE_OBJECT", roadmanager::Position::RELATIVE_OBJECT)
			.value("RELATIVE_WORLD", roadmanager::Position::RELATIVE_WORLD)
			.value("RELATIVE_LANE", roadmanager::Position::RELATIVE_LANE)
			.value("RELATIVE_ROAD", roadmanager::Position::RELATIVE_ROAD)
			.export_values();


		pybind11::enum_<roadmanager::Position::OrientationType>(cl, "OrientationType", pybind11::arithmetic(), "")
			.value("ORIENTATION_RELATIVE", roadmanager::Position::ORIENTATION_RELATIVE)
			.value("ORIENTATION_ABSOLUTE", roadmanager::Position::ORIENTATION_ABSOLUTE)
			.export_values();


		pybind11::enum_<roadmanager::Position::LookAheadMode>(cl, "LookAheadMode", pybind11::arithmetic(), "")
			.value("LOOKAHEADMODE_AT_LANE_CENTER", roadmanager::Position::LOOKAHEADMODE_AT_LANE_CENTER)
			.value("LOOKAHEADMODE_AT_ROAD_CENTER", roadmanager::Position::LOOKAHEADMODE_AT_ROAD_CENTER)
			.value("LOOKAHEADMODE_AT_CURRENT_LATERAL_OFFSET", roadmanager::Position::LOOKAHEADMODE_AT_CURRENT_LATERAL_OFFSET)
			.export_values();


		pybind11::enum_<roadmanager::Position::ErrorCode>(cl, "ErrorCode", pybind11::arithmetic(), "")
			.value("ERROR_NO_ERROR", roadmanager::Position::ERROR_NO_ERROR)
			.value("ERROR_GENERIC", roadmanager::Position::ERROR_GENERIC)
			.value("ERROR_END_OF_ROAD", roadmanager::Position::ERROR_END_OF_ROAD)
			.value("ERROR_END_OF_ROUTE", roadmanager::Position::ERROR_END_OF_ROUTE)
			.value("ERROR_OFF_ROAD", roadmanager::Position::ERROR_OFF_ROAD)
			.export_values();


		pybind11::enum_<roadmanager::Position::UpdateTrackPosMode>(cl, "UpdateTrackPosMode", pybind11::arithmetic(), "")
			.value("UPDATE_NOT_XYZH", roadmanager::Position::UPDATE_NOT_XYZH)
			.value("UPDATE_XYZ", roadmanager::Position::UPDATE_XYZ)
			.value("UPDATE_XYZH", roadmanager::Position::UPDATE_XYZH)
			.export_values();

		cl.def("Init", (void (roadmanager::Position::*)()) &roadmanager::Position::Init, "C++: roadmanager::Position::Init() --> void");
		cl.def_static("LoadOpenDrive", (bool (*)(const char *)) &roadmanager::Position::LoadOpenDrive, "C++: roadmanager::Position::LoadOpenDrive(const char *) --> bool", pybind11::arg("filename"));
		cl.def_static("GetOpenDrive", (class roadmanager::OpenDrive * (*)()) &roadmanager::Position::GetOpenDrive, "C++: roadmanager::Position::GetOpenDrive() --> class roadmanager::OpenDrive *", pybind11::return_value_policy::automatic);
		cl.def("GotoClosestDrivingLaneAtCurrentPosition", (int (roadmanager::Position::*)()) &roadmanager::Position::GotoClosestDrivingLaneAtCurrentPosition, "C++: roadmanager::Position::GotoClosestDrivingLaneAtCurrentPosition() --> int");
		cl.def("SetTrackPos", [](roadmanager::Position &o, int const & a0, double const & a1, double const & a2) -> int { return o.SetTrackPos(a0, a1, a2); }, "", pybind11::arg("track_id"), pybind11::arg("s"), pybind11::arg("t"));
		cl.def("SetTrackPos", (int (roadmanager::Position::*)(int, double, double, enum roadmanager::Position::UpdateTrackPosMode)) &roadmanager::Position::SetTrackPos, "		Specify position by track coordinate (road_id, s, t)\n		\n\n Id of the road (track)\n		\n\n Distance to the position along and from the start of the road (track)\n		\n\n UPDATE_NOT_XYZH: no update of x, y, z, h UPDATE_XYZ: recalculate x, y, z UPDATE_XYZH relaculate x, y, z and align h\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetTrackPos(int, double, double, enum roadmanager::Position::UpdateTrackPosMode) --> int", pybind11::arg("track_id"), pybind11::arg("s"), pybind11::arg("t"), pybind11::arg("updateMode"));
		cl.def("ForceLaneId", (void (roadmanager::Position::*)(int)) &roadmanager::Position::ForceLaneId, "C++: roadmanager::Position::ForceLaneId(int) --> void", pybind11::arg("lane_id"));
		cl.def("SetLanePos", [](roadmanager::Position &o, int const & a0, int const & a1, double const & a2, double const & a3) -> int { return o.SetLanePos(a0, a1, a2, a3); }, "", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"), pybind11::arg("offset"));
		cl.def("SetLanePos", (int (roadmanager::Position::*)(int, int, double, double, int)) &roadmanager::Position::SetLanePos, "C++: roadmanager::Position::SetLanePos(int, int, double, double, int) --> int", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"), pybind11::arg("offset"), pybind11::arg("lane_section_idx"));
		cl.def("SetLaneBoundaryPos", [](roadmanager::Position &o, int const & a0, int const & a1, double const & a2, double const & a3) -> void { return o.SetLaneBoundaryPos(a0, a1, a2, a3); }, "", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"), pybind11::arg("offset"));
		cl.def("SetLaneBoundaryPos", (void (roadmanager::Position::*)(int, int, double, double, int)) &roadmanager::Position::SetLaneBoundaryPos, "C++: roadmanager::Position::SetLaneBoundaryPos(int, int, double, double, int) --> void", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("s"), pybind11::arg("offset"), pybind11::arg("lane_section_idx"));
		cl.def("SetRoadMarkPos", [](roadmanager::Position &o, int const & a0, int const & a1, int const & a2, int const & a3, int const & a4, double const & a5, double const & a6) -> void { return o.SetRoadMarkPos(a0, a1, a2, a3, a4, a5, a6); }, "", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("roadmark_idx"), pybind11::arg("roadmarktype_idx"), pybind11::arg("roadmarkline_idx"), pybind11::arg("s"), pybind11::arg("offset"));
		cl.def("SetRoadMarkPos", (void (roadmanager::Position::*)(int, int, int, int, int, double, double, int)) &roadmanager::Position::SetRoadMarkPos, "C++: roadmanager::Position::SetRoadMarkPos(int, int, int, int, int, double, double, int) --> void", pybind11::arg("track_id"), pybind11::arg("lane_id"), pybind11::arg("roadmark_idx"), pybind11::arg("roadmarktype_idx"), pybind11::arg("roadmarkline_idx"), pybind11::arg("s"), pybind11::arg("offset"), pybind11::arg("lane_section_idx"));
		cl.def("SetInertiaPos", [](roadmanager::Position &o, double const & a0, double const & a1, double const & a2, double const & a3, double const & a4, double const & a5) -> int { return o.SetInertiaPos(a0, a1, a2, a3, a4, a5); }, "", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"));
		cl.def("SetInertiaPos", (int (roadmanager::Position::*)(double, double, double, double, double, double, bool)) &roadmanager::Position::SetInertiaPos, "		Specify position by cartesian x, y, z and heading, pitch, roll\n		\n\n x\n		\n\n y\n		\n\n z\n		\n\n heading\n		\n\n pitch\n		\n\n roll\n		\n\n True: road position will be calculated False: don't update road position\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetInertiaPos(double, double, double, double, double, double, bool) --> int", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"), pybind11::arg("updateTrackPos"));
		cl.def("SetInertiaPos", [](roadmanager::Position &o, double const & a0, double const & a1, double const & a2) -> int { return o.SetInertiaPos(a0, a1, a2); }, "", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("SetInertiaPos", (int (roadmanager::Position::*)(double, double, double, bool)) &roadmanager::Position::SetInertiaPos, "		Specify position by cartesian x, y and heading. z, pitch and roll will be aligned to road.\n		\n\n x\n		\n\n y\n		\n\n heading\n		\n\n True: road position will be calculated False: don't update road position\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetInertiaPos(double, double, double, bool) --> int", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"), pybind11::arg("updateTrackPos"));
		cl.def("SetHeading", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetHeading, "C++: roadmanager::Position::SetHeading(double) --> void", pybind11::arg("heading"));
		cl.def("SetHeadingRelative", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetHeadingRelative, "C++: roadmanager::Position::SetHeadingRelative(double) --> void", pybind11::arg("heading"));
		cl.def("SetHeadingRelativeRoadDirection", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetHeadingRelativeRoadDirection, "C++: roadmanager::Position::SetHeadingRelativeRoadDirection(double) --> void", pybind11::arg("heading"));
		cl.def("SetRoll", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetRoll, "C++: roadmanager::Position::SetRoll(double) --> void", pybind11::arg("roll"));
		cl.def("SetRollRelative", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetRollRelative, "C++: roadmanager::Position::SetRollRelative(double) --> void", pybind11::arg("roll"));
		cl.def("SetPitch", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetPitch, "C++: roadmanager::Position::SetPitch(double) --> void", pybind11::arg("roll"));
		cl.def("SetPitchRelative", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetPitchRelative, "C++: roadmanager::Position::SetPitchRelative(double) --> void", pybind11::arg("pitch"));
		cl.def("XYZH2TrackPos", [](roadmanager::Position &o, double const & a0, double const & a1, double const & a2, double const & a3) -> int { return o.XYZH2TrackPos(a0, a1, a2, a3); }, "", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"));
		cl.def("XYZH2TrackPos", (int (roadmanager::Position::*)(double, double, double, double, bool)) &roadmanager::Position::XYZH2TrackPos, "		Specify position by cartesian coordinate (x, y, z, h)\n		\n\n X-coordinate\n		\n\n Y-coordinate\n		\n\n Z-coordinate\n		\n\n Align Z-coordinate to road elevation and Heading to tangent of the road \n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::XYZH2TrackPos(double, double, double, double, bool) --> int", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"), pybind11::arg("h"), pybind11::arg("alignZAndPitch"));
		cl.def("MoveToConnectingRoad", [](roadmanager::Position &o, class roadmanager::RoadLink * a0, enum roadmanager::ContactPointType & a1) -> int { return o.MoveToConnectingRoad(a0, a1); }, "", pybind11::arg("road_link"), pybind11::arg("contact_point_type"));
		cl.def("MoveToConnectingRoad", (int (roadmanager::Position::*)(class roadmanager::RoadLink *, enum roadmanager::ContactPointType &, roadmanager::Junction::JunctionStrategyType)) &roadmanager::Position::MoveToConnectingRoad, "C++: roadmanager::Position::MoveToConnectingRoad(class roadmanager::RoadLink *, enum roadmanager::ContactPointType &, roadmanager::Junction::JunctionStrategyType) --> int", pybind11::arg("road_link"), pybind11::arg("contact_point_type"), pybind11::arg("strategy"));
		cl.def("SetRelativePosition", (void (roadmanager::Position::*)(class roadmanager::Position *, enum roadmanager::Position::PositionType)) &roadmanager::Position::SetRelativePosition, "C++: roadmanager::Position::SetRelativePosition(class roadmanager::Position *, enum roadmanager::Position::PositionType) --> void", pybind11::arg("rel_pos"), pybind11::arg("type"));
		cl.def("GetRelativePosition", (class roadmanager::Position * (roadmanager::Position::*)()) &roadmanager::Position::GetRelativePosition, "C++: roadmanager::Position::GetRelativePosition() --> class roadmanager::Position *", pybind11::return_value_policy::automatic);
		cl.def("ReleaseRelation", (void (roadmanager::Position::*)()) &roadmanager::Position::ReleaseRelation, "C++: roadmanager::Position::ReleaseRelation() --> void");
		cl.def("SetRoute", (void (roadmanager::Position::*)(class roadmanager::Route *)) &roadmanager::Position::SetRoute, "C++: roadmanager::Position::SetRoute(class roadmanager::Route *) --> void", pybind11::arg("route"));
		cl.def("CalcRoutePosition", (void (roadmanager::Position::*)()) &roadmanager::Position::CalcRoutePosition, "C++: roadmanager::Position::CalcRoutePosition() --> void");
		cl.def("GetRoute", (class roadmanager::Route * (roadmanager::Position::*)()) &roadmanager::Position::GetRoute, "C++: roadmanager::Position::GetRoute() --> class roadmanager::Route *", pybind11::return_value_policy::automatic);
		cl.def("GetTrajectory", (class roadmanager::Trajectory * (roadmanager::Position::*)()) &roadmanager::Position::GetTrajectory, "C++: roadmanager::Position::GetTrajectory() --> class roadmanager::Trajectory *", pybind11::return_value_policy::automatic);
		cl.def("SetTrajectory", (void (roadmanager::Position::*)(class roadmanager::Trajectory *)) &roadmanager::Position::SetTrajectory, "C++: roadmanager::Position::SetTrajectory(class roadmanager::Trajectory *) --> void", pybind11::arg("trajectory"));
		cl.def("SetRoutePosition", (int (roadmanager::Position::*)(class roadmanager::Position *)) &roadmanager::Position::SetRoutePosition, "		Set the current position along the route.\n		\n\n A regular position created with road, lane or world coordinates\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetRoutePosition(class roadmanager::Position *) --> int", pybind11::arg("position"));
		cl.def("GetRouteS", (double (roadmanager::Position::*)()) &roadmanager::Position::GetRouteS, "		Retrieve the S-value of the current route position. Note: This is the S along the\n		complete route, not the actual individual roads.\n\nC++: roadmanager::Position::GetRouteS() --> double");
		cl.def("MoveRouteDS", (int (roadmanager::Position::*)(double)) &roadmanager::Position::MoveRouteDS, "		Move current position forward, or backwards, ds meters along the route\n		\n\n Distance to move, negative will move backwards\n		\n\n Non zero return value indicates error of some kind, most likely End Of Route\n\nC++: roadmanager::Position::MoveRouteDS(double) --> int", pybind11::arg("ds"));
		cl.def("SetRouteLanePosition", (int (roadmanager::Position::*)(class roadmanager::Route *, double, int, double)) &roadmanager::Position::SetRouteLanePosition, "		Move current position to specified S-value along the route\n		\n\n Distance to move, negative will move backwards\n		\n\n Explicit (not delta/offset) lane ID\n		\n\n Explicit (not delta/offset) lane offset value\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetRouteLanePosition(class roadmanager::Route *, double, int, double) --> int", pybind11::arg("route"), pybind11::arg("route_s"), pybind11::arg("laneId"), pybind11::arg("laneOffset"));
		cl.def("SetRouteS", (int (roadmanager::Position::*)(class roadmanager::Route *, double)) &roadmanager::Position::SetRouteS, "		Move current position to specified S-value along the route\n		\n\n Distance to move, negative will move backwards\n		\n\n Non zero return value indicates error of some kind, most likely End Of Route\n\nC++: roadmanager::Position::SetRouteS(class roadmanager::Route *, double) --> int", pybind11::arg("route"), pybind11::arg("route_s"));
		cl.def("MoveTrajectoryDS", (int (roadmanager::Position::*)(double)) &roadmanager::Position::MoveTrajectoryDS, "		Move current position forward, or backwards, ds meters along the trajectory\n		\n\n Distance to move, negative will move backwards\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::MoveTrajectoryDS(double) --> int", pybind11::arg("ds"));
		cl.def("SetTrajectoryS", (int (roadmanager::Position::*)(class roadmanager::Trajectory *, double)) &roadmanager::Position::SetTrajectoryS, "		Move current position to specified S-value along the trajectory\n		\n\n Distance to move, negative will move backwards\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Position::SetTrajectoryS(class roadmanager::Trajectory *, double) --> int", pybind11::arg("trajectory"), pybind11::arg("trajectory_s"));
		cl.def("SetTrajectoryPosByTime", (int (roadmanager::Position::*)(class roadmanager::Trajectory *, double)) &roadmanager::Position::SetTrajectoryPosByTime, "C++: roadmanager::Position::SetTrajectoryPosByTime(class roadmanager::Trajectory *, double) --> int", pybind11::arg("trajectory"), pybind11::arg("time"));
		cl.def("GetTrajectoryS", (double (roadmanager::Position::*)()) &roadmanager::Position::GetTrajectoryS, "		Retrieve the S-value of the current route position. Note: This is the S along the\n		complete route, not the actual individual roads.\n\nC++: roadmanager::Position::GetTrajectoryS() --> double");
		cl.def("getRelativeDistance", (double (roadmanager::Position::*)(class roadmanager::Position, double &, double &)) &roadmanager::Position::getRelativeDistance, "		Straight (not route) distance between the current position and the one specified in argument\n		\n\n The position to measure distance from current position. \n		\n\n (meter). X component of the relative distance.\n		\n\n (meter). Y component of the relative distance.\n		\n\n distance (meter). Negative if the specified position is behind the current one.\n\nC++: roadmanager::Position::getRelativeDistance(class roadmanager::Position, double &, double &) --> double", pybind11::arg("target_position"), pybind11::arg("x"), pybind11::arg("y"));
		cl.def("IsAheadOf", (bool (roadmanager::Position::*)(class roadmanager::Position)) &roadmanager::Position::IsAheadOf, "		Is the current position ahead of the one specified in argument\n		This method is more efficient than getRelativeDistance\n		\n\n The position to compare the current to.\n		\n\n true of false\n\nC++: roadmanager::Position::IsAheadOf(class roadmanager::Position) --> bool", pybind11::arg("target_position"));
		cl.def("MoveAlongS", [](roadmanager::Position &o, double const & a0) -> int { return o.MoveAlongS(a0); }, "", pybind11::arg("ds"));
		cl.def("MoveAlongS", [](roadmanager::Position &o, double const & a0, double const & a1) -> int { return o.MoveAlongS(a0, a1); }, "", pybind11::arg("ds"), pybind11::arg("dLaneOffset"));
		cl.def("MoveAlongS", (int (roadmanager::Position::*)(double, double, roadmanager::Junction::JunctionStrategyType)) &roadmanager::Position::MoveAlongS, "		Move position along the road network, forward or backward, from the current position\n		It will automatically follow connecting lanes between connected roads \n		If multiple options (only possible in junctions) it will choose randomly \n		\n\n distance to move from current position\n\nC++: roadmanager::Position::MoveAlongS(double, double, roadmanager::Junction::JunctionStrategyType) --> int", pybind11::arg("ds"), pybind11::arg("dLaneOffset"), pybind11::arg("strategy"));
		cl.def("GetTrackId", (int (roadmanager::Position::*)()) &roadmanager::Position::GetTrackId, "		Retrieve the track/road ID from the position object\n		\n\n track/road ID\n\nC++: roadmanager::Position::GetTrackId() --> int");
		cl.def("GetLaneId", (int (roadmanager::Position::*)()) &roadmanager::Position::GetLaneId, "		Retrieve the lane ID from the position object\n		\n\n lane ID\n\nC++: roadmanager::Position::GetLaneId() --> int");
		cl.def("GetLaneGlobalId", (int (roadmanager::Position::*)()) &roadmanager::Position::GetLaneGlobalId, "		Retrieve the global lane ID from the position object\n		\n\n lane ID\n\nC++: roadmanager::Position::GetLaneGlobalId() --> int");
		cl.def("GetRoadById", (class roadmanager::Road * (roadmanager::Position::*)(int)) &roadmanager::Position::GetRoadById, "		Retrieve a road segment specified by road ID\n		\n\n road ID as specified in the OpenDRIVE file\n\nC++: roadmanager::Position::GetRoadById(int) --> class roadmanager::Road *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("GetS", (double (roadmanager::Position::*)()) &roadmanager::Position::GetS, "		Retrieve the s value (distance along the road segment)\n\nC++: roadmanager::Position::GetS() --> double");
		cl.def("GetT", (double (roadmanager::Position::*)()) &roadmanager::Position::GetT, "		Retrieve the t value (lateral distance from reference lanem (id=0))\n\nC++: roadmanager::Position::GetT() --> double");
		cl.def("GetOffset", (double (roadmanager::Position::*)()) &roadmanager::Position::GetOffset, "		Retrieve the offset from current lane\n\nC++: roadmanager::Position::GetOffset() --> double");
		cl.def("GetX", (double (roadmanager::Position::*)()) &roadmanager::Position::GetX, "		Retrieve the world coordinate X-value\n\nC++: roadmanager::Position::GetX() --> double");
		cl.def("GetY", (double (roadmanager::Position::*)()) &roadmanager::Position::GetY, "		Retrieve the world coordinate Y-value\n\nC++: roadmanager::Position::GetY() --> double");
		cl.def("GetZ", (double (roadmanager::Position::*)()) &roadmanager::Position::GetZ, "		Retrieve the world coordinate Z-value\n\nC++: roadmanager::Position::GetZ() --> double");
		cl.def("GetZRoad", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetZRoad, "		Retrieve the road Z-value \n\nC++: roadmanager::Position::GetZRoad() const --> double");
		cl.def("GetH", (double (roadmanager::Position::*)()) &roadmanager::Position::GetH, "		Retrieve the world coordinate heading angle (radians)\n\nC++: roadmanager::Position::GetH() --> double");
		cl.def("GetHRoad", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetHRoad, "		Retrieve the road heading angle (radians)\n\nC++: roadmanager::Position::GetHRoad() const --> double");
		cl.def("GetHRoadInDrivingDirection", (double (roadmanager::Position::*)()) &roadmanager::Position::GetHRoadInDrivingDirection, "		Retrieve the road heading angle (radians) relative driving direction (lane sign considered)\n\nC++: roadmanager::Position::GetHRoadInDrivingDirection() --> double");
		cl.def("GetHRelativeDrivingDirection", (double (roadmanager::Position::*)()) &roadmanager::Position::GetHRelativeDrivingDirection, "		Retrieve the heading angle (radians) relative driving direction (lane sign considered)\n\nC++: roadmanager::Position::GetHRelativeDrivingDirection() --> double");
		cl.def("GetHRelative", (double (roadmanager::Position::*)()) &roadmanager::Position::GetHRelative, "		Retrieve the relative heading angle (radians)\n\nC++: roadmanager::Position::GetHRelative() --> double");
		cl.def("GetP", (double (roadmanager::Position::*)()) &roadmanager::Position::GetP, "		Retrieve the world coordinate pitch angle (radians)\n\nC++: roadmanager::Position::GetP() --> double");
		cl.def("GetPRoad", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetPRoad, "		Retrieve the road pitch value\n\nC++: roadmanager::Position::GetPRoad() const --> double");
		cl.def("GetPRelative", (double (roadmanager::Position::*)()) &roadmanager::Position::GetPRelative, "		Retrieve the relative pitch angle (radians)\n\nC++: roadmanager::Position::GetPRelative() --> double");
		cl.def("GetR", (double (roadmanager::Position::*)()) &roadmanager::Position::GetR, "		Retrieve the world coordinate roll angle (radians)\n\nC++: roadmanager::Position::GetR() --> double");
		cl.def("GetRRoad", (double (roadmanager::Position::*)() const) &roadmanager::Position::GetRRoad, "		Retrieve the road roll value\n\nC++: roadmanager::Position::GetRRoad() const --> double");
		cl.def("GetRRelative", (double (roadmanager::Position::*)()) &roadmanager::Position::GetRRelative, "		Retrieve the relative roll angle (radians)\n\nC++: roadmanager::Position::GetRRelative() --> double");
		cl.def("GetPRoadInDrivingDirection", (double (roadmanager::Position::*)()) &roadmanager::Position::GetPRoadInDrivingDirection, "		Retrieve the road pitch value, driving direction considered\n\nC++: roadmanager::Position::GetPRoadInDrivingDirection() --> double");
		cl.def("GetCurvature", (double (roadmanager::Position::*)()) &roadmanager::Position::GetCurvature, "		Retrieve the road curvature at current position\n\nC++: roadmanager::Position::GetCurvature() --> double");
		cl.def("GetSpeedLimit", (double (roadmanager::Position::*)()) &roadmanager::Position::GetSpeedLimit, "		Retrieve the speed limit at current position\n\nC++: roadmanager::Position::GetSpeedLimit() --> double");
		cl.def("GetDrivingDirection", (double (roadmanager::Position::*)()) &roadmanager::Position::GetDrivingDirection, "		Retrieve the road heading/direction at current position, and in the direction given by current lane\n\nC++: roadmanager::Position::GetDrivingDirection() --> double");
		cl.def("GetType", (enum roadmanager::Position::PositionType (roadmanager::Position::*)()) &roadmanager::Position::GetType, "C++: roadmanager::Position::GetType() --> enum roadmanager::Position::PositionType");
		cl.def("SetTrackId", (void (roadmanager::Position::*)(int)) &roadmanager::Position::SetTrackId, "C++: roadmanager::Position::SetTrackId(int) --> void", pybind11::arg("trackId"));
		cl.def("SetLaneId", (void (roadmanager::Position::*)(int)) &roadmanager::Position::SetLaneId, "C++: roadmanager::Position::SetLaneId(int) --> void", pybind11::arg("laneId"));
		cl.def("SetS", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetS, "C++: roadmanager::Position::SetS(double) --> void", pybind11::arg("s"));
		cl.def("SetOffset", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetOffset, "C++: roadmanager::Position::SetOffset(double) --> void", pybind11::arg("offset"));
		cl.def("SetT", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetT, "C++: roadmanager::Position::SetT(double) --> void", pybind11::arg("t"));
		cl.def("SetX", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetX, "C++: roadmanager::Position::SetX(double) --> void", pybind11::arg("x"));
		cl.def("SetY", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetY, "C++: roadmanager::Position::SetY(double) --> void", pybind11::arg("y"));
		cl.def("SetZ", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetZ, "C++: roadmanager::Position::SetZ(double) --> void", pybind11::arg("z"));
		cl.def("SetH", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetH, "C++: roadmanager::Position::SetH(double) --> void", pybind11::arg("h"));
		cl.def("SetHRate", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetHRate, "C++: roadmanager::Position::SetHRate(double) --> void", pybind11::arg("h_rate"));
		cl.def("SetHAcc", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetHAcc, "C++: roadmanager::Position::SetHAcc(double) --> void", pybind11::arg("h_acc"));
		cl.def("SetP", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetP, "C++: roadmanager::Position::SetP(double) --> void", pybind11::arg("p"));
		cl.def("SetR", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetR, "C++: roadmanager::Position::SetR(double) --> void", pybind11::arg("r"));
		cl.def("SetVelX", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetVelX, "C++: roadmanager::Position::SetVelX(double) --> void", pybind11::arg("x"));
		cl.def("SetVelY", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetVelY, "C++: roadmanager::Position::SetVelY(double) --> void", pybind11::arg("y"));
		cl.def("SetVelZ", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetVelZ, "C++: roadmanager::Position::SetVelZ(double) --> void", pybind11::arg("z"));
		cl.def("SetAccX", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetAccX, "C++: roadmanager::Position::SetAccX(double) --> void", pybind11::arg("x"));
		cl.def("SetAccY", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetAccY, "C++: roadmanager::Position::SetAccY(double) --> void", pybind11::arg("y"));
		cl.def("SetAccZ", (void (roadmanager::Position::*)(double)) &roadmanager::Position::SetAccZ, "C++: roadmanager::Position::SetAccZ(double) --> void", pybind11::arg("z"));
		cl.def("GetVelX", (double (roadmanager::Position::*)()) &roadmanager::Position::GetVelX, "C++: roadmanager::Position::GetVelX() --> double");
		cl.def("GetVelY", (double (roadmanager::Position::*)()) &roadmanager::Position::GetVelY, "C++: roadmanager::Position::GetVelY() --> double");
		cl.def("GetVelZ", (double (roadmanager::Position::*)()) &roadmanager::Position::GetVelZ, "C++: roadmanager::Position::GetVelZ() --> double");
		cl.def("GetAccX", (double (roadmanager::Position::*)()) &roadmanager::Position::GetAccX, "C++: roadmanager::Position::GetAccX() --> double");
		cl.def("GetAccY", (double (roadmanager::Position::*)()) &roadmanager::Position::GetAccY, "C++: roadmanager::Position::GetAccY() --> double");
		cl.def("GetAccZ", (double (roadmanager::Position::*)()) &roadmanager::Position::GetAccZ, "C++: roadmanager::Position::GetAccZ() --> double");
		cl.def("GetHRate", (double (roadmanager::Position::*)()) &roadmanager::Position::GetHRate, "C++: roadmanager::Position::GetHRate() --> double");
		cl.def("GetHAcc", (double (roadmanager::Position::*)()) &roadmanager::Position::GetHAcc, "C++: roadmanager::Position::GetHAcc() --> double");
		cl.def("GetStatusBitMask", (int (roadmanager::Position::*)()) &roadmanager::Position::GetStatusBitMask, "C++: roadmanager::Position::GetStatusBitMask() --> int");
		cl.def("SetOrientationType", (void (roadmanager::Position::*)(enum roadmanager::Position::OrientationType)) &roadmanager::Position::SetOrientationType, "C++: roadmanager::Position::SetOrientationType(enum roadmanager::Position::OrientationType) --> void", pybind11::arg("type"));
		cl.def("SetSnapLaneTypes", (void (roadmanager::Position::*)(int)) &roadmanager::Position::SetSnapLaneTypes, "		Specify which lane types the position object snaps to (is aware of)\n		\n\n A combination (bitmask) of lane types\n		\n\n -\n\nC++: roadmanager::Position::SetSnapLaneTypes(int) --> void", pybind11::arg("laneTypeMask"));
		cl.def("CopyRMPos", (void (roadmanager::Position::*)(class roadmanager::Position *)) &roadmanager::Position::CopyRMPos, "C++: roadmanager::Position::CopyRMPos(class roadmanager::Position *) --> void", pybind11::arg("from"));
		cl.def("PrintTrackPos", (void (roadmanager::Position::*)()) &roadmanager::Position::PrintTrackPos, "C++: roadmanager::Position::PrintTrackPos() --> void");
		cl.def("PrintLanePos", (void (roadmanager::Position::*)()) &roadmanager::Position::PrintLanePos, "C++: roadmanager::Position::PrintLanePos() --> void");
		cl.def("PrintInertialPos", (void (roadmanager::Position::*)()) &roadmanager::Position::PrintInertialPos, "C++: roadmanager::Position::PrintInertialPos() --> void");
		cl.def("Print", (void (roadmanager::Position::*)()) &roadmanager::Position::Print, "C++: roadmanager::Position::Print() --> void");
		cl.def("PrintXY", (void (roadmanager::Position::*)()) &roadmanager::Position::PrintXY, "C++: roadmanager::Position::PrintXY() --> void");
		cl.def("IsOffRoad", (bool (roadmanager::Position::*)()) &roadmanager::Position::IsOffRoad, "C++: roadmanager::Position::IsOffRoad() --> bool");
		cl.def("ReplaceObjectRefs", (void (roadmanager::Position::*)(class roadmanager::Position *, class roadmanager::Position *)) &roadmanager::Position::ReplaceObjectRefs, "C++: roadmanager::Position::ReplaceObjectRefs(class roadmanager::Position *, class roadmanager::Position *) --> void", pybind11::arg("pos1"), pybind11::arg("pos2"));
		cl.def("assign", (class roadmanager::Position & (roadmanager::Position::*)(const class roadmanager::Position &)) &roadmanager::Position::operator=, "C++: roadmanager::Position::operator=(const class roadmanager::Position &) --> class roadmanager::Position &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}

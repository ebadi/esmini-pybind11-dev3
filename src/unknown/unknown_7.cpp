#include <iterator>
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

void bind_unknown_unknown_7(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // roadmanager::LaneRoadLaneConnection file: line:920
		pybind11::class_<roadmanager::LaneRoadLaneConnection, std::shared_ptr<roadmanager::LaneRoadLaneConnection>> cl(M("roadmanager"), "LaneRoadLaneConnection", "");
		cl.def( pybind11::init( [](){ return new roadmanager::LaneRoadLaneConnection(); } ) );
		cl.def( pybind11::init<int, int, int>(), pybind11::arg("lane_id"), pybind11::arg("connecting_road_id"), pybind11::arg("connecting_lane_id") );

		cl.def_readwrite("contact_point_", &roadmanager::LaneRoadLaneConnection::contact_point_);
		cl.def("SetLane", (void (roadmanager::LaneRoadLaneConnection::*)(int)) &roadmanager::LaneRoadLaneConnection::SetLane, "C++: roadmanager::LaneRoadLaneConnection::SetLane(int) --> void", pybind11::arg("id"));
		cl.def("SetConnectingRoad", (void (roadmanager::LaneRoadLaneConnection::*)(int)) &roadmanager::LaneRoadLaneConnection::SetConnectingRoad, "C++: roadmanager::LaneRoadLaneConnection::SetConnectingRoad(int) --> void", pybind11::arg("id"));
		cl.def("SetConnectingLane", (void (roadmanager::LaneRoadLaneConnection::*)(int)) &roadmanager::LaneRoadLaneConnection::SetConnectingLane, "C++: roadmanager::LaneRoadLaneConnection::SetConnectingLane(int) --> void", pybind11::arg("id"));
		cl.def("GetLaneId", (int (roadmanager::LaneRoadLaneConnection::*)()) &roadmanager::LaneRoadLaneConnection::GetLaneId, "C++: roadmanager::LaneRoadLaneConnection::GetLaneId() --> int");
		cl.def("GetConnectingRoadId", (int (roadmanager::LaneRoadLaneConnection::*)()) &roadmanager::LaneRoadLaneConnection::GetConnectingRoadId, "C++: roadmanager::LaneRoadLaneConnection::GetConnectingRoadId() --> int");
		cl.def("GetConnectinglaneId", (int (roadmanager::LaneRoadLaneConnection::*)()) &roadmanager::LaneRoadLaneConnection::GetConnectinglaneId, "C++: roadmanager::LaneRoadLaneConnection::GetConnectinglaneId() --> int");
	}
	{ // roadmanager::JunctionLaneLink file: line:941
		pybind11::class_<roadmanager::JunctionLaneLink, std::shared_ptr<roadmanager::JunctionLaneLink>> cl(M("roadmanager"), "JunctionLaneLink", "");
		cl.def( pybind11::init<int, int>(), pybind11::arg("from"), pybind11::arg("to") );

		cl.def_readwrite("from_", &roadmanager::JunctionLaneLink::from_);
		cl.def_readwrite("to_", &roadmanager::JunctionLaneLink::to_);
		cl.def("Print", (void (roadmanager::JunctionLaneLink::*)()) &roadmanager::JunctionLaneLink::Print, "C++: roadmanager::JunctionLaneLink::Print() --> void");
	}
	{ // roadmanager::Connection file: line:950
		pybind11::class_<roadmanager::Connection, std::shared_ptr<roadmanager::Connection>> cl(M("roadmanager"), "Connection", "");
		cl.def( pybind11::init<class roadmanager::Road *, class roadmanager::Road *, enum roadmanager::ContactPointType>(), pybind11::arg("incoming_road"), pybind11::arg("connecting_road"), pybind11::arg("contact_point") );

		cl.def( pybind11::init( [](roadmanager::Connection const &o){ return new roadmanager::Connection(o); } ) );
		cl.def("GetNumberOfLaneLinks", (int (roadmanager::Connection::*)()) &roadmanager::Connection::GetNumberOfLaneLinks, "C++: roadmanager::Connection::GetNumberOfLaneLinks() --> int");
		cl.def("GetLaneLink", (class roadmanager::JunctionLaneLink * (roadmanager::Connection::*)(int)) &roadmanager::Connection::GetLaneLink, "C++: roadmanager::Connection::GetLaneLink(int) --> class roadmanager::JunctionLaneLink *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetConnectingLaneId", (int (roadmanager::Connection::*)(int)) &roadmanager::Connection::GetConnectingLaneId, "C++: roadmanager::Connection::GetConnectingLaneId(int) --> int", pybind11::arg("incoming_lane_id"));
		cl.def("GetIncomingRoad", (class roadmanager::Road * (roadmanager::Connection::*)()) &roadmanager::Connection::GetIncomingRoad, "C++: roadmanager::Connection::GetIncomingRoad() --> class roadmanager::Road *", pybind11::return_value_policy::automatic);
		cl.def("GetConnectingRoad", (class roadmanager::Road * (roadmanager::Connection::*)()) &roadmanager::Connection::GetConnectingRoad, "C++: roadmanager::Connection::GetConnectingRoad() --> class roadmanager::Road *", pybind11::return_value_policy::automatic);
		cl.def("GetContactPoint", (enum roadmanager::ContactPointType (roadmanager::Connection::*)()) &roadmanager::Connection::GetContactPoint, "C++: roadmanager::Connection::GetContactPoint() --> enum roadmanager::ContactPointType");
		cl.def("AddJunctionLaneLink", (void (roadmanager::Connection::*)(int, int)) &roadmanager::Connection::AddJunctionLaneLink, "C++: roadmanager::Connection::AddJunctionLaneLink(int, int) --> void", pybind11::arg("from"), pybind11::arg("to"));
		cl.def("Print", (void (roadmanager::Connection::*)()) &roadmanager::Connection::Print, "C++: roadmanager::Connection::Print() --> void");
	}
	{ // roadmanager::Junction file: line:971
		pybind11::class_<roadmanager::Junction, std::shared_ptr<roadmanager::Junction>> cl(M("roadmanager"), "Junction", "");
		cl.def( pybind11::init<int, std::string>(), pybind11::arg("id"), pybind11::arg("name") );

		cl.def( pybind11::init( [](roadmanager::Junction const &o){ return new roadmanager::Junction(o); } ) );
		cl.def("GetId", (int (roadmanager::Junction::*)()) &roadmanager::Junction::GetId, "C++: roadmanager::Junction::GetId() --> int");
		cl.def("GetName", (std::string (roadmanager::Junction::*)()) &roadmanager::Junction::GetName, "C++: roadmanager::Junction::GetName() --> std::string");
		cl.def("GetNumberOfConnections", (int (roadmanager::Junction::*)()) &roadmanager::Junction::GetNumberOfConnections, "C++: roadmanager::Junction::GetNumberOfConnections() --> int");
		cl.def("GetNumberOfRoadConnections", (int (roadmanager::Junction::*)(int, int)) &roadmanager::Junction::GetNumberOfRoadConnections, "C++: roadmanager::Junction::GetNumberOfRoadConnections(int, int) --> int", pybind11::arg("roadId"), pybind11::arg("laneId"));
		cl.def("GetRoadConnectionByIdx", [](roadmanager::Junction &o, int const & a0, int const & a1, int const & a2) -> roadmanager::LaneRoadLaneConnection { return o.GetRoadConnectionByIdx(a0, a1, a2); }, "", pybind11::arg("roadId"), pybind11::arg("laneId"), pybind11::arg("idx"));
		cl.def("GetRoadConnectionByIdx", (class roadmanager::LaneRoadLaneConnection (roadmanager::Junction::*)(int, int, int, int)) &roadmanager::Junction::GetRoadConnectionByIdx, "C++: roadmanager::Junction::GetRoadConnectionByIdx(int, int, int, int) --> class roadmanager::LaneRoadLaneConnection", pybind11::arg("roadId"), pybind11::arg("laneId"), pybind11::arg("idx"), pybind11::arg("laneTypeMask"));
		cl.def("AddConnection", (void (roadmanager::Junction::*)(class roadmanager::Connection *)) &roadmanager::Junction::AddConnection, "C++: roadmanager::Junction::AddConnection(class roadmanager::Connection *) --> void", pybind11::arg("connection"));
		cl.def("GetNoConnectionsFromRoadId", (int (roadmanager::Junction::*)(int)) &roadmanager::Junction::GetNoConnectionsFromRoadId, "C++: roadmanager::Junction::GetNoConnectionsFromRoadId(int) --> int", pybind11::arg("incomingRoadId"));
		cl.def("GetConnectionByIdx", (class roadmanager::Connection * (roadmanager::Junction::*)(int)) &roadmanager::Junction::GetConnectionByIdx, "C++: roadmanager::Junction::GetConnectionByIdx(int) --> class roadmanager::Connection *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetConnectingRoadIdFromIncomingRoadId", (int (roadmanager::Junction::*)(int, int)) &roadmanager::Junction::GetConnectingRoadIdFromIncomingRoadId, "C++: roadmanager::Junction::GetConnectingRoadIdFromIncomingRoadId(int, int) --> int", pybind11::arg("incomingRoadId"), pybind11::arg("index"));
		cl.def("Print", (void (roadmanager::Junction::*)()) &roadmanager::Junction::Print, "C++: roadmanager::Junction::Print() --> void");
	}
	{ // roadmanager::OpenDrive file: line:1000
		pybind11::class_<roadmanager::OpenDrive, std::shared_ptr<roadmanager::OpenDrive>> cl(M("roadmanager"), "OpenDrive", "");
		cl.def( pybind11::init( [](){ return new roadmanager::OpenDrive(); } ) );
		cl.def( pybind11::init<const char *>(), pybind11::arg("filename") );

		cl.def( pybind11::init( [](roadmanager::OpenDrive const &o){ return new roadmanager::OpenDrive(o); } ) );
		cl.def("LoadOpenDriveFile", [](roadmanager::OpenDrive &o, const char * a0) -> bool { return o.LoadOpenDriveFile(a0); }, "", pybind11::arg("filename"));
		cl.def("LoadOpenDriveFile", (bool (roadmanager::OpenDrive::*)(const char *, bool)) &roadmanager::OpenDrive::LoadOpenDriveFile, "		Load a road network, specified in the OpenDRIVE file format\n		\n\n OpenDRIVE file\n		\n\n If true any old road data will be erased, else new will be added to the old\n\nC++: roadmanager::OpenDrive::LoadOpenDriveFile(const char *, bool) --> bool", pybind11::arg("filename"), pybind11::arg("replace"));
		cl.def("InitGlobalLaneIds", (void (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::InitGlobalLaneIds, "		Initialize the global ids for lanes\n\nC++: roadmanager::OpenDrive::InitGlobalLaneIds() --> void");
		cl.def("GetOpenDriveFilename", (std::string (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::GetOpenDriveFilename, "		Get the filename of currently loaded OpenDRIVE file\n\nC++: roadmanager::OpenDrive::GetOpenDriveFilename() --> std::string");
		cl.def("SetRoadOSI", (bool (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::SetRoadOSI, "		Setting information based on the OSI standards for OpenDrive elements\n\nC++: roadmanager::OpenDrive::SetRoadOSI() --> bool");
		cl.def("SetLaneOSIPoints", (void (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::SetLaneOSIPoints, "C++: roadmanager::OpenDrive::SetLaneOSIPoints() --> void");
		cl.def("SetRoadMarkOSIPoints", (void (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::SetRoadMarkOSIPoints, "C++: roadmanager::OpenDrive::SetRoadMarkOSIPoints() --> void");
		cl.def("SetLaneBoundaryPoints", (void (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::SetLaneBoundaryPoints, "		Checks all lanes - if a lane has RoadMarks it does nothing. If a lane does not have roadmarks \n		then it creates a LaneBoundary following the lane border (left border for left lanes, right border for right lanes)\n\nC++: roadmanager::OpenDrive::SetLaneBoundaryPoints() --> void");
		cl.def("GetRoadById", (class roadmanager::Road * (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetRoadById, "		Retrieve a road segment specified by road ID \n		\n\n road ID as specified in the OpenDRIVE file\n\nC++: roadmanager::OpenDrive::GetRoadById(int) --> class roadmanager::Road *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("GetRoadByIdx", (class roadmanager::Road * (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetRoadByIdx, "		Retrieve a road segment specified by road vector element index\n		useful for iterating over all available road segments, e.g:\n		for (int i = 0; i < GetNumOfRoads(); i++)\n		{\n			int n_lanes = GetRoadyIdx(i)->GetNumberOfLanes();\n		...\n		\n\n index into the vector of roads\n\nC++: roadmanager::OpenDrive::GetRoadByIdx(int) --> class roadmanager::Road *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetGeometryByIdx", (class roadmanager::Geometry * (roadmanager::OpenDrive::*)(int, int)) &roadmanager::OpenDrive::GetGeometryByIdx, "C++: roadmanager::OpenDrive::GetGeometryByIdx(int, int) --> class roadmanager::Geometry *", pybind11::return_value_policy::automatic, pybind11::arg("road_idx"), pybind11::arg("geom_idx"));
		cl.def("GetTrackIdxById", (int (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetTrackIdxById, "C++: roadmanager::OpenDrive::GetTrackIdxById(int) --> int", pybind11::arg("id"));
		cl.def("GetTrackIdByIdx", (int (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetTrackIdByIdx, "C++: roadmanager::OpenDrive::GetTrackIdByIdx(int) --> int", pybind11::arg("idx"));
		cl.def("GetNumOfRoads", (int (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::GetNumOfRoads, "C++: roadmanager::OpenDrive::GetNumOfRoads() --> int");
		cl.def("GetJunctionById", (class roadmanager::Junction * (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetJunctionById, "C++: roadmanager::OpenDrive::GetJunctionById(int) --> class roadmanager::Junction *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("GetJunctionByIdx", (class roadmanager::Junction * (roadmanager::OpenDrive::*)(int)) &roadmanager::OpenDrive::GetJunctionByIdx, "C++: roadmanager::OpenDrive::GetJunctionByIdx(int) --> class roadmanager::Junction *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumOfJunctions", (int (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::GetNumOfJunctions, "C++: roadmanager::OpenDrive::GetNumOfJunctions() --> int");
		cl.def("IsDirectlyConnected", (int (roadmanager::OpenDrive::*)(int, int, double &)) &roadmanager::OpenDrive::IsDirectlyConnected, "		Check if two roads are connected directly\n		\n\n Id of the first road\n		\n\n Id of the second road\n		\n\n if connected, the angle between road 2 and road 1 is returned here\n		\n\n 0 if not connected, -1 if road 2 is the predecessor of road 1, +1 if road 2 is the successor of road 1\n\nC++: roadmanager::OpenDrive::IsDirectlyConnected(int, int, double &) --> int", pybind11::arg("road1_id"), pybind11::arg("road2_id"), pybind11::arg("angle"));
		cl.def("IsIndirectlyConnected", [](roadmanager::OpenDrive &o, int const & a0, int const & a1, int *& a2, int *& a3) -> bool { return o.IsIndirectlyConnected(a0, a1, a2, a3); }, "", pybind11::arg("road1_id"), pybind11::arg("road2_id"), pybind11::arg("connecting_road_id"), pybind11::arg("connecting_lane_id"));
		cl.def("IsIndirectlyConnected", [](roadmanager::OpenDrive &o, int const & a0, int const & a1, int *& a2, int *& a3, int const & a4) -> bool { return o.IsIndirectlyConnected(a0, a1, a2, a3, a4); }, "", pybind11::arg("road1_id"), pybind11::arg("road2_id"), pybind11::arg("connecting_road_id"), pybind11::arg("connecting_lane_id"), pybind11::arg("lane1_id"));
		cl.def("IsIndirectlyConnected", (bool (roadmanager::OpenDrive::*)(int, int, int *&, int *&, int, int)) &roadmanager::OpenDrive::IsIndirectlyConnected, "C++: roadmanager::OpenDrive::IsIndirectlyConnected(int, int, int *&, int *&, int, int) --> bool", pybind11::arg("road1_id"), pybind11::arg("road2_id"), pybind11::arg("connecting_road_id"), pybind11::arg("connecting_lane_id"), pybind11::arg("lane1_id"), pybind11::arg("lane2_id"));
		cl.def("CheckConnections", (int (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::CheckConnections, "		Add any missing connections so that road connectivity is two-ways\n		Look at all road connections, and make sure they are defined both ways\n		\n\n index into the vector of roads\n		\n\n number of added connections\n\nC++: roadmanager::OpenDrive::CheckConnections() --> int");
		cl.def("CheckLink", (int (roadmanager::OpenDrive::*)(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType)) &roadmanager::OpenDrive::CheckLink, "C++: roadmanager::OpenDrive::CheckLink(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType) --> int", pybind11::arg("road"), pybind11::arg("link"), pybind11::arg("expected_contact_point_type"));
		cl.def("CheckConnectedRoad", (int (roadmanager::OpenDrive::*)(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType, class roadmanager::RoadLink *)) &roadmanager::OpenDrive::CheckConnectedRoad, "C++: roadmanager::OpenDrive::CheckConnectedRoad(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType, class roadmanager::RoadLink *) --> int", pybind11::arg("road"), pybind11::arg("link"), pybind11::arg("expected_contact_point_type"), pybind11::arg("link2"));
		cl.def("CheckJunctionConnection", (int (roadmanager::OpenDrive::*)(class roadmanager::Junction *, class roadmanager::Connection *)) &roadmanager::OpenDrive::CheckJunctionConnection, "C++: roadmanager::OpenDrive::CheckJunctionConnection(class roadmanager::Junction *, class roadmanager::Connection *) --> int", pybind11::arg("junction"), pybind11::arg("connection"));
		cl.def("ContactPointType2Str", (std::string (roadmanager::OpenDrive::*)(enum roadmanager::ContactPointType)) &roadmanager::OpenDrive::ContactPointType2Str, "C++: roadmanager::OpenDrive::ContactPointType2Str(enum roadmanager::ContactPointType) --> std::string", pybind11::arg("type"));
		cl.def("ElementType2Str", (std::string (roadmanager::OpenDrive::*)(roadmanager::RoadLink::ElementType)) &roadmanager::OpenDrive::ElementType2Str, "C++: roadmanager::OpenDrive::ElementType2Str(roadmanager::RoadLink::ElementType) --> std::string", pybind11::arg("type"));
		cl.def("Print", (void (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::Print, "C++: roadmanager::OpenDrive::Print() --> void");
	}
}

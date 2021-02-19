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

void bind_unknown_unknown_9(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // roadmanager::Route file: line:1649
		pybind11::class_<roadmanager::Route, std::shared_ptr<roadmanager::Route>> cl(M("roadmanager"), "Route", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Route(); } ) );
		cl.def( pybind11::init( [](roadmanager::Route const &o){ return new roadmanager::Route(o); } ) );
		cl.def_readwrite("waypoint_", &roadmanager::Route::waypoint_);
		cl.def_readwrite("name_", &roadmanager::Route::name_);
		cl.def("AddWaypoint", (int (roadmanager::Route::*)(class roadmanager::Position *)) &roadmanager::Route::AddWaypoint, "		Adds a waypoint to the route. One waypoint per road. At most one junction between waypoints.\n		\n\n A regular position created with road, lane or world coordinates\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Route::AddWaypoint(class roadmanager::Position *) --> int", pybind11::arg("position"));
		cl.def("GetWayPointDirection", (int (roadmanager::Route::*)(int)) &roadmanager::Route::GetWayPointDirection, "C++: roadmanager::Route::GetWayPointDirection(int) --> int", pybind11::arg("index"));
		cl.def("setName", (void (roadmanager::Route::*)(std::string)) &roadmanager::Route::setName, "C++: roadmanager::Route::setName(std::string) --> void", pybind11::arg("name"));
		cl.def("getName", (std::string (roadmanager::Route::*)()) &roadmanager::Route::getName, "C++: roadmanager::Route::getName() --> std::string");
		cl.def("GetLength", (double (roadmanager::Route::*)()) &roadmanager::Route::GetLength, "C++: roadmanager::Route::GetLength() --> double");
	}
	{ // roadmanager::RoadPath file: line:1673
		pybind11::class_<roadmanager::RoadPath, std::shared_ptr<roadmanager::RoadPath>> cl(M("roadmanager"), "RoadPath", "");
		cl.def( pybind11::init<class roadmanager::Position *, class roadmanager::Position *>(), pybind11::arg("startPos"), pybind11::arg("targetPos") );

		cl.def( pybind11::init( [](roadmanager::RoadPath const &o){ return new roadmanager::RoadPath(o); } ) );
		cl.def_readwrite("visited_", &roadmanager::RoadPath::visited_);
		cl.def_readwrite("unvisited_", &roadmanager::RoadPath::unvisited_);
		cl.def_readwrite("direction_", &roadmanager::RoadPath::direction_);
		cl.def("Calculate", (int (roadmanager::RoadPath::*)(double &)) &roadmanager::RoadPath::Calculate, "		Calculate shortest path between starting position and target position, \n		using Dijkstra's algorithm https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm\n		it also calculates the length of the path, or distance between the positions\n		positive distance means that the shortest path was found in forward direction\n		negative distance means that the shortest path goes in opposite direction from the heading of the starting position\n		\n\n A reference parameter into which the calculated path distance is stored\n		\n\n 0 on success, -1 on failure e.g. path not found\n\nC++: roadmanager::RoadPath::Calculate(double &) --> int", pybind11::arg("dist"));

		{ // roadmanager::RoadPath::PathNode file: line:1677
			auto & enclosing_class = cl;
			pybind11::class_<roadmanager::RoadPath::PathNode, std::shared_ptr<roadmanager::RoadPath::PathNode>> cl(enclosing_class, "PathNode", "");
			cl.def( pybind11::init( [](){ return new roadmanager::RoadPath::PathNode(); } ) );
			cl.def_readwrite("dist", &roadmanager::RoadPath::PathNode::dist);
		}

	}
	{ // roadmanager::Shape file: line:1711
		pybind11::class_<roadmanager::Shape, std::shared_ptr<roadmanager::Shape>> cl(M("roadmanager"), "Shape", "");
		cl.def( pybind11::init<roadmanager::Shape::ShapeType>(), pybind11::arg("type") );

		cl.def( pybind11::init( [](roadmanager::Shape const &o){ return new roadmanager::Shape(o); } ) );
		cl.def_readwrite("type_", &roadmanager::Shape::type_);
		cl.def_readwrite("length_", &roadmanager::Shape::length_);
		cl.def("assign", (class roadmanager::Shape & (roadmanager::Shape::*)(const class roadmanager::Shape &)) &roadmanager::Shape::operator=, "C++: roadmanager::Shape::operator=(const class roadmanager::Shape &) --> class roadmanager::Shape &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // roadmanager::PolyLine file: line:1728
		pybind11::class_<roadmanager::PolyLine, std::shared_ptr<roadmanager::PolyLine>, roadmanager::Shape> cl(M("roadmanager"), "PolyLine", "");
		cl.def( pybind11::init( [](){ return new roadmanager::PolyLine(); } ) );
		cl.def( pybind11::init( [](roadmanager::PolyLine const &o){ return new roadmanager::PolyLine(o); } ) );
		cl.def_readwrite("vertex_", &roadmanager::PolyLine::vertex_);
		cl.def("AddVertex", (void (roadmanager::PolyLine::*)(class roadmanager::Position, double, bool)) &roadmanager::PolyLine::AddVertex, "C++: roadmanager::PolyLine::AddVertex(class roadmanager::Position, double, bool) --> void", pybind11::arg("pos"), pybind11::arg("time"), pybind11::arg("calculateHeading"));

		{ // roadmanager::PolyLine::Vertex file: line:1732
			auto & enclosing_class = cl;
			pybind11::class_<roadmanager::PolyLine::Vertex, std::shared_ptr<roadmanager::PolyLine::Vertex>> cl(enclosing_class, "Vertex", "");
			cl.def( pybind11::init( [](){ return new roadmanager::PolyLine::Vertex(); } ) );
			cl.def( pybind11::init( [](roadmanager::PolyLine::Vertex const &o){ return new roadmanager::PolyLine::Vertex(o); } ) );
			cl.def_readwrite("pos_", &roadmanager::PolyLine::Vertex::pos_);
			cl.def_readwrite("time_", &roadmanager::PolyLine::Vertex::time_);
			cl.def_readwrite("calc_heading_", &roadmanager::PolyLine::Vertex::calc_heading_);
		}

	}
	{ // roadmanager::Clothoid file: line:1746
		pybind11::class_<roadmanager::Clothoid, std::shared_ptr<roadmanager::Clothoid>, roadmanager::Shape> cl(M("roadmanager"), "Clothoid", "");
		cl.def( pybind11::init<class roadmanager::Position, double, double, double, double, double>(), pybind11::arg("pos"), pybind11::arg("curv"), pybind11::arg("curvDot"), pybind11::arg("len"), pybind11::arg("tStart"), pybind11::arg("tEnd") );

		cl.def( pybind11::init( [](roadmanager::Clothoid const &o){ return new roadmanager::Clothoid(o); } ) );
		cl.def_readwrite("pos_", &roadmanager::Clothoid::pos_);
		cl.def_readwrite("t_start_", &roadmanager::Clothoid::t_start_);
		cl.def_readwrite("t_end_", &roadmanager::Clothoid::t_end_);
	}
	{ // roadmanager::Nurbs file: line:1765
		pybind11::class_<roadmanager::Nurbs, std::shared_ptr<roadmanager::Nurbs>, roadmanager::Shape> cl(M("roadmanager"), "Nurbs", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Nurbs(); } ) );
	}
	{ // roadmanager::Trajectory file: line:1771
		pybind11::class_<roadmanager::Trajectory, std::shared_ptr<roadmanager::Trajectory>> cl(M("roadmanager"), "Trajectory", "");
		cl.def( pybind11::init<class roadmanager::Shape *, std::string, bool>(), pybind11::arg("shape"), pybind11::arg("name"), pybind11::arg("closed") );

		cl.def( pybind11::init( [](){ return new roadmanager::Trajectory(); } ) );
		cl.def( pybind11::init( [](roadmanager::Trajectory const &o){ return new roadmanager::Trajectory(o); } ) );
		cl.def_readwrite("name_", &roadmanager::Trajectory::name_);
		cl.def_readwrite("closed_", &roadmanager::Trajectory::closed_);
		cl.def("Freeze", (void (roadmanager::Trajectory::*)()) &roadmanager::Trajectory::Freeze, "C++: roadmanager::Trajectory::Freeze() --> void");
	}
}

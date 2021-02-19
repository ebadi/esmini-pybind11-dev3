#include <pybind11/pybind11.h>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"
#include "pugixml.hpp"
#include <pybind11/stl.h>

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

int add(int i, int j) {
    return i + j;
}

int myesmini()
{
	roadmanager::Position pos;
	SE_Init("esmini/resources/xosc/cut-in.xosc", 0, 1, 0, 0);

	for (int i = 0; i < 500; i++)
	{
		SE_Step();
	}

	return 0;
}


class Pet
{
    public:
        Pet(const std::string &name, int hunger) : name(name), hunger(hunger) {}
        ~Pet() {}

        void go_for_a_walk() { hunger++; }
        const std::string &get_name() const { return name; }
        int get_hunger() const { return hunger; }

    private:
        std::string name;
        int hunger;
};

	class Polynomial
	{
	public:
		Polynomial() : a_(0), b_(0), c_(0), d_(0), p_scale_(1.0) {}
		Polynomial(double a, double b, double c, double d, double p_scale = 1) : a_(a), b_(b), c_(c), d_(d), p_scale_(p_scale) {}
		void Set(double a, double b, double c, double d, double p_scale = 1);
		void SetA(double a) { a_ = a; }
		void SetB(double b) { b_ = b; }
		void SetC(double c) { c_ = c; }
		void SetD(double d) { d_ = d; }
		double GetA() { return a_; }
		double GetB() { return b_; }
		double GetC() { return c_; }
		double GetD() { return d_; }
		double GetPscale() { return p_scale_; }
		double Evaluate(double s);
		double EvaluatePrim(double s);
		double EvaluatePrimPrim(double s);

	private:
		double a_;
		double b_;
		double c_;
		double d_;
		double p_scale_;
	};

namespace py = pybind11;
using namespace roadmanager;

PYBIND11_MODULE(cmake_example, m) {

    m.def("add", &add);
    m.def("myesmini", &myesmini);

    // bindings to Pet class
    py::class_<Pet>(m, "Pet")
        .def(py::init<const std::string &, int>())
        .def("go_for_a_walk", &Pet::go_for_a_walk)
        .def("get_hunger", &Pet::get_hunger)
        .def("get_name", &Pet::get_name);

    // bindings to Polynomial class
    py::class_<roadmanager::Polynomial>(m, "Polynomial")
        .def(py::init<>())
        .def(py::init<double , double , double , double , double>())
        .def("Set", &roadmanager::Polynomial::Set)
        .def("SetA", &roadmanager::Polynomial::SetA)
        .def("SetB", &roadmanager::Polynomial::SetB)
        .def("SetC", &roadmanager::Polynomial::SetC)
        .def("SetD", &roadmanager::Polynomial::SetD)
        .def("GetA", &roadmanager::Polynomial::GetA)
        .def("GetB", &roadmanager::Polynomial::GetB)
        .def("GetC", &roadmanager::Polynomial::GetC)
        .def("GetD", &roadmanager::Polynomial::GetD)
        .def("GetPscale", &roadmanager::Polynomial::GetPscale)
        .def("Evaluate", &roadmanager::Polynomial::Evaluate)
        .def("EvaluatePrim", &roadmanager::Polynomial::EvaluatePrim)
        .def("EvaluatePrimPrim", &roadmanager::Polynomial::EvaluatePrimPrim)
        ;

    // bindings to OSIPointStruct struct
    py::class_<roadmanager::OSIPoints::OSIPointStruct>(m, "OSIPointStruct")
        .def(py::init<double, double, double, double, double>())
        .def_readwrite("s", &roadmanager::OSIPoints::OSIPointStruct::s)
        .def_readwrite("x", &roadmanager::OSIPoints::OSIPointStruct::x)
        .def_readwrite("y", &roadmanager::OSIPoints::OSIPointStruct::y)
        .def_readwrite("z", &roadmanager::OSIPoints::OSIPointStruct::z)
        .def_readwrite("h", &roadmanager::OSIPoints::OSIPointStruct::h)
        ;

    // bindings to OSIPoints class
    py::class_<roadmanager::OSIPoints>(m, "OSIPoints")
        .def(py::init<>())
        .def(py::init<std::vector<roadmanager::OSIPoints::OSIPointStruct> >())
        .def("Set", &roadmanager::OSIPoints::Set)
        .def("GetPoints", &roadmanager::OSIPoints::GetPoints)
        .def("GetPoint", &roadmanager::OSIPoints::GetPoint)
        .def("GetXfromIdx", &roadmanager::OSIPoints::GetXfromIdx)
        .def("GetYfromIdx", &roadmanager::OSIPoints::GetYfromIdx)
        .def("GetZfromIdx", &roadmanager::OSIPoints::GetZfromIdx)
        .def("GetNumOfOSIPoints", &roadmanager::OSIPoints::GetNumOfOSIPoints)
        ;


    /*
    py::class_<roadmanager::Geometry>(m, "Geometry")
        .def(py::init<>())
        //.def(py::init<double , double , double , double , double, double>())

        ;
        */
/*
    py::enum_<roadmanager::Geometry::GeometryType>(m, "GeometryType")
        .value("GEOMETRY_TYPE_UNKNOWN", roadmanager::Geometry::GEOMETRY_TYPE_UNKNOWN)
        .value("GEOMETRY_TYPE_LINE", roadmanager::Geometry::GEOMETRY_TYPE_LINE)
        .value("GEOMETRY_TYPE_ARC", roadmanager::Geometry::GEOMETRY_TYPE_ARC)
        .value("GEOMETRY_TYPE_SPIRAL", roadmanager::Geometry::GEOMETRY_TYPE_SPIRAL)
        .value("GEOMETRY_TYPE_POLY3", roadmanager::Geometry::GEOMETRY_TYPE_POLY3)
        .value("GEOMETRY_TYPE_PARAM_POLY3", roadmanager::Geometry::GEOMETRY_TYPE_PARAM_POLY3)
        .export_values()
        ;
*/
/*
py::enum_<Pet::Kind>(pet, "Kind")
    .value("Dog", Pet::Kind::Dog)
    .value("Cat", Pet::Kind::Cat)
    .export_values();

		enum GeometryType
		{
			GEOMETRY_TYPE_UNKNOWN,
			GEOMETRY_TYPE_LINE,
			GEOMETRY_TYPE_ARC,
			GEOMETRY_TYPE_SPIRAL,
			GEOMETRY_TYPE_POLY3,
			GEOMETRY_TYPE_PARAM_POLY3,
		};

		Geometry() : s_(0.0), x_(0.0), y_(0), hdg_(0), length_(0), type_(GeometryType::GEOMETRY_TYPE_UNKNOWN) {}
		Geometry(double s, double x, double y, double hdg, double length, GeometryType type) :
			s_(s), x_(x), y_(y), hdg_(hdg), length_(length), type_(type) {}
		virtual ~Geometry() {}

		GeometryType GetType() { return type_; }
		double GetLength() { return length_; }
		virtual double GetX() { return x_; }
		void SetX(double x) { x_ = x; }
		virtual double GetY() { return y_; }
		void SetY(double y) { y_ = y; }
		virtual double GetHdg() { return GetAngleInInterval2PI(hdg_); }
		void SetHdg(double hdg) { hdg_ = hdg; }
		double GetS() { return s_; }
		virtual double EvaluateCurvatureDS(double ds) = 0;
		virtual void Print();
		virtual void EvaluateDS(double ds, double *x, double *y, double *h);
*/
#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}

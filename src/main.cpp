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

    // bindings to OSIPoints class
    py::class_<roadmanager::OSIPoints::OSIPointStruct>(m, "OSIPointStruct")
        .def(py::init<double, double, double, double, double>())
        ;

    // bindings to OSIPoints class
    py::class_<roadmanager::OSIPoints>(m, "OSIPoints")
        //.def(py::init<>())
        .def(py::init<std::vector<roadmanager::OSIPoints::OSIPointStruct> >())
        ;
/*
	class OSIPoints
	{
		public:
			typedef struct
			{
				double s;
				double x;
				double y;
				double z;
				double h;
			} OSIPointStruct;

			OSIPoints() {}
			OSIPoints(std::vector<OSIPointStruct> points) : point_(points) {}
			void Set(std::vector<OSIPointStruct> points) { point_ = points; }
			std::vector<OSIPointStruct>& GetPoints() {return point_;}
			OSIPointStruct& GetPoint(int i);
			double GetXfromIdx(int i);
			double GetYfromIdx(int i);
			double GetZfromIdx(int i);
			int GetNumOfOSIPoints();
*/
#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}

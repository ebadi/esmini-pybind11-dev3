#include <pybind11/pybind11.h>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"
#include "pugixml.hpp"

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

namespace py = pybind11;

PYBIND11_MODULE(cmake_example, m) {
    m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------

        .. currentmodule:: cmake_example

        .. autosummary::
           :toctree: _generate

           add
           subtract
    )pbdoc";

    m.def("add", &add, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc");

    m.def("myesmini", &myesmini, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc");

    // bindings to Pet class
    py::class_<Pet>(m, "Pet")
        .def(py::init<const std::string &, int>())
        .def("go_for_a_walk", &Pet::go_for_a_walk)
        .def("get_hunger", &Pet::get_hunger)
        .def("get_name", &Pet::get_name);

#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}

#include <pybind11/pybind11.h>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"
#include "pugixml.hpp"
#include <pybind11/stl.h>
#include <functional>

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace py = pybind11;
using namespace roadmanager;

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

PYBIND11_MODULE(cmake_example, m) {
	m.doc() = "cmake_examplemodule";

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

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





#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}

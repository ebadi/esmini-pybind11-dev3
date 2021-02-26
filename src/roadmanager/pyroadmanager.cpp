// File: unknown/unknown.cpp
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <vector>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// roadmanager::Geometry file: line:80
struct PyCallBack_roadmanager_Geometry : public roadmanager::Geometry {
	using roadmanager::Geometry::Geometry;

	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"Geometry::EvaluateCurvatureDS\"");
	}
	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Geometry::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Geometry *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Geometry::EvaluateDS(a0, a1, a2, a3);
	}
};

// roadmanager::Line file: line:121
struct PyCallBack_roadmanager_Line : public roadmanager::Line {
	using roadmanager::Line::Line;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Line::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Line::EvaluateDS(a0, a1, a2, a3);
	}
	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Line::EvaluateCurvatureDS(a0);
	}
	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Line *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
};

// roadmanager::Arc file: line:135
struct PyCallBack_roadmanager_Arc : public roadmanager::Arc {
	using roadmanager::Arc::Arc;

	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Arc::EvaluateCurvatureDS(a0);
	}
	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Arc::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Arc::EvaluateDS(a0, a1, a2, a3);
	}
	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Arc *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
};

// roadmanager::Spiral file: line:154
struct PyCallBack_roadmanager_Spiral : public roadmanager::Spiral {
	using roadmanager::Spiral::Spiral;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Spiral::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Spiral::EvaluateDS(a0, a1, a2, a3);
	}
	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Spiral::EvaluateCurvatureDS(a0);
	}
	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Spiral *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
};

// roadmanager::Poly3 file: line:195
struct PyCallBack_roadmanager_Poly3 : public roadmanager::Poly3 {
	using roadmanager::Poly3::Poly3;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Poly3::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Poly3::EvaluateDS(a0, a1, a2, a3);
	}
	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Poly3::EvaluateCurvatureDS(a0);
	}
	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::Poly3 *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
};

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // roadmanager::Polynomial file: line:27
		pybind11::class_<roadmanager::Polynomial, std::shared_ptr<roadmanager::Polynomial>> cl(M("roadmanager"), "Polynomial", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Polynomial(); } ) );
		cl.def( pybind11::init( [](double const & a0, double const & a1, double const & a2, double const & a3){ return new roadmanager::Polynomial(a0, a1, a2, a3); } ), "doc" , pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d"));
		cl.def( pybind11::init<double, double, double, double, double>(), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d"), pybind11::arg("p_scale") );

		cl.def( pybind11::init( [](roadmanager::Polynomial const &o){ return new roadmanager::Polynomial(o); } ) );
		cl.def("Set", [](roadmanager::Polynomial &o, double const & a0, double const & a1, double const & a2, double const & a3) -> void { return o.Set(a0, a1, a2, a3); }, "", pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d"));
		cl.def("Set", (void (roadmanager::Polynomial::*)(double, double, double, double, double)) &roadmanager::Polynomial::Set, "C++: roadmanager::Polynomial::Set(double, double, double, double, double) --> void", pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d"), pybind11::arg("p_scale"));
		cl.def("SetA", (void (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::SetA, "C++: roadmanager::Polynomial::SetA(double) --> void", pybind11::arg("a"));
		cl.def("SetB", (void (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::SetB, "C++: roadmanager::Polynomial::SetB(double) --> void", pybind11::arg("b"));
		cl.def("SetC", (void (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::SetC, "C++: roadmanager::Polynomial::SetC(double) --> void", pybind11::arg("c"));
		cl.def("SetD", (void (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::SetD, "C++: roadmanager::Polynomial::SetD(double) --> void", pybind11::arg("d"));
		cl.def("GetA", (double (roadmanager::Polynomial::*)()) &roadmanager::Polynomial::GetA, "C++: roadmanager::Polynomial::GetA() --> double");
		cl.def("GetB", (double (roadmanager::Polynomial::*)()) &roadmanager::Polynomial::GetB, "C++: roadmanager::Polynomial::GetB() --> double");
		cl.def("GetC", (double (roadmanager::Polynomial::*)()) &roadmanager::Polynomial::GetC, "C++: roadmanager::Polynomial::GetC() --> double");
		cl.def("GetD", (double (roadmanager::Polynomial::*)()) &roadmanager::Polynomial::GetD, "C++: roadmanager::Polynomial::GetD() --> double");
		cl.def("GetPscale", (double (roadmanager::Polynomial::*)()) &roadmanager::Polynomial::GetPscale, "C++: roadmanager::Polynomial::GetPscale() --> double");
		cl.def("Evaluate", (double (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::Evaluate, "C++: roadmanager::Polynomial::Evaluate(double) --> double", pybind11::arg("s"));
		cl.def("EvaluatePrim", (double (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::EvaluatePrim, "C++: roadmanager::Polynomial::EvaluatePrim(double) --> double", pybind11::arg("s"));
		cl.def("EvaluatePrimPrim", (double (roadmanager::Polynomial::*)(double)) &roadmanager::Polynomial::EvaluatePrimPrim, "C++: roadmanager::Polynomial::EvaluatePrimPrim(double) --> double", pybind11::arg("s"));
		cl.def("assign", (class roadmanager::Polynomial & (roadmanager::Polynomial::*)(const class roadmanager::Polynomial &)) &roadmanager::Polynomial::operator=, "C++: roadmanager::Polynomial::operator=(const class roadmanager::Polynomial &) --> class roadmanager::Polynomial &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // roadmanager::OSIPoints file: line:54
		pybind11::class_<roadmanager::OSIPoints, std::shared_ptr<roadmanager::OSIPoints>> cl(M("roadmanager"), "OSIPoints", "");
		cl.def( pybind11::init( [](){ return new roadmanager::OSIPoints(); } ) );
		cl.def( pybind11::init( [](roadmanager::OSIPoints const &o){ return new roadmanager::OSIPoints(o); } ) );
		cl.def("GetXfromIdx", (double (roadmanager::OSIPoints::*)(int)) &roadmanager::OSIPoints::GetXfromIdx, "C++: roadmanager::OSIPoints::GetXfromIdx(int) --> double", pybind11::arg("i"));
		cl.def("GetYfromIdx", (double (roadmanager::OSIPoints::*)(int)) &roadmanager::OSIPoints::GetYfromIdx, "C++: roadmanager::OSIPoints::GetYfromIdx(int) --> double", pybind11::arg("i"));
		cl.def("GetZfromIdx", (double (roadmanager::OSIPoints::*)(int)) &roadmanager::OSIPoints::GetZfromIdx, "C++: roadmanager::OSIPoints::GetZfromIdx(int) --> double", pybind11::arg("i"));
		cl.def("GetNumOfOSIPoints", (int (roadmanager::OSIPoints::*)()) &roadmanager::OSIPoints::GetNumOfOSIPoints, "C++: roadmanager::OSIPoints::GetNumOfOSIPoints() --> int");
	}
	{ // roadmanager::Geometry file: line:80
		pybind11::class_<roadmanager::Geometry, std::shared_ptr<roadmanager::Geometry>, PyCallBack_roadmanager_Geometry> cl(M("roadmanager"), "Geometry", "");
		cl.def( pybind11::init( [](){ return new PyCallBack_roadmanager_Geometry(); } ) );
		cl.def( pybind11::init<double, double, double, double, double, enum roadmanager::Geometry::GeometryType>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length"), pybind11::arg("type") );

		cl.def(pybind11::init<PyCallBack_roadmanager_Geometry const &>());

		pybind11::enum_<roadmanager::Geometry::GeometryType>(cl, "GeometryType", pybind11::arithmetic(), "")
			.value("GEOMETRY_TYPE_UNKNOWN", roadmanager::Geometry::GEOMETRY_TYPE_UNKNOWN)
			.value("GEOMETRY_TYPE_LINE", roadmanager::Geometry::GEOMETRY_TYPE_LINE)
			.value("GEOMETRY_TYPE_ARC", roadmanager::Geometry::GEOMETRY_TYPE_ARC)
			.value("GEOMETRY_TYPE_SPIRAL", roadmanager::Geometry::GEOMETRY_TYPE_SPIRAL)
			.value("GEOMETRY_TYPE_POLY3", roadmanager::Geometry::GEOMETRY_TYPE_POLY3)
			.value("GEOMETRY_TYPE_PARAM_POLY3", roadmanager::Geometry::GEOMETRY_TYPE_PARAM_POLY3)
			.export_values();

		cl.def("GetType", (enum roadmanager::Geometry::GeometryType (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetType, "C++: roadmanager::Geometry::GetType() --> enum roadmanager::Geometry::GeometryType");
		cl.def("GetLength", (double (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetLength, "C++: roadmanager::Geometry::GetLength() --> double");
		cl.def("GetX", (double (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetX, "C++: roadmanager::Geometry::GetX() --> double");
		cl.def("SetX", (void (roadmanager::Geometry::*)(double)) &roadmanager::Geometry::SetX, "C++: roadmanager::Geometry::SetX(double) --> void", pybind11::arg("x"));
		cl.def("GetY", (double (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetY, "C++: roadmanager::Geometry::GetY() --> double");
		cl.def("SetY", (void (roadmanager::Geometry::*)(double)) &roadmanager::Geometry::SetY, "C++: roadmanager::Geometry::SetY(double) --> void", pybind11::arg("y"));
		cl.def("GetHdg", (double (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetHdg, "C++: roadmanager::Geometry::GetHdg() --> double");
		cl.def("SetHdg", (void (roadmanager::Geometry::*)(double)) &roadmanager::Geometry::SetHdg, "C++: roadmanager::Geometry::SetHdg(double) --> void", pybind11::arg("hdg"));
		cl.def("GetS", (double (roadmanager::Geometry::*)()) &roadmanager::Geometry::GetS, "C++: roadmanager::Geometry::GetS() --> double");
		cl.def("EvaluateCurvatureDS", (double (roadmanager::Geometry::*)(double)) &roadmanager::Geometry::EvaluateCurvatureDS, "C++: roadmanager::Geometry::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("Print", (void (roadmanager::Geometry::*)()) &roadmanager::Geometry::Print, "C++: roadmanager::Geometry::Print() --> void");
		cl.def("EvaluateDS", (void (roadmanager::Geometry::*)(double, double *, double *, double *)) &roadmanager::Geometry::EvaluateDS, "C++: roadmanager::Geometry::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("assign", (class roadmanager::Geometry & (roadmanager::Geometry::*)(const class roadmanager::Geometry &)) &roadmanager::Geometry::operator=, "C++: roadmanager::Geometry::operator=(const class roadmanager::Geometry &) --> class roadmanager::Geometry &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // roadmanager::Line file: line:121
		pybind11::class_<roadmanager::Line, std::shared_ptr<roadmanager::Line>, PyCallBack_roadmanager_Line, roadmanager::Geometry> cl(M("roadmanager"), "Line", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Line(); }, [](){ return new PyCallBack_roadmanager_Line(); } ) );
		cl.def( pybind11::init<double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_Line const &o){ return new PyCallBack_roadmanager_Line(o); } ) );
		cl.def( pybind11::init( [](roadmanager::Line const &o){ return new roadmanager::Line(o); } ) );
		cl.def("Print", (void (roadmanager::Line::*)()) &roadmanager::Line::Print, "C++: roadmanager::Line::Print() --> void");
		cl.def("EvaluateDS", (void (roadmanager::Line::*)(double, double *, double *, double *)) &roadmanager::Line::EvaluateDS, "C++: roadmanager::Line::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("EvaluateCurvatureDS", (double (roadmanager::Line::*)(double)) &roadmanager::Line::EvaluateCurvatureDS, "C++: roadmanager::Line::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("assign", (class roadmanager::Line & (roadmanager::Line::*)(const class roadmanager::Line &)) &roadmanager::Line::operator=, "C++: roadmanager::Line::operator=(const class roadmanager::Line &) --> class roadmanager::Line &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // roadmanager::Arc file: line:135
		pybind11::class_<roadmanager::Arc, std::shared_ptr<roadmanager::Arc>, PyCallBack_roadmanager_Arc, roadmanager::Geometry> cl(M("roadmanager"), "Arc", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Arc(); }, [](){ return new PyCallBack_roadmanager_Arc(); } ) );
		cl.def( pybind11::init<double, double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length"), pybind11::arg("curvature") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_Arc const &o){ return new PyCallBack_roadmanager_Arc(o); } ) );
		cl.def( pybind11::init( [](roadmanager::Arc const &o){ return new roadmanager::Arc(o); } ) );
		cl.def("EvaluateCurvatureDS", (double (roadmanager::Arc::*)(double)) &roadmanager::Arc::EvaluateCurvatureDS, "C++: roadmanager::Arc::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("GetRadius", (double (roadmanager::Arc::*)()) &roadmanager::Arc::GetRadius, "C++: roadmanager::Arc::GetRadius() --> double");
		cl.def("GetCurvature", (double (roadmanager::Arc::*)()) &roadmanager::Arc::GetCurvature, "C++: roadmanager::Arc::GetCurvature() --> double");
		cl.def("Print", (void (roadmanager::Arc::*)()) &roadmanager::Arc::Print, "C++: roadmanager::Arc::Print() --> void");
		cl.def("EvaluateDS", (void (roadmanager::Arc::*)(double, double *, double *, double *)) &roadmanager::Arc::EvaluateDS, "C++: roadmanager::Arc::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("assign", (class roadmanager::Arc & (roadmanager::Arc::*)(const class roadmanager::Arc &)) &roadmanager::Arc::operator=, "C++: roadmanager::Arc::operator=(const class roadmanager::Arc &) --> class roadmanager::Arc &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // roadmanager::Spiral file: line:154
		pybind11::class_<roadmanager::Spiral, std::shared_ptr<roadmanager::Spiral>, PyCallBack_roadmanager_Spiral, roadmanager::Geometry> cl(M("roadmanager"), "Spiral", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Spiral(); }, [](){ return new PyCallBack_roadmanager_Spiral(); } ) );
		cl.def( pybind11::init<double, double, double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length"), pybind11::arg("curv_start"), pybind11::arg("curv_end") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_Spiral const &o){ return new PyCallBack_roadmanager_Spiral(o); } ) );
		cl.def( pybind11::init( [](roadmanager::Spiral const &o){ return new roadmanager::Spiral(o); } ) );
		cl.def("GetCurvStart", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetCurvStart, "C++: roadmanager::Spiral::GetCurvStart() --> double");
		cl.def("GetCurvEnd", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetCurvEnd, "C++: roadmanager::Spiral::GetCurvEnd() --> double");
		cl.def("GetX0", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetX0, "C++: roadmanager::Spiral::GetX0() --> double");
		cl.def("GetY0", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetY0, "C++: roadmanager::Spiral::GetY0() --> double");
		cl.def("GetH0", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetH0, "C++: roadmanager::Spiral::GetH0() --> double");
		cl.def("GetS0", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetS0, "C++: roadmanager::Spiral::GetS0() --> double");
		cl.def("GetCDot", (double (roadmanager::Spiral::*)()) &roadmanager::Spiral::GetCDot, "C++: roadmanager::Spiral::GetCDot() --> double");
		cl.def("SetX0", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetX0, "C++: roadmanager::Spiral::SetX0(double) --> void", pybind11::arg("x0"));
		cl.def("SetY0", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetY0, "C++: roadmanager::Spiral::SetY0(double) --> void", pybind11::arg("y0"));
		cl.def("SetH0", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetH0, "C++: roadmanager::Spiral::SetH0(double) --> void", pybind11::arg("h0"));
		cl.def("SetS0", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetS0, "C++: roadmanager::Spiral::SetS0(double) --> void", pybind11::arg("s0"));
		cl.def("SetCDot", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetCDot, "C++: roadmanager::Spiral::SetCDot(double) --> void", pybind11::arg("c_dot"));
		cl.def("Print", (void (roadmanager::Spiral::*)()) &roadmanager::Spiral::Print, "C++: roadmanager::Spiral::Print() --> void");
		cl.def("EvaluateDS", (void (roadmanager::Spiral::*)(double, double *, double *, double *)) &roadmanager::Spiral::EvaluateDS, "C++: roadmanager::Spiral::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("EvaluateCurvatureDS", (double (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::EvaluateCurvatureDS, "C++: roadmanager::Spiral::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("SetX", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetX, "C++: roadmanager::Spiral::SetX(double) --> void", pybind11::arg("x"));
		cl.def("SetY", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetY, "C++: roadmanager::Spiral::SetY(double) --> void", pybind11::arg("y"));
		cl.def("SetHdg", (void (roadmanager::Spiral::*)(double)) &roadmanager::Spiral::SetHdg, "C++: roadmanager::Spiral::SetHdg(double) --> void", pybind11::arg("h"));
		cl.def("assign", (class roadmanager::Spiral & (roadmanager::Spiral::*)(const class roadmanager::Spiral &)) &roadmanager::Spiral::operator=, "C++: roadmanager::Spiral::operator=(const class roadmanager::Spiral &) --> class roadmanager::Spiral &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // roadmanager::Poly3 file: line:195
		pybind11::class_<roadmanager::Poly3, std::shared_ptr<roadmanager::Poly3>, PyCallBack_roadmanager_Poly3, roadmanager::Geometry> cl(M("roadmanager"), "Poly3", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Poly3(); }, [](){ return new PyCallBack_roadmanager_Poly3(); } ) );
		cl.def( pybind11::init<double, double, double, double, double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length"), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_Poly3 const &o){ return new PyCallBack_roadmanager_Poly3(o); } ) );
		cl.def( pybind11::init( [](roadmanager::Poly3 const &o){ return new roadmanager::Poly3(o); } ) );
		cl.def_readwrite("poly3_", &roadmanager::Poly3::poly3_);
		cl.def("SetUMax", (void (roadmanager::Poly3::*)(double)) &roadmanager::Poly3::SetUMax, "C++: roadmanager::Poly3::SetUMax(double) --> void", pybind11::arg("umax"));
		cl.def("GetUMax", (double (roadmanager::Poly3::*)()) &roadmanager::Poly3::GetUMax, "C++: roadmanager::Poly3::GetUMax() --> double");
		cl.def("Print", (void (roadmanager::Poly3::*)()) &roadmanager::Poly3::Print, "C++: roadmanager::Poly3::Print() --> void");
		cl.def("GetPoly3", (class roadmanager::Polynomial (roadmanager::Poly3::*)()) &roadmanager::Poly3::GetPoly3, "C++: roadmanager::Poly3::GetPoly3() --> class roadmanager::Polynomial");
		cl.def("EvaluateDS", (void (roadmanager::Poly3::*)(double, double *, double *, double *)) &roadmanager::Poly3::EvaluateDS, "C++: roadmanager::Poly3::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("EvaluateCurvatureDS", (double (roadmanager::Poly3::*)(double)) &roadmanager::Poly3::EvaluateCurvatureDS, "C++: roadmanager::Poly3::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("assign", (class roadmanager::Poly3 & (roadmanager::Poly3::*)(const class roadmanager::Poly3 &)) &roadmanager::Poly3::operator=, "C++: roadmanager::Poly3::operator=(const class roadmanager::Poly3 &) --> class roadmanager::Poly3 &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


// File: unknown/unknown_1.cpp
#include <sstream> // __str__

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// roadmanager::ParamPoly3 file: line:217
struct PyCallBack_roadmanager_ParamPoly3 : public roadmanager::ParamPoly3 {
	using roadmanager::ParamPoly3::ParamPoly3;

	void Print() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "Print");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ParamPoly3::Print();
	}
	void EvaluateDS(double a0, double * a1, double * a2, double * a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "EvaluateDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ParamPoly3::EvaluateDS(a0, a1, a2, a3);
	}
	double EvaluateCurvatureDS(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "EvaluateCurvatureDS");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return ParamPoly3::EvaluateCurvatureDS(a0);
	}
	double GetX() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "GetX");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetX();
	}
	double GetY() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "GetY");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetY();
	}
	double GetHdg() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const roadmanager::ParamPoly3 *>(this), "GetHdg");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<double>::value) {
				static pybind11::detail::override_caster_t<double> caster;
				return pybind11::detail::cast_ref<double>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<double>(std::move(o));
		}
		return Geometry::GetHdg();
	}
};

void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // roadmanager::ParamPoly3 file: line:217
		pybind11::class_<roadmanager::ParamPoly3, std::shared_ptr<roadmanager::ParamPoly3>, PyCallBack_roadmanager_ParamPoly3, roadmanager::Geometry> cl(M("roadmanager"), "ParamPoly3", "");
		cl.def( pybind11::init( [](){ return new roadmanager::ParamPoly3(); }, [](){ return new PyCallBack_roadmanager_ParamPoly3(); } ) );
		cl.def( pybind11::init<double, double, double, double, double, double, double, double, double, double, double, double, double, enum roadmanager::ParamPoly3::PRangeType>(), pybind11::arg("s"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("hdg"), pybind11::arg("length"), pybind11::arg("aU"), pybind11::arg("bU"), pybind11::arg("cU"), pybind11::arg("dU"), pybind11::arg("aV"), pybind11::arg("bV"), pybind11::arg("cV"), pybind11::arg("dV"), pybind11::arg("p_range") );

		cl.def( pybind11::init( [](PyCallBack_roadmanager_ParamPoly3 const &o){ return new PyCallBack_roadmanager_ParamPoly3(o); } ) );
		cl.def( pybind11::init( [](roadmanager::ParamPoly3 const &o){ return new roadmanager::ParamPoly3(o); } ) );

		pybind11::enum_<roadmanager::ParamPoly3::PRangeType>(cl, "PRangeType", pybind11::arithmetic(), "")
			.value("P_RANGE_UNKNOWN", roadmanager::ParamPoly3::P_RANGE_UNKNOWN)
			.value("P_RANGE_NORMALIZED", roadmanager::ParamPoly3::P_RANGE_NORMALIZED)
			.value("P_RANGE_ARC_LENGTH", roadmanager::ParamPoly3::P_RANGE_ARC_LENGTH)
			.export_values();

		cl.def_readwrite("poly3U_", &roadmanager::ParamPoly3::poly3U_);
		cl.def_readwrite("poly3V_", &roadmanager::ParamPoly3::poly3V_);
		cl.def("Print", (void (roadmanager::ParamPoly3::*)()) &roadmanager::ParamPoly3::Print, "C++: roadmanager::ParamPoly3::Print() --> void");
		cl.def("GetPoly3U", (class roadmanager::Polynomial (roadmanager::ParamPoly3::*)()) &roadmanager::ParamPoly3::GetPoly3U, "C++: roadmanager::ParamPoly3::GetPoly3U() --> class roadmanager::Polynomial");
		cl.def("GetPoly3V", (class roadmanager::Polynomial (roadmanager::ParamPoly3::*)()) &roadmanager::ParamPoly3::GetPoly3V, "C++: roadmanager::ParamPoly3::GetPoly3V() --> class roadmanager::Polynomial");
		cl.def("EvaluateDS", (void (roadmanager::ParamPoly3::*)(double, double *, double *, double *)) &roadmanager::ParamPoly3::EvaluateDS, "C++: roadmanager::ParamPoly3::EvaluateDS(double, double *, double *, double *) --> void", pybind11::arg("ds"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("h"));
		cl.def("EvaluateCurvatureDS", (double (roadmanager::ParamPoly3::*)(double)) &roadmanager::ParamPoly3::EvaluateCurvatureDS, "C++: roadmanager::ParamPoly3::EvaluateCurvatureDS(double) --> double", pybind11::arg("ds"));
		cl.def("calcS2PMap", (void (roadmanager::ParamPoly3::*)(enum roadmanager::ParamPoly3::PRangeType)) &roadmanager::ParamPoly3::calcS2PMap, "C++: roadmanager::ParamPoly3::calcS2PMap(enum roadmanager::ParamPoly3::PRangeType) --> void", pybind11::arg("p_range"));
		cl.def("S2P", (double (roadmanager::ParamPoly3::*)(double)) &roadmanager::ParamPoly3::S2P, "C++: roadmanager::ParamPoly3::S2P(double) --> double", pybind11::arg("s"));
		cl.def("assign", (class roadmanager::ParamPoly3 & (roadmanager::ParamPoly3::*)(const class roadmanager::ParamPoly3 &)) &roadmanager::ParamPoly3::operator=, "C++: roadmanager::ParamPoly3::operator=(const class roadmanager::ParamPoly3 &) --> class roadmanager::ParamPoly3 &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // roadmanager::Elevation file: line:253
		pybind11::class_<roadmanager::Elevation, std::shared_ptr<roadmanager::Elevation>> cl(M("roadmanager"), "Elevation", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Elevation(); } ) );
		cl.def( pybind11::init<double, double, double, double, double>(), pybind11::arg("s"), pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d") );

		cl.def_readwrite("poly3_", &roadmanager::Elevation::poly3_);
		cl.def("GetS", (double (roadmanager::Elevation::*)()) &roadmanager::Elevation::GetS, "C++: roadmanager::Elevation::GetS() --> double");
		cl.def("SetLength", (void (roadmanager::Elevation::*)(double)) &roadmanager::Elevation::SetLength, "C++: roadmanager::Elevation::SetLength(double) --> void", pybind11::arg("length"));
		cl.def("GetLength", (double (roadmanager::Elevation::*)()) &roadmanager::Elevation::GetLength, "C++: roadmanager::Elevation::GetLength() --> double");
		cl.def("Print", (void (roadmanager::Elevation::*)()) &roadmanager::Elevation::Print, "C++: roadmanager::Elevation::Print() --> void");
	}
}


// File: unknown/unknown_2.cpp
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>
#include <vector>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
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
		cl.def( pybind11::init( [](roadmanager::LaneRoadMarkType const &o){ return new roadmanager::LaneRoadMarkType(o); } ) );
		cl.def("AddLine", (void (roadmanager::LaneRoadMarkType::*)(class roadmanager::LaneRoadMarkTypeLine *)) &roadmanager::LaneRoadMarkType::AddLine, "C++: roadmanager::LaneRoadMarkType::AddLine(class roadmanager::LaneRoadMarkTypeLine *) --> void", pybind11::arg("lane_roadMarkTypeLine"));
		cl.def("GetWidth", (double (roadmanager::LaneRoadMarkType::*)()) &roadmanager::LaneRoadMarkType::GetWidth, "C++: roadmanager::LaneRoadMarkType::GetWidth() --> double");
		cl.def("GetLaneRoadMarkTypeLineByIdx", (class roadmanager::LaneRoadMarkTypeLine * (roadmanager::LaneRoadMarkType::*)(int)) &roadmanager::LaneRoadMarkType::GetLaneRoadMarkTypeLineByIdx, "C++: roadmanager::LaneRoadMarkType::GetLaneRoadMarkTypeLineByIdx(int) --> class roadmanager::LaneRoadMarkTypeLine *", pybind11::return_value_policy::automatic, pybind11::arg("idx"));
		cl.def("GetNumberOfRoadMarkTypeLines", (int (roadmanager::LaneRoadMarkType::*)()) &roadmanager::LaneRoadMarkType::GetNumberOfRoadMarkTypeLines, "C++: roadmanager::LaneRoadMarkType::GetNumberOfRoadMarkTypeLines() --> int");
		//cl.def("Print", (void (roadmanager::LaneRoadMarkType::*)()) &roadmanager::LaneRoadMarkType::Print, "C++: roadmanager::LaneRoadMarkType::Print() --> void");
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


// File: unknown/unknown_3.cpp
#include <iterator>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M)
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
		cl.def( pybind11::init( [](roadmanager::Object const &o){ return new roadmanager::Object(o); } ) );

		pybind11::enum_<roadmanager::Object::Orientation>(cl, "Orientation", pybind11::arithmetic(), "")
			.value("POSITIVE", roadmanager::Object::POSITIVE)
			.value("NEGATIVE", roadmanager::Object::NEGATIVE)
			.value("NONE", roadmanager::Object::NONE)
			.export_values();

		cl.def("GetS", (double (roadmanager::Object::*)()) &roadmanager::Object::GetS, "C++: roadmanager::Object::GetS() --> double");
		cl.def("GetT", (double (roadmanager::Object::*)()) &roadmanager::Object::GetT, "C++: roadmanager::Object::GetT() --> double");
		cl.def("GetHOffset", (double (roadmanager::Object::*)()) &roadmanager::Object::GetHOffset, "C++: roadmanager::Object::GetHOffset() --> double");
		cl.def("GetZOffset", (double (roadmanager::Object::*)()) &roadmanager::Object::GetZOffset, "C++: roadmanager::Object::GetZOffset() --> double");
		cl.def("GetHeight", (double (roadmanager::Object::*)()) &roadmanager::Object::GetHeight, "C++: roadmanager::Object::GetHeight() --> double");
		cl.def("GetOrientation", (enum roadmanager::Object::Orientation (roadmanager::Object::*)()) &roadmanager::Object::GetOrientation, "C++: roadmanager::Object::GetOrientation() --> enum roadmanager::Object::Orientation");
	}
	{ // roadmanager::Road file: line:811
		pybind11::class_<roadmanager::Road, std::shared_ptr<roadmanager::Road>> cl(M("roadmanager"), "Road", "");
		cl.def( pybind11::init( [](roadmanager::Road const &o){ return new roadmanager::Road(o); } ) );
		cl.def("Print", (void (roadmanager::Road::*)()) &roadmanager::Road::Print, "C++: roadmanager::Road::Print() --> void");
		cl.def("SetId", (void (roadmanager::Road::*)(int)) &roadmanager::Road::SetId, "C++: roadmanager::Road::SetId(int) --> void", pybind11::arg("id"));
		cl.def("GetId", (int (roadmanager::Road::*)()) &roadmanager::Road::GetId, "C++: roadmanager::Road::GetId() --> int");
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


// File: unknown/unknown_4.cpp
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M)
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
		cl.def( pybind11::init( [](roadmanager::Junction const &o){ return new roadmanager::Junction(o); } ) );
		cl.def("GetId", (int (roadmanager::Junction::*)()) &roadmanager::Junction::GetId, "C++: roadmanager::Junction::GetId() --> int");
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
		//cl.def("IsIndirectlyConnected", [](roadmanager::OpenDrive &o, int const & a0, int const & a1, int *& a2, int *& a3) -> bool { return o.IsIndirectlyConnected(a0, a1, a2, a3); }, "", pybind11::arg("road1_id"), pybind11::arg("road2_id"), pybind11::arg("connecting_road_id"), pybind11::arg("connecting_lane_id"));
		//cl.def("IsIndirectlyConnected", [](roadmanager::OpenDrive &o, int const & a0, int const & a1, int *& a2, int *& a3, int const & a4) -> bool { return o.IsIndirectlyConnected(a0, a1, a2, a3, a4); }, "", pybind11::arg("road1_id"), pybind11::arg("road2_id"), pybind11::arg("connecting_road_id"), pybind11::arg("connecting_lane_id"), pybind11::arg("lane1_id"));
		//cl.def("IsIndirectlyConnected", (bool (roadmanager::OpenDrive::*)(int, int, int *&, int *&, int, int)) &roadmanager::OpenDrive::IsIndirectlyConnected, "C++: roadmanager::OpenDrive::IsIndirectlyConnected(int, int, int *&, int *&, int, int) --> bool", pybind11::arg("road1_id"), pybind11::arg("road2_id"), pybind11::arg("connecting_road_id"), pybind11::arg("connecting_lane_id"), pybind11::arg("lane1_id"), pybind11::arg("lane2_id"));
		cl.def("CheckConnections", (int (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::CheckConnections, "		Add any missing connections so that road connectivity is two-ways\n		Look at all road connections, and make sure they are defined both ways\n		\n\n index into the vector of roads\n		\n\n number of added connections\n\nC++: roadmanager::OpenDrive::CheckConnections() --> int");
		cl.def("CheckLink", (int (roadmanager::OpenDrive::*)(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType)) &roadmanager::OpenDrive::CheckLink, "C++: roadmanager::OpenDrive::CheckLink(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType) --> int", pybind11::arg("road"), pybind11::arg("link"), pybind11::arg("expected_contact_point_type"));
		cl.def("CheckConnectedRoad", (int (roadmanager::OpenDrive::*)(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType, class roadmanager::RoadLink *)) &roadmanager::OpenDrive::CheckConnectedRoad, "C++: roadmanager::OpenDrive::CheckConnectedRoad(class roadmanager::Road *, class roadmanager::RoadLink *, enum roadmanager::ContactPointType, class roadmanager::RoadLink *) --> int", pybind11::arg("road"), pybind11::arg("link"), pybind11::arg("expected_contact_point_type"), pybind11::arg("link2"));
		cl.def("CheckJunctionConnection", (int (roadmanager::OpenDrive::*)(class roadmanager::Junction *, class roadmanager::Connection *)) &roadmanager::OpenDrive::CheckJunctionConnection, "C++: roadmanager::OpenDrive::CheckJunctionConnection(class roadmanager::Junction *, class roadmanager::Connection *) --> int", pybind11::arg("junction"), pybind11::arg("connection"));
		cl.def("Print", (void (roadmanager::OpenDrive::*)()) &roadmanager::OpenDrive::Print, "C++: roadmanager::OpenDrive::Print() --> void");
	}
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


// File: unknown/unknown_5.cpp
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "esminiLib.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // roadmanager::Route file: line:1649
		pybind11::class_<roadmanager::Route, std::shared_ptr<roadmanager::Route>> cl(M("roadmanager"), "Route", "");
		cl.def( pybind11::init( [](){ return new roadmanager::Route(); } ) );
		cl.def( pybind11::init( [](roadmanager::Route const &o){ return new roadmanager::Route(o); } ) );
		cl.def_readwrite("waypoint_", &roadmanager::Route::waypoint_);
		cl.def_readwrite("name_", &roadmanager::Route::name_);
		cl.def("AddWaypoint", (int (roadmanager::Route::*)(class roadmanager::Position *)) &roadmanager::Route::AddWaypoint, "		Adds a waypoint to the route. One waypoint per road. At most one junction between waypoints.\n		\n\n A regular position created with road, lane or world coordinates\n		\n\n Non zero return value indicates error of some kind\n\nC++: roadmanager::Route::AddWaypoint(class roadmanager::Position *) --> int", pybind11::arg("position"));
		cl.def("GetWayPointDirection", (int (roadmanager::Route::*)(int)) &roadmanager::Route::GetWayPointDirection, "C++: roadmanager::Route::GetWayPointDirection(int) --> int", pybind11::arg("index"));
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
		cl.def( pybind11::init( [](){ return new roadmanager::Trajectory(); } ) );
		cl.def( pybind11::init( [](roadmanager::Trajectory const &o){ return new roadmanager::Trajectory(o); } ) );
		cl.def_readwrite("name_", &roadmanager::Trajectory::name_);
		cl.def_readwrite("closed_", &roadmanager::Trajectory::closed_);
		cl.def("Freeze", (void (roadmanager::Trajectory::*)()) &roadmanager::Trajectory::Freeze, "C++: roadmanager::Trajectory::Freeze() --> void");
	}
}


#include <map>
#include <memory>
#include <stdexcept>
#include <functional>
#include <string>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(pyroadmanager, root_module) {
	root_module.doc() = "pyroadmanager module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	std::vector< std::pair<std::string, std::string> > sub_modules {
		{"", "roadmanager"},
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule(p.second.c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_unknown_unknown(M);
	bind_unknown_unknown_1(M);
	bind_unknown_unknown_2(M);
	bind_unknown_unknown_3(M);
	bind_unknown_unknown_4(M);
	bind_unknown_unknown_5(M);

}

// Source list file: /home/wave/repositories/esmini-pybind11/src/roadmanager/pyroadmanager.sources
// pyroadmanager.cpp
// unknown/unknown.cpp
// unknown/unknown_1.cpp
// unknown/unknown_2.cpp
// unknown/unknown_3.cpp
// unknown/unknown_4.cpp
// unknown/unknown_5.cpp

// Modules list file: /home/wave/repositories/esmini-pybind11/src/roadmanager/pyroadmanager.modules
// roadmanager 

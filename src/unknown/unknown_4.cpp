#include <sstream> // __str__

#include <pybind11/pybind11.h>
#include <functional>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

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

void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
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

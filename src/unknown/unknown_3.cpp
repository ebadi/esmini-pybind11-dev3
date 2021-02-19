

#include <pybind11/pybind11.h>


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

void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M)
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
		cl.def( pybind11::init<class std::vector<roadmanager::OSIPoints::OSIPointStruct, class std::allocator<roadmanager::OSIPoints::OSIPointStruct> >>(), pybind11::arg("points") );

		cl.def( pybind11::init( [](roadmanager::OSIPoints const &o){ return new roadmanager::OSIPoints(o); } ) );
		cl.def("Set", (void (roadmanager::OSIPoints::*)(class std::vector<roadmanager::OSIPoints::OSIPointStruct, class std::allocator<roadmanager::OSIPoints::OSIPointStruct> >)) &roadmanager::OSIPoints::Set, "C++: roadmanager::OSIPoints::Set(class std::vector<roadmanager::OSIPoints::OSIPointStruct, class std::allocator<roadmanager::OSIPoints::OSIPointStruct> >) --> void", pybind11::arg("points"));
		cl.def("GetPoints", (class std::vector<roadmanager::OSIPoints::OSIPointStruct, class std::allocator<roadmanager::OSIPoints::OSIPointStruct> > & (roadmanager::OSIPoints::*)()) &roadmanager::OSIPoints::GetPoints, "C++: roadmanager::OSIPoints::GetPoints() --> class std::vector<roadmanager::OSIPoints::OSIPointStruct, class std::allocator<roadmanager::OSIPoints::OSIPointStruct> > &", pybind11::return_value_policy::automatic);
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
}

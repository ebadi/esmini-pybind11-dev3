#include <ios>
#include <istream>
#include <iterator>
#include <memory>
#include <ostream>
#include <sstream> // __str__
#include <streambuf>
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

// pugi::xml_tree_walker file: line:918
struct PyCallBack_pugi_xml_tree_walker : public pugi::xml_tree_walker {
	using pugi::xml_tree_walker::xml_tree_walker;

	bool begin(class pugi::xml_node & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const pugi::xml_tree_walker *>(this), "begin");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return xml_tree_walker::begin(a0);
	}
	bool for_each(class pugi::xml_node & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const pugi::xml_tree_walker *>(this), "for_each");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"xml_tree_walker::for_each\"");
	}
	bool end(class pugi::xml_node & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const pugi::xml_tree_walker *>(this), "end");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::override_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return xml_tree_walker::end(a0);
	}
};

void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // pugi::xml_text file: line:702
		pybind11::class_<pugi::xml_text, std::shared_ptr<pugi::xml_text>> cl(M("pugi"), "xml_text", "");
		cl.def( pybind11::init( [](){ return new pugi::xml_text(); } ) );
		cl.def("empty", (bool (pugi::xml_text::*)() const) &pugi::xml_text::empty, "C++: pugi::xml_text::empty() const --> bool");
		cl.def("get", (const char * (pugi::xml_text::*)() const) &pugi::xml_text::get, "C++: pugi::xml_text::get() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("as_string", [](pugi::xml_text const &o) -> const char * { return o.as_string(); }, "", pybind11::return_value_policy::automatic);
		cl.def("as_string", (const char * (pugi::xml_text::*)(const char *) const) &pugi::xml_text::as_string, "C++: pugi::xml_text::as_string(const char *) const --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("def"));
		cl.def("as_int", [](pugi::xml_text const &o) -> int { return o.as_int(); }, "");
		cl.def("as_int", (int (pugi::xml_text::*)(int) const) &pugi::xml_text::as_int, "C++: pugi::xml_text::as_int(int) const --> int", pybind11::arg("def"));
		cl.def("as_uint", [](pugi::xml_text const &o) -> unsigned int { return o.as_uint(); }, "");
		cl.def("as_uint", (unsigned int (pugi::xml_text::*)(unsigned int) const) &pugi::xml_text::as_uint, "C++: pugi::xml_text::as_uint(unsigned int) const --> unsigned int", pybind11::arg("def"));
		cl.def("as_double", [](pugi::xml_text const &o) -> double { return o.as_double(); }, "");
		cl.def("as_double", (double (pugi::xml_text::*)(double) const) &pugi::xml_text::as_double, "C++: pugi::xml_text::as_double(double) const --> double", pybind11::arg("def"));
		cl.def("as_float", [](pugi::xml_text const &o) -> float { return o.as_float(); }, "");
		cl.def("as_float", (float (pugi::xml_text::*)(float) const) &pugi::xml_text::as_float, "C++: pugi::xml_text::as_float(float) const --> float", pybind11::arg("def"));
		cl.def("as_llong", [](pugi::xml_text const &o) -> long long { return o.as_llong(); }, "");
		cl.def("as_llong", (long long (pugi::xml_text::*)(long long) const) &pugi::xml_text::as_llong, "C++: pugi::xml_text::as_llong(long long) const --> long long", pybind11::arg("def"));
		cl.def("as_ullong", [](pugi::xml_text const &o) -> unsigned long long { return o.as_ullong(); }, "");
		cl.def("as_ullong", (unsigned long long (pugi::xml_text::*)(unsigned long long) const) &pugi::xml_text::as_ullong, "C++: pugi::xml_text::as_ullong(unsigned long long) const --> unsigned long long", pybind11::arg("def"));
		cl.def("as_bool", [](pugi::xml_text const &o) -> bool { return o.as_bool(); }, "");
		cl.def("as_bool", (bool (pugi::xml_text::*)(bool) const) &pugi::xml_text::as_bool, "C++: pugi::xml_text::as_bool(bool) const --> bool", pybind11::arg("def"));
		cl.def("set", (bool (pugi::xml_text::*)(const char *)) &pugi::xml_text::set, "C++: pugi::xml_text::set(const char *) --> bool", pybind11::arg("rhs"));
		cl.def("set", (bool (pugi::xml_text::*)(int)) &pugi::xml_text::set, "C++: pugi::xml_text::set(int) --> bool", pybind11::arg("rhs"));
		cl.def("set", (bool (pugi::xml_text::*)(unsigned int)) &pugi::xml_text::set, "C++: pugi::xml_text::set(unsigned int) --> bool", pybind11::arg("rhs"));
		cl.def("set", (bool (pugi::xml_text::*)(long)) &pugi::xml_text::set, "C++: pugi::xml_text::set(long) --> bool", pybind11::arg("rhs"));
		cl.def("set", (bool (pugi::xml_text::*)(unsigned long)) &pugi::xml_text::set, "C++: pugi::xml_text::set(unsigned long) --> bool", pybind11::arg("rhs"));
		cl.def("set", (bool (pugi::xml_text::*)(double)) &pugi::xml_text::set, "C++: pugi::xml_text::set(double) --> bool", pybind11::arg("rhs"));
		cl.def("set", (bool (pugi::xml_text::*)(float)) &pugi::xml_text::set, "C++: pugi::xml_text::set(float) --> bool", pybind11::arg("rhs"));
		cl.def("set", (bool (pugi::xml_text::*)(bool)) &pugi::xml_text::set, "C++: pugi::xml_text::set(bool) --> bool", pybind11::arg("rhs"));
		cl.def("set", (bool (pugi::xml_text::*)(long long)) &pugi::xml_text::set, "C++: pugi::xml_text::set(long long) --> bool", pybind11::arg("rhs"));
		cl.def("set", (bool (pugi::xml_text::*)(unsigned long long)) &pugi::xml_text::set, "C++: pugi::xml_text::set(unsigned long long) --> bool", pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_text & (pugi::xml_text::*)(const char *)) &pugi::xml_text::operator=, "C++: pugi::xml_text::operator=(const char *) --> class pugi::xml_text &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_text & (pugi::xml_text::*)(int)) &pugi::xml_text::operator=, "C++: pugi::xml_text::operator=(int) --> class pugi::xml_text &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_text & (pugi::xml_text::*)(unsigned int)) &pugi::xml_text::operator=, "C++: pugi::xml_text::operator=(unsigned int) --> class pugi::xml_text &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_text & (pugi::xml_text::*)(long)) &pugi::xml_text::operator=, "C++: pugi::xml_text::operator=(long) --> class pugi::xml_text &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_text & (pugi::xml_text::*)(unsigned long)) &pugi::xml_text::operator=, "C++: pugi::xml_text::operator=(unsigned long) --> class pugi::xml_text &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_text & (pugi::xml_text::*)(double)) &pugi::xml_text::operator=, "C++: pugi::xml_text::operator=(double) --> class pugi::xml_text &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_text & (pugi::xml_text::*)(float)) &pugi::xml_text::operator=, "C++: pugi::xml_text::operator=(float) --> class pugi::xml_text &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_text & (pugi::xml_text::*)(bool)) &pugi::xml_text::operator=, "C++: pugi::xml_text::operator=(bool) --> class pugi::xml_text &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_text & (pugi::xml_text::*)(long long)) &pugi::xml_text::operator=, "C++: pugi::xml_text::operator=(long long) --> class pugi::xml_text &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_text & (pugi::xml_text::*)(unsigned long long)) &pugi::xml_text::operator=, "C++: pugi::xml_text::operator=(unsigned long long) --> class pugi::xml_text &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("data", (class pugi::xml_node (pugi::xml_text::*)() const) &pugi::xml_text::data, "C++: pugi::xml_text::data() const --> class pugi::xml_node");
	}
	{ // pugi::xml_node_iterator file: line:791
		pybind11::class_<pugi::xml_node_iterator, std::shared_ptr<pugi::xml_node_iterator>> cl(M("pugi"), "xml_node_iterator", "");
		cl.def( pybind11::init( [](){ return new pugi::xml_node_iterator(); } ) );
		cl.def( pybind11::init<const class pugi::xml_node &>(), pybind11::arg("node") );

		cl.def( pybind11::init( [](pugi::xml_node_iterator const &o){ return new pugi::xml_node_iterator(o); } ) );
		cl.def("__eq__", (bool (pugi::xml_node_iterator::*)(const class pugi::xml_node_iterator &) const) &pugi::xml_node_iterator::operator==, "C++: pugi::xml_node_iterator::operator==(const class pugi::xml_node_iterator &) const --> bool", pybind11::arg("rhs"));
		cl.def("__ne__", (bool (pugi::xml_node_iterator::*)(const class pugi::xml_node_iterator &) const) &pugi::xml_node_iterator::operator!=, "C++: pugi::xml_node_iterator::operator!=(const class pugi::xml_node_iterator &) const --> bool", pybind11::arg("rhs"));
		cl.def("__mul__", (class pugi::xml_node & (pugi::xml_node_iterator::*)() const) &pugi::xml_node_iterator::operator*, "C++: pugi::xml_node_iterator::operator*() const --> class pugi::xml_node &", pybind11::return_value_policy::automatic);
		cl.def("plus_plus", (const class pugi::xml_node_iterator & (pugi::xml_node_iterator::*)()) &pugi::xml_node_iterator::operator++, "C++: pugi::xml_node_iterator::operator++() --> const class pugi::xml_node_iterator &", pybind11::return_value_policy::automatic);
		cl.def("plus_plus", (class pugi::xml_node_iterator (pugi::xml_node_iterator::*)(int)) &pugi::xml_node_iterator::operator++, "C++: pugi::xml_node_iterator::operator++(int) --> class pugi::xml_node_iterator", pybind11::arg(""));
		cl.def("minus_minus", (const class pugi::xml_node_iterator & (pugi::xml_node_iterator::*)()) &pugi::xml_node_iterator::operator--, "C++: pugi::xml_node_iterator::operator--() --> const class pugi::xml_node_iterator &", pybind11::return_value_policy::automatic);
		cl.def("minus_minus", (class pugi::xml_node_iterator (pugi::xml_node_iterator::*)(int)) &pugi::xml_node_iterator::operator--, "C++: pugi::xml_node_iterator::operator--(int) --> class pugi::xml_node_iterator", pybind11::arg(""));
		cl.def("assign", (class pugi::xml_node_iterator & (pugi::xml_node_iterator::*)(const class pugi::xml_node_iterator &)) &pugi::xml_node_iterator::operator=, "C++: pugi::xml_node_iterator::operator=(const class pugi::xml_node_iterator &) --> class pugi::xml_node_iterator &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // pugi::xml_attribute_iterator file: line:833
		pybind11::class_<pugi::xml_attribute_iterator, std::shared_ptr<pugi::xml_attribute_iterator>> cl(M("pugi"), "xml_attribute_iterator", "");
		cl.def( pybind11::init( [](){ return new pugi::xml_attribute_iterator(); } ) );
		cl.def( pybind11::init<const class pugi::xml_attribute &, const class pugi::xml_node &>(), pybind11::arg("attr"), pybind11::arg("parent") );

		cl.def( pybind11::init( [](pugi::xml_attribute_iterator const &o){ return new pugi::xml_attribute_iterator(o); } ) );
		cl.def("__eq__", (bool (pugi::xml_attribute_iterator::*)(const class pugi::xml_attribute_iterator &) const) &pugi::xml_attribute_iterator::operator==, "C++: pugi::xml_attribute_iterator::operator==(const class pugi::xml_attribute_iterator &) const --> bool", pybind11::arg("rhs"));
		cl.def("__ne__", (bool (pugi::xml_attribute_iterator::*)(const class pugi::xml_attribute_iterator &) const) &pugi::xml_attribute_iterator::operator!=, "C++: pugi::xml_attribute_iterator::operator!=(const class pugi::xml_attribute_iterator &) const --> bool", pybind11::arg("rhs"));
		cl.def("__mul__", (class pugi::xml_attribute & (pugi::xml_attribute_iterator::*)() const) &pugi::xml_attribute_iterator::operator*, "C++: pugi::xml_attribute_iterator::operator*() const --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic);
		cl.def("plus_plus", (const class pugi::xml_attribute_iterator & (pugi::xml_attribute_iterator::*)()) &pugi::xml_attribute_iterator::operator++, "C++: pugi::xml_attribute_iterator::operator++() --> const class pugi::xml_attribute_iterator &", pybind11::return_value_policy::automatic);
		cl.def("plus_plus", (class pugi::xml_attribute_iterator (pugi::xml_attribute_iterator::*)(int)) &pugi::xml_attribute_iterator::operator++, "C++: pugi::xml_attribute_iterator::operator++(int) --> class pugi::xml_attribute_iterator", pybind11::arg(""));
		cl.def("minus_minus", (const class pugi::xml_attribute_iterator & (pugi::xml_attribute_iterator::*)()) &pugi::xml_attribute_iterator::operator--, "C++: pugi::xml_attribute_iterator::operator--() --> const class pugi::xml_attribute_iterator &", pybind11::return_value_policy::automatic);
		cl.def("minus_minus", (class pugi::xml_attribute_iterator (pugi::xml_attribute_iterator::*)(int)) &pugi::xml_attribute_iterator::operator--, "C++: pugi::xml_attribute_iterator::operator--(int) --> class pugi::xml_attribute_iterator", pybind11::arg(""));
		cl.def("assign", (class pugi::xml_attribute_iterator & (pugi::xml_attribute_iterator::*)(const class pugi::xml_attribute_iterator &)) &pugi::xml_attribute_iterator::operator=, "C++: pugi::xml_attribute_iterator::operator=(const class pugi::xml_attribute_iterator &) --> class pugi::xml_attribute_iterator &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // pugi::xml_tree_walker file: line:918
		pybind11::class_<pugi::xml_tree_walker, std::shared_ptr<pugi::xml_tree_walker>, PyCallBack_pugi_xml_tree_walker> cl(M("pugi"), "xml_tree_walker", "");
		cl.def( pybind11::init( [](){ return new PyCallBack_pugi_xml_tree_walker(); } ) );
		cl.def("begin", (bool (pugi::xml_tree_walker::*)(class pugi::xml_node &)) &pugi::xml_tree_walker::begin, "C++: pugi::xml_tree_walker::begin(class pugi::xml_node &) --> bool", pybind11::arg("node"));
		cl.def("for_each", (bool (pugi::xml_tree_walker::*)(class pugi::xml_node &)) &pugi::xml_tree_walker::for_each, "C++: pugi::xml_tree_walker::for_each(class pugi::xml_node &) --> bool", pybind11::arg("node"));
		cl.def("end", (bool (pugi::xml_tree_walker::*)(class pugi::xml_node &)) &pugi::xml_tree_walker::end, "C++: pugi::xml_tree_walker::end(class pugi::xml_node &) --> bool", pybind11::arg("node"));
		cl.def("assign", (class pugi::xml_tree_walker & (pugi::xml_tree_walker::*)(const class pugi::xml_tree_walker &)) &pugi::xml_tree_walker::operator=, "C++: pugi::xml_tree_walker::operator=(const class pugi::xml_tree_walker &) --> class pugi::xml_tree_walker &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // pugi::xml_parse_result file: line:971
		pybind11::class_<pugi::xml_parse_result, std::shared_ptr<pugi::xml_parse_result>> cl(M("pugi"), "xml_parse_result", "");
		cl.def( pybind11::init( [](){ return new pugi::xml_parse_result(); } ) );
		cl.def_readwrite("status", &pugi::xml_parse_result::status);
		cl.def_readwrite("offset", &pugi::xml_parse_result::offset);
		cl.def_readwrite("encoding", &pugi::xml_parse_result::encoding);
		cl.def("description", (const char * (pugi::xml_parse_result::*)() const) &pugi::xml_parse_result::description, "C++: pugi::xml_parse_result::description() const --> const char *", pybind11::return_value_policy::automatic);
	}
	// pugi::xpath_value_type file: line:1073
	pybind11::enum_<pugi::xpath_value_type>(M("pugi"), "xpath_value_type", pybind11::arithmetic(), "")
		.value("xpath_type_none", pugi::xpath_type_none)
		.value("xpath_type_node_set", pugi::xpath_type_node_set)
		.value("xpath_type_number", pugi::xpath_type_number)
		.value("xpath_type_string", pugi::xpath_type_string)
		.value("xpath_type_boolean", pugi::xpath_type_boolean)
		.export_values();

;

	{ // pugi::xpath_parse_result file: line:1083
		pybind11::class_<pugi::xpath_parse_result, std::shared_ptr<pugi::xpath_parse_result>> cl(M("pugi"), "xpath_parse_result", "");
		cl.def( pybind11::init( [](){ return new pugi::xpath_parse_result(); } ) );
		cl.def( pybind11::init( [](pugi::xpath_parse_result const &o){ return new pugi::xpath_parse_result(o); } ) );
		cl.def_readwrite("offset", &pugi::xpath_parse_result::offset);
		cl.def("description", (const char * (pugi::xpath_parse_result::*)() const) &pugi::xpath_parse_result::description, "C++: pugi::xpath_parse_result::description() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("assign", (struct pugi::xpath_parse_result & (pugi::xpath_parse_result::*)(const struct pugi::xpath_parse_result &)) &pugi::xpath_parse_result::operator=, "C++: pugi::xpath_parse_result::operator=(const struct pugi::xpath_parse_result &) --> struct pugi::xpath_parse_result &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // pugi::xpath_variable file: line:1102
		pybind11::class_<pugi::xpath_variable, std::shared_ptr<pugi::xpath_variable>> cl(M("pugi"), "xpath_variable", "");
		cl.def("name", (const char * (pugi::xpath_variable::*)() const) &pugi::xpath_variable::name, "C++: pugi::xpath_variable::name() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("type", (enum pugi::xpath_value_type (pugi::xpath_variable::*)() const) &pugi::xpath_variable::type, "C++: pugi::xpath_variable::type() const --> enum pugi::xpath_value_type");
		cl.def("get_boolean", (bool (pugi::xpath_variable::*)() const) &pugi::xpath_variable::get_boolean, "C++: pugi::xpath_variable::get_boolean() const --> bool");
		cl.def("get_number", (double (pugi::xpath_variable::*)() const) &pugi::xpath_variable::get_number, "C++: pugi::xpath_variable::get_number() const --> double");
		cl.def("get_string", (const char * (pugi::xpath_variable::*)() const) &pugi::xpath_variable::get_string, "C++: pugi::xpath_variable::get_string() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("get_node_set", (const class pugi::xpath_node_set & (pugi::xpath_variable::*)() const) &pugi::xpath_variable::get_node_set, "C++: pugi::xpath_variable::get_node_set() const --> const class pugi::xpath_node_set &", pybind11::return_value_policy::automatic);
		cl.def("set", (bool (pugi::xpath_variable::*)(bool)) &pugi::xpath_variable::set, "C++: pugi::xpath_variable::set(bool) --> bool", pybind11::arg("value"));
		cl.def("set", (bool (pugi::xpath_variable::*)(double)) &pugi::xpath_variable::set, "C++: pugi::xpath_variable::set(double) --> bool", pybind11::arg("value"));
		cl.def("set", (bool (pugi::xpath_variable::*)(const char *)) &pugi::xpath_variable::set, "C++: pugi::xpath_variable::set(const char *) --> bool", pybind11::arg("value"));
		cl.def("set", (bool (pugi::xpath_variable::*)(const class pugi::xpath_node_set &)) &pugi::xpath_variable::set, "C++: pugi::xpath_variable::set(const class pugi::xpath_node_set &) --> bool", pybind11::arg("value"));
	}
}

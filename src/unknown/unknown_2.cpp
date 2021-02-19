#include <iterator>
#include <memory>
#include <ostream>
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

void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // pugi::xpath_variable_set file: line:1137
		pybind11::class_<pugi::xpath_variable_set, std::shared_ptr<pugi::xpath_variable_set>> cl(M("pugi"), "xpath_variable_set", "");
		cl.def( pybind11::init( [](){ return new pugi::xpath_variable_set(); } ) );
		cl.def( pybind11::init( [](pugi::xpath_variable_set const &o){ return new pugi::xpath_variable_set(o); } ) );
		cl.def("assign", (class pugi::xpath_variable_set & (pugi::xpath_variable_set::*)(const class pugi::xpath_variable_set &)) &pugi::xpath_variable_set::operator=, "C++: pugi::xpath_variable_set::operator=(const class pugi::xpath_variable_set &) --> class pugi::xpath_variable_set &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("add", (class pugi::xpath_variable * (pugi::xpath_variable_set::*)(const char *, enum pugi::xpath_value_type)) &pugi::xpath_variable_set::add, "C++: pugi::xpath_variable_set::add(const char *, enum pugi::xpath_value_type) --> class pugi::xpath_variable *", pybind11::return_value_policy::automatic, pybind11::arg("name"), pybind11::arg("type"));
		cl.def("set", (bool (pugi::xpath_variable_set::*)(const char *, bool)) &pugi::xpath_variable_set::set, "C++: pugi::xpath_variable_set::set(const char *, bool) --> bool", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("set", (bool (pugi::xpath_variable_set::*)(const char *, double)) &pugi::xpath_variable_set::set, "C++: pugi::xpath_variable_set::set(const char *, double) --> bool", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("set", (bool (pugi::xpath_variable_set::*)(const char *, const char *)) &pugi::xpath_variable_set::set, "C++: pugi::xpath_variable_set::set(const char *, const char *) --> bool", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("set", (bool (pugi::xpath_variable_set::*)(const char *, const class pugi::xpath_node_set &)) &pugi::xpath_variable_set::set, "C++: pugi::xpath_variable_set::set(const char *, const class pugi::xpath_node_set &) --> bool", pybind11::arg("name"), pybind11::arg("value"));
		cl.def("get", (class pugi::xpath_variable * (pugi::xpath_variable_set::*)(const char *)) &pugi::xpath_variable_set::get, "C++: pugi::xpath_variable_set::get(const char *) --> class pugi::xpath_variable *", pybind11::return_value_policy::automatic, pybind11::arg("name"));
	}
	{ // pugi::xpath_query file: line:1180
		pybind11::class_<pugi::xpath_query, std::shared_ptr<pugi::xpath_query>> cl(M("pugi"), "xpath_query", "");
		cl.def( pybind11::init( [](const char * a0){ return new pugi::xpath_query(a0); } ), "doc" , pybind11::arg("query"));
		cl.def( pybind11::init<const char *, class pugi::xpath_variable_set *>(), pybind11::arg("query"), pybind11::arg("variables") );

		cl.def( pybind11::init( [](){ return new pugi::xpath_query(); } ) );
		cl.def("return_type", (enum pugi::xpath_value_type (pugi::xpath_query::*)() const) &pugi::xpath_query::return_type, "C++: pugi::xpath_query::return_type() const --> enum pugi::xpath_value_type");
		cl.def("evaluate_boolean", (bool (pugi::xpath_query::*)(const class pugi::xpath_node &) const) &pugi::xpath_query::evaluate_boolean, "C++: pugi::xpath_query::evaluate_boolean(const class pugi::xpath_node &) const --> bool", pybind11::arg("n"));
		cl.def("evaluate_number", (double (pugi::xpath_query::*)(const class pugi::xpath_node &) const) &pugi::xpath_query::evaluate_number, "C++: pugi::xpath_query::evaluate_number(const class pugi::xpath_node &) const --> double", pybind11::arg("n"));
		cl.def("evaluate_string", (std::string (pugi::xpath_query::*)(const class pugi::xpath_node &) const) &pugi::xpath_query::evaluate_string, "C++: pugi::xpath_query::evaluate_string(const class pugi::xpath_node &) const --> std::string", pybind11::arg("n"));
		cl.def("evaluate_string", (unsigned long (pugi::xpath_query::*)(char *, unsigned long, const class pugi::xpath_node &) const) &pugi::xpath_query::evaluate_string, "C++: pugi::xpath_query::evaluate_string(char *, unsigned long, const class pugi::xpath_node &) const --> unsigned long", pybind11::arg("buffer"), pybind11::arg("capacity"), pybind11::arg("n"));
		cl.def("evaluate_node_set", (class pugi::xpath_node_set (pugi::xpath_query::*)(const class pugi::xpath_node &) const) &pugi::xpath_query::evaluate_node_set, "C++: pugi::xpath_query::evaluate_node_set(const class pugi::xpath_node &) const --> class pugi::xpath_node_set", pybind11::arg("n"));
		cl.def("evaluate_node", (class pugi::xpath_node (pugi::xpath_query::*)(const class pugi::xpath_node &) const) &pugi::xpath_query::evaluate_node, "C++: pugi::xpath_query::evaluate_node(const class pugi::xpath_node &) const --> class pugi::xpath_node", pybind11::arg("n"));
		cl.def("result", (const struct pugi::xpath_parse_result & (pugi::xpath_query::*)() const) &pugi::xpath_query::result, "C++: pugi::xpath_query::result() const --> const struct pugi::xpath_parse_result &", pybind11::return_value_policy::automatic);
	}
	{ // pugi::xpath_node file: line:1273
		pybind11::class_<pugi::xpath_node, std::shared_ptr<pugi::xpath_node>> cl(M("pugi"), "xpath_node", "");
		cl.def( pybind11::init( [](){ return new pugi::xpath_node(); } ) );
		cl.def( pybind11::init<const class pugi::xml_node &>(), pybind11::arg("node") );

		cl.def( pybind11::init<const class pugi::xml_attribute &, const class pugi::xml_node &>(), pybind11::arg("attribute"), pybind11::arg("parent") );

		cl.def("node", (class pugi::xml_node (pugi::xpath_node::*)() const) &pugi::xpath_node::node, "C++: pugi::xpath_node::node() const --> class pugi::xml_node");
		cl.def("attribute", (class pugi::xml_attribute (pugi::xpath_node::*)() const) &pugi::xpath_node::attribute, "C++: pugi::xpath_node::attribute() const --> class pugi::xml_attribute");
		cl.def("parent", (class pugi::xml_node (pugi::xpath_node::*)() const) &pugi::xpath_node::parent, "C++: pugi::xpath_node::parent() const --> class pugi::xml_node");
		cl.def("__eq__", (bool (pugi::xpath_node::*)(const class pugi::xpath_node &) const) &pugi::xpath_node::operator==, "C++: pugi::xpath_node::operator==(const class pugi::xpath_node &) const --> bool", pybind11::arg("n"));
		cl.def("__ne__", (bool (pugi::xpath_node::*)(const class pugi::xpath_node &) const) &pugi::xpath_node::operator!=, "C++: pugi::xpath_node::operator!=(const class pugi::xpath_node &) const --> bool", pybind11::arg("n"));
	}
	{ // pugi::xpath_node_set file: line:1314
		pybind11::class_<pugi::xpath_node_set, std::shared_ptr<pugi::xpath_node_set>> cl(M("pugi"), "xpath_node_set", "");
		cl.def( pybind11::init( [](){ return new pugi::xpath_node_set(); } ) );
		cl.def( pybind11::init( [](const class pugi::xpath_node * a0, const class pugi::xpath_node * a1){ return new pugi::xpath_node_set(a0, a1); } ), "doc" , pybind11::arg("begin"), pybind11::arg("end"));
		cl.def( pybind11::init<const class pugi::xpath_node *, const class pugi::xpath_node *, enum pugi::xpath_node_set::type_t>(), pybind11::arg("begin"), pybind11::arg("end"), pybind11::arg("type") );

		cl.def( pybind11::init( [](pugi::xpath_node_set const &o){ return new pugi::xpath_node_set(o); } ) );

		pybind11::enum_<pugi::xpath_node_set::type_t>(cl, "type_t", pybind11::arithmetic(), "")
			.value("type_unsorted", pugi::xpath_node_set::type_unsorted)
			.value("type_sorted", pugi::xpath_node_set::type_sorted)
			.value("type_sorted_reverse", pugi::xpath_node_set::type_sorted_reverse)
			.export_values();

		cl.def("assign", (class pugi::xpath_node_set & (pugi::xpath_node_set::*)(const class pugi::xpath_node_set &)) &pugi::xpath_node_set::operator=, "C++: pugi::xpath_node_set::operator=(const class pugi::xpath_node_set &) --> class pugi::xpath_node_set &", pybind11::return_value_policy::automatic, pybind11::arg("ns"));
		cl.def("type", (enum pugi::xpath_node_set::type_t (pugi::xpath_node_set::*)() const) &pugi::xpath_node_set::type, "C++: pugi::xpath_node_set::type() const --> enum pugi::xpath_node_set::type_t");
		cl.def("size", (unsigned long (pugi::xpath_node_set::*)() const) &pugi::xpath_node_set::size, "C++: pugi::xpath_node_set::size() const --> unsigned long");
		cl.def("__getitem__", (const class pugi::xpath_node & (pugi::xpath_node_set::*)(unsigned long) const) &pugi::xpath_node_set::operator[], "C++: pugi::xpath_node_set::operator[](unsigned long) const --> const class pugi::xpath_node &", pybind11::return_value_policy::automatic, pybind11::arg("index"));
		cl.def("begin", (const class pugi::xpath_node * (pugi::xpath_node_set::*)() const) &pugi::xpath_node_set::begin, "C++: pugi::xpath_node_set::begin() const --> const class pugi::xpath_node *", pybind11::return_value_policy::automatic);
		cl.def("end", (const class pugi::xpath_node * (pugi::xpath_node_set::*)() const) &pugi::xpath_node_set::end, "C++: pugi::xpath_node_set::end() const --> const class pugi::xpath_node *", pybind11::return_value_policy::automatic);
		cl.def("sort", [](pugi::xpath_node_set &o) -> void { return o.sort(); }, "");
		cl.def("sort", (void (pugi::xpath_node_set::*)(bool)) &pugi::xpath_node_set::sort, "C++: pugi::xpath_node_set::sort(bool) --> void", pybind11::arg("reverse"));
		cl.def("first", (class pugi::xpath_node (pugi::xpath_node_set::*)() const) &pugi::xpath_node_set::first, "C++: pugi::xpath_node_set::first() const --> class pugi::xpath_node");
		cl.def("empty", (bool (pugi::xpath_node_set::*)() const) &pugi::xpath_node_set::empty, "C++: pugi::xpath_node_set::empty() const --> bool");
	}
}

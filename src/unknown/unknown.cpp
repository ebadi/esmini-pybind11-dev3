#include <ios>
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

// pugi::xml_writer file: line:301
struct PyCallBack_pugi_xml_writer : public pugi::xml_writer {
	using pugi::xml_writer::xml_writer;

	void write(const void * a0, unsigned long a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const pugi::xml_writer *>(this), "write");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"xml_writer::write\"");
	}
};

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// pugi::xml_node_type file: line:137
	pybind11::enum_<pugi::xml_node_type>(M("pugi"), "xml_node_type", pybind11::arithmetic(), "")
		.value("node_null", pugi::node_null)
		.value("node_document", pugi::node_document)
		.value("node_element", pugi::node_element)
		.value("node_pcdata", pugi::node_pcdata)
		.value("node_cdata", pugi::node_cdata)
		.value("node_comment", pugi::node_comment)
		.value("node_pi", pugi::node_pi)
		.value("node_declaration", pugi::node_declaration)
		.value("node_doctype", pugi::node_doctype)
		.export_values();

;

	// pugi::xml_encoding file: line:215
	pybind11::enum_<pugi::xml_encoding>(M("pugi"), "xml_encoding", pybind11::arithmetic(), "")
		.value("encoding_auto", pugi::encoding_auto)
		.value("encoding_utf8", pugi::encoding_utf8)
		.value("encoding_utf16_le", pugi::encoding_utf16_le)
		.value("encoding_utf16_be", pugi::encoding_utf16_be)
		.value("encoding_utf16", pugi::encoding_utf16)
		.value("encoding_utf32_le", pugi::encoding_utf32_le)
		.value("encoding_utf32_be", pugi::encoding_utf32_be)
		.value("encoding_utf32", pugi::encoding_utf32)
		.value("encoding_wchar", pugi::encoding_wchar)
		.value("encoding_latin1", pugi::encoding_latin1)
		.export_values();

;

	{ // pugi::xml_writer file: line:301
		pybind11::class_<pugi::xml_writer, std::shared_ptr<pugi::xml_writer>, PyCallBack_pugi_xml_writer> cl(M("pugi"), "xml_writer", "");
		cl.def( pybind11::init( [](){ return new PyCallBack_pugi_xml_writer(); } ) );
		cl.def(pybind11::init<PyCallBack_pugi_xml_writer const &>());
		cl.def("write", (void (pugi::xml_writer::*)(const void *, unsigned long)) &pugi::xml_writer::write, "C++: pugi::xml_writer::write(const void *, unsigned long) --> void", pybind11::arg("data"), pybind11::arg("size"));
		cl.def("assign", (class pugi::xml_writer & (pugi::xml_writer::*)(const class pugi::xml_writer &)) &pugi::xml_writer::operator=, "C++: pugi::xml_writer::operator=(const class pugi::xml_writer &) --> class pugi::xml_writer &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // pugi::xml_attribute file: line:341
		pybind11::class_<pugi::xml_attribute, std::shared_ptr<pugi::xml_attribute>> cl(M("pugi"), "xml_attribute", "");
		cl.def( pybind11::init( [](){ return new pugi::xml_attribute(); } ) );
		cl.def( pybind11::init( [](pugi::xml_attribute const &o){ return new pugi::xml_attribute(o); } ) );
		cl.def("__eq__", (bool (pugi::xml_attribute::*)(const class pugi::xml_attribute &) const) &pugi::xml_attribute::operator==, "C++: pugi::xml_attribute::operator==(const class pugi::xml_attribute &) const --> bool", pybind11::arg("r"));
		cl.def("__ne__", (bool (pugi::xml_attribute::*)(const class pugi::xml_attribute &) const) &pugi::xml_attribute::operator!=, "C++: pugi::xml_attribute::operator!=(const class pugi::xml_attribute &) const --> bool", pybind11::arg("r"));
		cl.def("empty", (bool (pugi::xml_attribute::*)() const) &pugi::xml_attribute::empty, "C++: pugi::xml_attribute::empty() const --> bool");
		cl.def("name", (const char * (pugi::xml_attribute::*)() const) &pugi::xml_attribute::name, "C++: pugi::xml_attribute::name() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("value", (const char * (pugi::xml_attribute::*)() const) &pugi::xml_attribute::value, "C++: pugi::xml_attribute::value() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("as_string", [](pugi::xml_attribute const &o) -> const char * { return o.as_string(); }, "", pybind11::return_value_policy::automatic);
		cl.def("as_string", (const char * (pugi::xml_attribute::*)(const char *) const) &pugi::xml_attribute::as_string, "C++: pugi::xml_attribute::as_string(const char *) const --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("def"));
		cl.def("as_int", [](pugi::xml_attribute const &o) -> int { return o.as_int(); }, "");
		cl.def("as_int", (int (pugi::xml_attribute::*)(int) const) &pugi::xml_attribute::as_int, "C++: pugi::xml_attribute::as_int(int) const --> int", pybind11::arg("def"));
		cl.def("as_uint", [](pugi::xml_attribute const &o) -> unsigned int { return o.as_uint(); }, "");
		cl.def("as_uint", (unsigned int (pugi::xml_attribute::*)(unsigned int) const) &pugi::xml_attribute::as_uint, "C++: pugi::xml_attribute::as_uint(unsigned int) const --> unsigned int", pybind11::arg("def"));
		cl.def("as_double", [](pugi::xml_attribute const &o) -> double { return o.as_double(); }, "");
		cl.def("as_double", (double (pugi::xml_attribute::*)(double) const) &pugi::xml_attribute::as_double, "C++: pugi::xml_attribute::as_double(double) const --> double", pybind11::arg("def"));
		cl.def("as_float", [](pugi::xml_attribute const &o) -> float { return o.as_float(); }, "");
		cl.def("as_float", (float (pugi::xml_attribute::*)(float) const) &pugi::xml_attribute::as_float, "C++: pugi::xml_attribute::as_float(float) const --> float", pybind11::arg("def"));
		cl.def("as_llong", [](pugi::xml_attribute const &o) -> long long { return o.as_llong(); }, "");
		cl.def("as_llong", (long long (pugi::xml_attribute::*)(long long) const) &pugi::xml_attribute::as_llong, "C++: pugi::xml_attribute::as_llong(long long) const --> long long", pybind11::arg("def"));
		cl.def("as_ullong", [](pugi::xml_attribute const &o) -> unsigned long long { return o.as_ullong(); }, "");
		cl.def("as_ullong", (unsigned long long (pugi::xml_attribute::*)(unsigned long long) const) &pugi::xml_attribute::as_ullong, "C++: pugi::xml_attribute::as_ullong(unsigned long long) const --> unsigned long long", pybind11::arg("def"));
		cl.def("as_bool", [](pugi::xml_attribute const &o) -> bool { return o.as_bool(); }, "");
		cl.def("as_bool", (bool (pugi::xml_attribute::*)(bool) const) &pugi::xml_attribute::as_bool, "C++: pugi::xml_attribute::as_bool(bool) const --> bool", pybind11::arg("def"));
		cl.def("set_name", (bool (pugi::xml_attribute::*)(const char *)) &pugi::xml_attribute::set_name, "C++: pugi::xml_attribute::set_name(const char *) --> bool", pybind11::arg("rhs"));
		cl.def("set_value", (bool (pugi::xml_attribute::*)(const char *)) &pugi::xml_attribute::set_value, "C++: pugi::xml_attribute::set_value(const char *) --> bool", pybind11::arg("rhs"));
		cl.def("set_value", (bool (pugi::xml_attribute::*)(int)) &pugi::xml_attribute::set_value, "C++: pugi::xml_attribute::set_value(int) --> bool", pybind11::arg("rhs"));
		cl.def("set_value", (bool (pugi::xml_attribute::*)(unsigned int)) &pugi::xml_attribute::set_value, "C++: pugi::xml_attribute::set_value(unsigned int) --> bool", pybind11::arg("rhs"));
		cl.def("set_value", (bool (pugi::xml_attribute::*)(long)) &pugi::xml_attribute::set_value, "C++: pugi::xml_attribute::set_value(long) --> bool", pybind11::arg("rhs"));
		cl.def("set_value", (bool (pugi::xml_attribute::*)(unsigned long)) &pugi::xml_attribute::set_value, "C++: pugi::xml_attribute::set_value(unsigned long) --> bool", pybind11::arg("rhs"));
		cl.def("set_value", (bool (pugi::xml_attribute::*)(double)) &pugi::xml_attribute::set_value, "C++: pugi::xml_attribute::set_value(double) --> bool", pybind11::arg("rhs"));
		cl.def("set_value", (bool (pugi::xml_attribute::*)(float)) &pugi::xml_attribute::set_value, "C++: pugi::xml_attribute::set_value(float) --> bool", pybind11::arg("rhs"));
		cl.def("set_value", (bool (pugi::xml_attribute::*)(bool)) &pugi::xml_attribute::set_value, "C++: pugi::xml_attribute::set_value(bool) --> bool", pybind11::arg("rhs"));
		cl.def("set_value", (bool (pugi::xml_attribute::*)(long long)) &pugi::xml_attribute::set_value, "C++: pugi::xml_attribute::set_value(long long) --> bool", pybind11::arg("rhs"));
		cl.def("set_value", (bool (pugi::xml_attribute::*)(unsigned long long)) &pugi::xml_attribute::set_value, "C++: pugi::xml_attribute::set_value(unsigned long long) --> bool", pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_attribute & (pugi::xml_attribute::*)(const char *)) &pugi::xml_attribute::operator=, "C++: pugi::xml_attribute::operator=(const char *) --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_attribute & (pugi::xml_attribute::*)(int)) &pugi::xml_attribute::operator=, "C++: pugi::xml_attribute::operator=(int) --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_attribute & (pugi::xml_attribute::*)(unsigned int)) &pugi::xml_attribute::operator=, "C++: pugi::xml_attribute::operator=(unsigned int) --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_attribute & (pugi::xml_attribute::*)(long)) &pugi::xml_attribute::operator=, "C++: pugi::xml_attribute::operator=(long) --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_attribute & (pugi::xml_attribute::*)(unsigned long)) &pugi::xml_attribute::operator=, "C++: pugi::xml_attribute::operator=(unsigned long) --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_attribute & (pugi::xml_attribute::*)(double)) &pugi::xml_attribute::operator=, "C++: pugi::xml_attribute::operator=(double) --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_attribute & (pugi::xml_attribute::*)(float)) &pugi::xml_attribute::operator=, "C++: pugi::xml_attribute::operator=(float) --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_attribute & (pugi::xml_attribute::*)(bool)) &pugi::xml_attribute::operator=, "C++: pugi::xml_attribute::operator=(bool) --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_attribute & (pugi::xml_attribute::*)(long long)) &pugi::xml_attribute::operator=, "C++: pugi::xml_attribute::operator=(long long) --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("assign", (class pugi::xml_attribute & (pugi::xml_attribute::*)(unsigned long long)) &pugi::xml_attribute::operator=, "C++: pugi::xml_attribute::operator=(unsigned long long) --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("next_attribute", (class pugi::xml_attribute (pugi::xml_attribute::*)() const) &pugi::xml_attribute::next_attribute, "C++: pugi::xml_attribute::next_attribute() const --> class pugi::xml_attribute");
		cl.def("previous_attribute", (class pugi::xml_attribute (pugi::xml_attribute::*)() const) &pugi::xml_attribute::previous_attribute, "C++: pugi::xml_attribute::previous_attribute() const --> class pugi::xml_attribute");
		cl.def("hash_value", (unsigned long (pugi::xml_attribute::*)() const) &pugi::xml_attribute::hash_value, "C++: pugi::xml_attribute::hash_value() const --> unsigned long");
		cl.def("assign", (class pugi::xml_attribute & (pugi::xml_attribute::*)(const class pugi::xml_attribute &)) &pugi::xml_attribute::operator=, "C++: pugi::xml_attribute::operator=(const class pugi::xml_attribute &) --> class pugi::xml_attribute &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // pugi::xml_node file: line:447
		pybind11::class_<pugi::xml_node, std::shared_ptr<pugi::xml_node>> cl(M("pugi"), "xml_node", "");
		cl.def( pybind11::init( [](){ return new pugi::xml_node(); } ) );
		cl.def( pybind11::init( [](pugi::xml_node const &o){ return new pugi::xml_node(o); } ) );
		cl.def("__eq__", (bool (pugi::xml_node::*)(const class pugi::xml_node &) const) &pugi::xml_node::operator==, "C++: pugi::xml_node::operator==(const class pugi::xml_node &) const --> bool", pybind11::arg("r"));
		cl.def("__ne__", (bool (pugi::xml_node::*)(const class pugi::xml_node &) const) &pugi::xml_node::operator!=, "C++: pugi::xml_node::operator!=(const class pugi::xml_node &) const --> bool", pybind11::arg("r"));
		cl.def("empty", (bool (pugi::xml_node::*)() const) &pugi::xml_node::empty, "C++: pugi::xml_node::empty() const --> bool");
		cl.def("type", (enum pugi::xml_node_type (pugi::xml_node::*)() const) &pugi::xml_node::type, "C++: pugi::xml_node::type() const --> enum pugi::xml_node_type");
		cl.def("name", (const char * (pugi::xml_node::*)() const) &pugi::xml_node::name, "C++: pugi::xml_node::name() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("value", (const char * (pugi::xml_node::*)() const) &pugi::xml_node::value, "C++: pugi::xml_node::value() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("first_attribute", (class pugi::xml_attribute (pugi::xml_node::*)() const) &pugi::xml_node::first_attribute, "C++: pugi::xml_node::first_attribute() const --> class pugi::xml_attribute");
		cl.def("last_attribute", (class pugi::xml_attribute (pugi::xml_node::*)() const) &pugi::xml_node::last_attribute, "C++: pugi::xml_node::last_attribute() const --> class pugi::xml_attribute");
		cl.def("first_child", (class pugi::xml_node (pugi::xml_node::*)() const) &pugi::xml_node::first_child, "C++: pugi::xml_node::first_child() const --> class pugi::xml_node");
		cl.def("last_child", (class pugi::xml_node (pugi::xml_node::*)() const) &pugi::xml_node::last_child, "C++: pugi::xml_node::last_child() const --> class pugi::xml_node");
		cl.def("next_sibling", (class pugi::xml_node (pugi::xml_node::*)() const) &pugi::xml_node::next_sibling, "C++: pugi::xml_node::next_sibling() const --> class pugi::xml_node");
		cl.def("previous_sibling", (class pugi::xml_node (pugi::xml_node::*)() const) &pugi::xml_node::previous_sibling, "C++: pugi::xml_node::previous_sibling() const --> class pugi::xml_node");
		cl.def("parent", (class pugi::xml_node (pugi::xml_node::*)() const) &pugi::xml_node::parent, "C++: pugi::xml_node::parent() const --> class pugi::xml_node");
		cl.def("root", (class pugi::xml_node (pugi::xml_node::*)() const) &pugi::xml_node::root, "C++: pugi::xml_node::root() const --> class pugi::xml_node");
		cl.def("text", (class pugi::xml_text (pugi::xml_node::*)() const) &pugi::xml_node::text, "C++: pugi::xml_node::text() const --> class pugi::xml_text");
		cl.def("child", (class pugi::xml_node (pugi::xml_node::*)(const char *) const) &pugi::xml_node::child, "C++: pugi::xml_node::child(const char *) const --> class pugi::xml_node", pybind11::arg("name"));
		cl.def("attribute", (class pugi::xml_attribute (pugi::xml_node::*)(const char *) const) &pugi::xml_node::attribute, "C++: pugi::xml_node::attribute(const char *) const --> class pugi::xml_attribute", pybind11::arg("name"));
		cl.def("next_sibling", (class pugi::xml_node (pugi::xml_node::*)(const char *) const) &pugi::xml_node::next_sibling, "C++: pugi::xml_node::next_sibling(const char *) const --> class pugi::xml_node", pybind11::arg("name"));
		cl.def("previous_sibling", (class pugi::xml_node (pugi::xml_node::*)(const char *) const) &pugi::xml_node::previous_sibling, "C++: pugi::xml_node::previous_sibling(const char *) const --> class pugi::xml_node", pybind11::arg("name"));
		cl.def("attribute", (class pugi::xml_attribute (pugi::xml_node::*)(const char *, class pugi::xml_attribute &) const) &pugi::xml_node::attribute, "C++: pugi::xml_node::attribute(const char *, class pugi::xml_attribute &) const --> class pugi::xml_attribute", pybind11::arg("name"), pybind11::arg("hint"));
		cl.def("child_value", (const char * (pugi::xml_node::*)() const) &pugi::xml_node::child_value, "C++: pugi::xml_node::child_value() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("child_value", (const char * (pugi::xml_node::*)(const char *) const) &pugi::xml_node::child_value, "C++: pugi::xml_node::child_value(const char *) const --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("name"));
		cl.def("set_name", (bool (pugi::xml_node::*)(const char *)) &pugi::xml_node::set_name, "C++: pugi::xml_node::set_name(const char *) --> bool", pybind11::arg("rhs"));
		cl.def("set_value", (bool (pugi::xml_node::*)(const char *)) &pugi::xml_node::set_value, "C++: pugi::xml_node::set_value(const char *) --> bool", pybind11::arg("rhs"));
		cl.def("append_attribute", (class pugi::xml_attribute (pugi::xml_node::*)(const char *)) &pugi::xml_node::append_attribute, "C++: pugi::xml_node::append_attribute(const char *) --> class pugi::xml_attribute", pybind11::arg("name"));
		cl.def("prepend_attribute", (class pugi::xml_attribute (pugi::xml_node::*)(const char *)) &pugi::xml_node::prepend_attribute, "C++: pugi::xml_node::prepend_attribute(const char *) --> class pugi::xml_attribute", pybind11::arg("name"));
		cl.def("insert_attribute_after", (class pugi::xml_attribute (pugi::xml_node::*)(const char *, const class pugi::xml_attribute &)) &pugi::xml_node::insert_attribute_after, "C++: pugi::xml_node::insert_attribute_after(const char *, const class pugi::xml_attribute &) --> class pugi::xml_attribute", pybind11::arg("name"), pybind11::arg("attr"));
		cl.def("insert_attribute_before", (class pugi::xml_attribute (pugi::xml_node::*)(const char *, const class pugi::xml_attribute &)) &pugi::xml_node::insert_attribute_before, "C++: pugi::xml_node::insert_attribute_before(const char *, const class pugi::xml_attribute &) --> class pugi::xml_attribute", pybind11::arg("name"), pybind11::arg("attr"));
		cl.def("append_copy", (class pugi::xml_attribute (pugi::xml_node::*)(const class pugi::xml_attribute &)) &pugi::xml_node::append_copy, "C++: pugi::xml_node::append_copy(const class pugi::xml_attribute &) --> class pugi::xml_attribute", pybind11::arg("proto"));
		cl.def("prepend_copy", (class pugi::xml_attribute (pugi::xml_node::*)(const class pugi::xml_attribute &)) &pugi::xml_node::prepend_copy, "C++: pugi::xml_node::prepend_copy(const class pugi::xml_attribute &) --> class pugi::xml_attribute", pybind11::arg("proto"));
		cl.def("insert_copy_after", (class pugi::xml_attribute (pugi::xml_node::*)(const class pugi::xml_attribute &, const class pugi::xml_attribute &)) &pugi::xml_node::insert_copy_after, "C++: pugi::xml_node::insert_copy_after(const class pugi::xml_attribute &, const class pugi::xml_attribute &) --> class pugi::xml_attribute", pybind11::arg("proto"), pybind11::arg("attr"));
		cl.def("insert_copy_before", (class pugi::xml_attribute (pugi::xml_node::*)(const class pugi::xml_attribute &, const class pugi::xml_attribute &)) &pugi::xml_node::insert_copy_before, "C++: pugi::xml_node::insert_copy_before(const class pugi::xml_attribute &, const class pugi::xml_attribute &) --> class pugi::xml_attribute", pybind11::arg("proto"), pybind11::arg("attr"));
		cl.def("append_child", [](pugi::xml_node &o) -> pugi::xml_node { return o.append_child(); }, "");
		cl.def("append_child", (class pugi::xml_node (pugi::xml_node::*)(enum pugi::xml_node_type)) &pugi::xml_node::append_child, "C++: pugi::xml_node::append_child(enum pugi::xml_node_type) --> class pugi::xml_node", pybind11::arg("type"));
		cl.def("prepend_child", [](pugi::xml_node &o) -> pugi::xml_node { return o.prepend_child(); }, "");
		cl.def("prepend_child", (class pugi::xml_node (pugi::xml_node::*)(enum pugi::xml_node_type)) &pugi::xml_node::prepend_child, "C++: pugi::xml_node::prepend_child(enum pugi::xml_node_type) --> class pugi::xml_node", pybind11::arg("type"));
		cl.def("insert_child_after", (class pugi::xml_node (pugi::xml_node::*)(enum pugi::xml_node_type, const class pugi::xml_node &)) &pugi::xml_node::insert_child_after, "C++: pugi::xml_node::insert_child_after(enum pugi::xml_node_type, const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("type"), pybind11::arg("node"));
		cl.def("insert_child_before", (class pugi::xml_node (pugi::xml_node::*)(enum pugi::xml_node_type, const class pugi::xml_node &)) &pugi::xml_node::insert_child_before, "C++: pugi::xml_node::insert_child_before(enum pugi::xml_node_type, const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("type"), pybind11::arg("node"));
		cl.def("append_child", (class pugi::xml_node (pugi::xml_node::*)(const char *)) &pugi::xml_node::append_child, "C++: pugi::xml_node::append_child(const char *) --> class pugi::xml_node", pybind11::arg("name"));
		cl.def("prepend_child", (class pugi::xml_node (pugi::xml_node::*)(const char *)) &pugi::xml_node::prepend_child, "C++: pugi::xml_node::prepend_child(const char *) --> class pugi::xml_node", pybind11::arg("name"));
		cl.def("insert_child_after", (class pugi::xml_node (pugi::xml_node::*)(const char *, const class pugi::xml_node &)) &pugi::xml_node::insert_child_after, "C++: pugi::xml_node::insert_child_after(const char *, const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("name"), pybind11::arg("node"));
		cl.def("insert_child_before", (class pugi::xml_node (pugi::xml_node::*)(const char *, const class pugi::xml_node &)) &pugi::xml_node::insert_child_before, "C++: pugi::xml_node::insert_child_before(const char *, const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("name"), pybind11::arg("node"));
		cl.def("append_copy", (class pugi::xml_node (pugi::xml_node::*)(const class pugi::xml_node &)) &pugi::xml_node::append_copy, "C++: pugi::xml_node::append_copy(const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("proto"));
		cl.def("prepend_copy", (class pugi::xml_node (pugi::xml_node::*)(const class pugi::xml_node &)) &pugi::xml_node::prepend_copy, "C++: pugi::xml_node::prepend_copy(const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("proto"));
		cl.def("insert_copy_after", (class pugi::xml_node (pugi::xml_node::*)(const class pugi::xml_node &, const class pugi::xml_node &)) &pugi::xml_node::insert_copy_after, "C++: pugi::xml_node::insert_copy_after(const class pugi::xml_node &, const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("proto"), pybind11::arg("node"));
		cl.def("insert_copy_before", (class pugi::xml_node (pugi::xml_node::*)(const class pugi::xml_node &, const class pugi::xml_node &)) &pugi::xml_node::insert_copy_before, "C++: pugi::xml_node::insert_copy_before(const class pugi::xml_node &, const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("proto"), pybind11::arg("node"));
		cl.def("append_move", (class pugi::xml_node (pugi::xml_node::*)(const class pugi::xml_node &)) &pugi::xml_node::append_move, "C++: pugi::xml_node::append_move(const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("moved"));
		cl.def("prepend_move", (class pugi::xml_node (pugi::xml_node::*)(const class pugi::xml_node &)) &pugi::xml_node::prepend_move, "C++: pugi::xml_node::prepend_move(const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("moved"));
		cl.def("insert_move_after", (class pugi::xml_node (pugi::xml_node::*)(const class pugi::xml_node &, const class pugi::xml_node &)) &pugi::xml_node::insert_move_after, "C++: pugi::xml_node::insert_move_after(const class pugi::xml_node &, const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("moved"), pybind11::arg("node"));
		cl.def("insert_move_before", (class pugi::xml_node (pugi::xml_node::*)(const class pugi::xml_node &, const class pugi::xml_node &)) &pugi::xml_node::insert_move_before, "C++: pugi::xml_node::insert_move_before(const class pugi::xml_node &, const class pugi::xml_node &) --> class pugi::xml_node", pybind11::arg("moved"), pybind11::arg("node"));
		cl.def("remove_attribute", (bool (pugi::xml_node::*)(const class pugi::xml_attribute &)) &pugi::xml_node::remove_attribute, "C++: pugi::xml_node::remove_attribute(const class pugi::xml_attribute &) --> bool", pybind11::arg("a"));
		cl.def("remove_attribute", (bool (pugi::xml_node::*)(const char *)) &pugi::xml_node::remove_attribute, "C++: pugi::xml_node::remove_attribute(const char *) --> bool", pybind11::arg("name"));
		cl.def("remove_child", (bool (pugi::xml_node::*)(const class pugi::xml_node &)) &pugi::xml_node::remove_child, "C++: pugi::xml_node::remove_child(const class pugi::xml_node &) --> bool", pybind11::arg("n"));
		cl.def("remove_child", (bool (pugi::xml_node::*)(const char *)) &pugi::xml_node::remove_child, "C++: pugi::xml_node::remove_child(const char *) --> bool", pybind11::arg("name"));
		cl.def("append_buffer", [](pugi::xml_node &o, const void * a0, unsigned long const & a1) -> pugi::xml_parse_result { return o.append_buffer(a0, a1); }, "", pybind11::arg("contents"), pybind11::arg("size"));
		cl.def("append_buffer", [](pugi::xml_node &o, const void * a0, unsigned long const & a1, unsigned int const & a2) -> pugi::xml_parse_result { return o.append_buffer(a0, a1, a2); }, "", pybind11::arg("contents"), pybind11::arg("size"), pybind11::arg("options"));
		cl.def("append_buffer", (struct pugi::xml_parse_result (pugi::xml_node::*)(const void *, unsigned long, unsigned int, enum pugi::xml_encoding)) &pugi::xml_node::append_buffer, "C++: pugi::xml_node::append_buffer(const void *, unsigned long, unsigned int, enum pugi::xml_encoding) --> struct pugi::xml_parse_result", pybind11::arg("contents"), pybind11::arg("size"), pybind11::arg("options"), pybind11::arg("encoding"));
		cl.def("find_child_by_attribute", (class pugi::xml_node (pugi::xml_node::*)(const char *, const char *, const char *) const) &pugi::xml_node::find_child_by_attribute, "C++: pugi::xml_node::find_child_by_attribute(const char *, const char *, const char *) const --> class pugi::xml_node", pybind11::arg("name"), pybind11::arg("attr_name"), pybind11::arg("attr_value"));
		cl.def("find_child_by_attribute", (class pugi::xml_node (pugi::xml_node::*)(const char *, const char *) const) &pugi::xml_node::find_child_by_attribute, "C++: pugi::xml_node::find_child_by_attribute(const char *, const char *) const --> class pugi::xml_node", pybind11::arg("attr_name"), pybind11::arg("attr_value"));
		cl.def("path", [](pugi::xml_node const &o) -> std::string { return o.path(); }, "");
		cl.def("path", (std::string (pugi::xml_node::*)(char) const) &pugi::xml_node::path, "C++: pugi::xml_node::path(char) const --> std::string", pybind11::arg("delimiter"));
		cl.def("first_element_by_path", [](pugi::xml_node const &o, const char * a0) -> pugi::xml_node { return o.first_element_by_path(a0); }, "", pybind11::arg("path"));
		cl.def("first_element_by_path", (class pugi::xml_node (pugi::xml_node::*)(const char *, char) const) &pugi::xml_node::first_element_by_path, "C++: pugi::xml_node::first_element_by_path(const char *, char) const --> class pugi::xml_node", pybind11::arg("path"), pybind11::arg("delimiter"));
		cl.def("traverse", (bool (pugi::xml_node::*)(class pugi::xml_tree_walker &)) &pugi::xml_node::traverse, "C++: pugi::xml_node::traverse(class pugi::xml_tree_walker &) --> bool", pybind11::arg("walker"));
		cl.def("select_node", [](pugi::xml_node const &o, const char * a0) -> pugi::xpath_node { return o.select_node(a0); }, "", pybind11::arg("query"));
		cl.def("select_node", (class pugi::xpath_node (pugi::xml_node::*)(const char *, class pugi::xpath_variable_set *) const) &pugi::xml_node::select_node, "C++: pugi::xml_node::select_node(const char *, class pugi::xpath_variable_set *) const --> class pugi::xpath_node", pybind11::arg("query"), pybind11::arg("variables"));
		cl.def("select_node", (class pugi::xpath_node (pugi::xml_node::*)(const class pugi::xpath_query &) const) &pugi::xml_node::select_node, "C++: pugi::xml_node::select_node(const class pugi::xpath_query &) const --> class pugi::xpath_node", pybind11::arg("query"));
		cl.def("select_nodes", [](pugi::xml_node const &o, const char * a0) -> pugi::xpath_node_set { return o.select_nodes(a0); }, "", pybind11::arg("query"));
		cl.def("select_nodes", (class pugi::xpath_node_set (pugi::xml_node::*)(const char *, class pugi::xpath_variable_set *) const) &pugi::xml_node::select_nodes, "C++: pugi::xml_node::select_nodes(const char *, class pugi::xpath_variable_set *) const --> class pugi::xpath_node_set", pybind11::arg("query"), pybind11::arg("variables"));
		cl.def("select_nodes", (class pugi::xpath_node_set (pugi::xml_node::*)(const class pugi::xpath_query &) const) &pugi::xml_node::select_nodes, "C++: pugi::xml_node::select_nodes(const class pugi::xpath_query &) const --> class pugi::xpath_node_set", pybind11::arg("query"));
		cl.def("select_single_node", [](pugi::xml_node const &o, const char * a0) -> pugi::xpath_node { return o.select_single_node(a0); }, "", pybind11::arg("query"));
		cl.def("select_single_node", (class pugi::xpath_node (pugi::xml_node::*)(const char *, class pugi::xpath_variable_set *) const) &pugi::xml_node::select_single_node, "C++: pugi::xml_node::select_single_node(const char *, class pugi::xpath_variable_set *) const --> class pugi::xpath_node", pybind11::arg("query"), pybind11::arg("variables"));
		cl.def("select_single_node", (class pugi::xpath_node (pugi::xml_node::*)(const class pugi::xpath_query &) const) &pugi::xml_node::select_single_node, "C++: pugi::xml_node::select_single_node(const class pugi::xpath_query &) const --> class pugi::xpath_node", pybind11::arg("query"));
		cl.def("print", [](pugi::xml_node const &o, class pugi::xml_writer & a0) -> void { return o.print(a0); }, "", pybind11::arg("writer"));
		cl.def("print", [](pugi::xml_node const &o, class pugi::xml_writer & a0, const char * a1) -> void { return o.print(a0, a1); }, "", pybind11::arg("writer"), pybind11::arg("indent"));
		cl.def("print", [](pugi::xml_node const &o, class pugi::xml_writer & a0, const char * a1, unsigned int const & a2) -> void { return o.print(a0, a1, a2); }, "", pybind11::arg("writer"), pybind11::arg("indent"), pybind11::arg("flags"));
		cl.def("print", [](pugi::xml_node const &o, class pugi::xml_writer & a0, const char * a1, unsigned int const & a2, enum pugi::xml_encoding const & a3) -> void { return o.print(a0, a1, a2, a3); }, "", pybind11::arg("writer"), pybind11::arg("indent"), pybind11::arg("flags"), pybind11::arg("encoding"));
		cl.def("print", (void (pugi::xml_node::*)(class pugi::xml_writer &, const char *, unsigned int, enum pugi::xml_encoding, unsigned int) const) &pugi::xml_node::print, "C++: pugi::xml_node::print(class pugi::xml_writer &, const char *, unsigned int, enum pugi::xml_encoding, unsigned int) const --> void", pybind11::arg("writer"), pybind11::arg("indent"), pybind11::arg("flags"), pybind11::arg("encoding"), pybind11::arg("depth"));
		cl.def("print", [](pugi::xml_node const &o, class std::basic_ostream<char> & a0) -> void { return o.print(a0); }, "", pybind11::arg("os"));
		cl.def("print", [](pugi::xml_node const &o, class std::basic_ostream<char> & a0, const char * a1) -> void { return o.print(a0, a1); }, "", pybind11::arg("os"), pybind11::arg("indent"));
		cl.def("print", [](pugi::xml_node const &o, class std::basic_ostream<char> & a0, const char * a1, unsigned int const & a2) -> void { return o.print(a0, a1, a2); }, "", pybind11::arg("os"), pybind11::arg("indent"), pybind11::arg("flags"));
		cl.def("print", [](pugi::xml_node const &o, class std::basic_ostream<char> & a0, const char * a1, unsigned int const & a2, enum pugi::xml_encoding const & a3) -> void { return o.print(a0, a1, a2, a3); }, "", pybind11::arg("os"), pybind11::arg("indent"), pybind11::arg("flags"), pybind11::arg("encoding"));
		cl.def("print", (void (pugi::xml_node::*)(std::ostream &, const char *, unsigned int, enum pugi::xml_encoding, unsigned int) const) &pugi::xml_node::print, "C++: pugi::xml_node::print(std::ostream &, const char *, unsigned int, enum pugi::xml_encoding, unsigned int) const --> void", pybind11::arg("os"), pybind11::arg("indent"), pybind11::arg("flags"), pybind11::arg("encoding"), pybind11::arg("depth"));
		cl.def("print", [](pugi::xml_node const &o, class std::basic_ostream<wchar_t> & a0) -> void { return o.print(a0); }, "", pybind11::arg("os"));
		cl.def("print", [](pugi::xml_node const &o, class std::basic_ostream<wchar_t> & a0, const char * a1) -> void { return o.print(a0, a1); }, "", pybind11::arg("os"), pybind11::arg("indent"));
		cl.def("print", [](pugi::xml_node const &o, class std::basic_ostream<wchar_t> & a0, const char * a1, unsigned int const & a2) -> void { return o.print(a0, a1, a2); }, "", pybind11::arg("os"), pybind11::arg("indent"), pybind11::arg("flags"));
		cl.def("print", (void (pugi::xml_node::*)(class std::basic_ostream<wchar_t> &, const char *, unsigned int, unsigned int) const) &pugi::xml_node::print, "C++: pugi::xml_node::print(class std::basic_ostream<wchar_t> &, const char *, unsigned int, unsigned int) const --> void", pybind11::arg("os"), pybind11::arg("indent"), pybind11::arg("flags"), pybind11::arg("depth"));
		cl.def("begin", (class pugi::xml_node_iterator (pugi::xml_node::*)() const) &pugi::xml_node::begin, "C++: pugi::xml_node::begin() const --> class pugi::xml_node_iterator");
		cl.def("end", (class pugi::xml_node_iterator (pugi::xml_node::*)() const) &pugi::xml_node::end, "C++: pugi::xml_node::end() const --> class pugi::xml_node_iterator");
		cl.def("attributes_begin", (class pugi::xml_attribute_iterator (pugi::xml_node::*)() const) &pugi::xml_node::attributes_begin, "C++: pugi::xml_node::attributes_begin() const --> class pugi::xml_attribute_iterator");
		cl.def("attributes_end", (class pugi::xml_attribute_iterator (pugi::xml_node::*)() const) &pugi::xml_node::attributes_end, "C++: pugi::xml_node::attributes_end() const --> class pugi::xml_attribute_iterator");
		cl.def("offset_debug", (long (pugi::xml_node::*)() const) &pugi::xml_node::offset_debug, "C++: pugi::xml_node::offset_debug() const --> long");
		cl.def("hash_value", (unsigned long (pugi::xml_node::*)() const) &pugi::xml_node::hash_value, "C++: pugi::xml_node::hash_value() const --> unsigned long");
		cl.def("assign", (class pugi::xml_node & (pugi::xml_node::*)(const class pugi::xml_node &)) &pugi::xml_node::operator=, "C++: pugi::xml_node::operator=(const class pugi::xml_node &) --> class pugi::xml_node &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}

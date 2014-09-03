#include <iostream>

#include <boost/property_tree/json_parser.hpp>

namespace json = boost::property_tree;


void parse_number_array();


int
main(void)
{
	parse_number_array();

	return 0;
}


void
parse_number_array()
{
	std::stringstream json_stream("[1, 2, 3]");
	json::ptree pt;
	json::json_parser::read_json(json_stream, pt);

	std::cout << pt.count("") << '\n';
	for (const json::ptree::value_type& val : pt) {
		std::cout << val.second.get<int>("") << '\n';
	}
}

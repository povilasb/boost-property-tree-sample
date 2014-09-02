#include <iostream>

#include <boost/property_tree/json_parser.hpp>


int
main(void)
{

	return 0;
}


void
parse_number_array()
{
	std::stringstream json_stream("[1, 2, 3]");
	ptree pt;
	json_parser::read_json(json_stream, pt);
}

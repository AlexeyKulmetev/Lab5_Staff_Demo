#pragma once
#include "Engineer.hpp"

class Tester : public Engineer {
public:
	Tester() = default;

	Tester(const int _id, const std::string& _name,
		const std::string& _projectName, const double _hourlyRate) :
		Engineer(_id, _name, _projectName, _hourlyRate) {}


};
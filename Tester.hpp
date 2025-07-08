#pragma once
#include "Engineer.hpp"

class Tester : public Engineer {
public:
	Tester(const int _id, const std::string& _name, const std::string& _projectName,
		const double _workedTimeSalary, const double _hourlyRate)
		: Engineer(_id, _name, _projectName, _workedTimeSalary, _hourlyRate)
	{}

	~Tester() = default;
};
#pragma once
#include "Engineer.hpp"

class Programmer : public Engineer {
public:
	~Programmer() = default;
	
	Programmer(const int _id, const std::string& _name,
		const std::string& _projectName, const double _hourlyRate) :
		Engineer(_id, _name, _projectName, _hourlyRate) {}
};
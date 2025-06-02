#pragma once
#include "Personal.hpp"

class Driver : public Personal {
public:
	Driver() = default;

	Driver(const int _id, const std::string& _name, const double _hourlyRate)
		: Personal(_id, _name, _hourlyRate) {};
};
#pragma once
#include "Personal.hpp"

class Cleaner : public Personal {
public:
	Cleaner() = default;

	// need create proper parameterized constructor
	Cleaner(const int _id, const std::string& _name, const double _hourlyRate)
		: Personal(_id, _name, _hourlyRate) {};
};
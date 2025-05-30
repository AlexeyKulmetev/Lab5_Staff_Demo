#pragma once
#include "Personal.hpp"

class Cleaner : public Personal {
public:
	Cleaner() = default;
	// need create proper constructor
	Cleaner(int _id, std::string _name, double _hourlyRate) :
		id(_id),  {}
	~Cleaner() = default;
};
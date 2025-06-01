#pragma once
#include "Personal.hpp"

class Cleaner : public Personal {
public:
	Cleaner() = default;
	// need create proper constructor
	Cleaner(int _id, std::string _name, double _hourlyRate, 
		double _workTime = 0) :
		Employee(_id, _name, _workTime), hourlyRate{ _hourlyRate } {}
	~Cleaner() = default;
};
#pragma once
#include "WorkTime.hpp"
#include "Employee.hpp"

class Personal : public WorkTime, public Employee {
public:
	double hourlyRate = 1;
	virtual ~Personal() = 0;
	void calculateWorkedTimeSalary() override {
		payment = workTime * hourlyRate;
	}
};

Personal::~Personal() {}
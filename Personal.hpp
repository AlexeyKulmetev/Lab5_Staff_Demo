#pragma once
#include "WorkTime.hpp"
#include "Employee.hpp"

class Personal : public WorkTime, public Employee {
public:
	virtual ~Personal() = 0;

	Personal() = default;

	Personal(const int _id, const std::string& _name,
		const double _hourlyRate) : Employee(_id, _name), 
		hourlyRate{ _hourlyRate } {}
	
	void calculatePayment() override {
		calculateWorkedTimeSalary();
	}

	void setHourlyRate(const double _hourlyRate) {
		hourlyRate = _hourlyRate;
	}

protected:
	void calculateWorkedTimeSalary() override {
		payment = workTime * hourlyRate;
	}

private:
	double hourlyRate = 1; // rate for 1 hour work
	double workedTimeSalary = 0;
};

Personal::~Personal() {}
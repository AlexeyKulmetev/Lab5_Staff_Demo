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

	void setHourlyRate(const double _hourlyRate) {
		hourlyRate = _hourlyRate;
	}

	double getHourlyRate() const {
		return hourlyRate;
	}
	
	// main function to calculate payment
	void calculatePayment() override {
		calculateWorkedTimeSalary();
	}

private:
	double hourlyRate = 1.0; // rate for 1 hour work

	void calculateWorkedTimeSalary() override {
		payment = workTime * hourlyRate;
	}
};

Personal::~Personal() {}
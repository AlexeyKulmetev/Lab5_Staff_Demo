#pragma once
#include "string"

class Employee {
public:
	int id = 0;
	std::string name;
	double workTime = 0; // actual worked time
	double payment = 0; // full salary
	
	Employee(int _id, std::string& _name, double _workTime = 0) :
		id{ _id }, name{ _name }, workTime{ _workTime }, payment{ 0 } {
	}

	virtual ~Employee() = 0;

	void setWorkTime(const double _workTime) {
		workTime = _workTime;
	}

	double getWorkTime() const {
		return workTime;
	}

	double getPayment() const {
		return payment;
	}
};

Employee::~Employee() {}
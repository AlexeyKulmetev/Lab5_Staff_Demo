#pragma once
#include "string"
#include "TeamLeader.hpp"

class Employee {
public:
	Employee() = default;
	
	Employee(const int _id, const std::string& _name) :
		id{ _id }, name{ _name } {}

	virtual ~Employee() = 0;

	void setWorkTime(const double _workTime) {
		workTime = _workTime;
	}

	double getWorkTime() const {
		return workTime;
	}

	virtual void calculatePayment() = 0;

	double getPayment() const {
		return payment;
	}

	void setTeamLeader(TeamLeader* teamLeader) {
		teamLeaderPointer = teamLeader;
	}

protected:
	int id = 0;
	std::string name;
	double workTime = 0; // actual worked time
	double payment = 0; // full salary
	TeamLeader* teamLeaderPointer = nullptr;
};

Employee::~Employee() {}
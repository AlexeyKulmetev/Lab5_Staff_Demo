#pragma once
#include "Engineer.hpp"
#include "Programmer.hpp"
#include "Heading.hpp"
#include <vector>

class TeamLeader : public Programmer, public Heading {
public:
	~TeamLeader() = default;

	TeamLeader(const int _id, const std::string& _name,
		const std::string& _projectName, const double _hourlyRate) :
		Programmer(_id, _name, _projectName, _hourlyRate) {
	}

	// implement addEmployee function that will add pointer to engineer
	// to the engineerPointers vector and add the TeamLeader pointer
	// to the Employee object
	void addEmployee(Engineer* engineer) {
		if (engineer) {
			engineerPointers.push_back(engineer);
			++employeeNumber;
			engineer->setTeamLeader(this);
		}
	}

	void calculatePayment() override {
		calculateProjectPremium();
		calculateWorkedTimeSalary();
		calculateHeadingSalary();
		payment += (getProjectSalaryPremium() + headingPremium);
	}

protected:
	double calculateHeadingSalary() override {
		headingPremium = employeeNumber * 60;
	}

private:
	// probably should have vector of pointers to all programmers and testers
	std::vector<Engineer*> engineerPointers;
	int employeeNumber = 0;
	double headingPremium = 0.0;
};
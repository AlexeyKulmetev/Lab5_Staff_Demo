#pragma once
#include "Engineer.hpp"
#include "Programmer.hpp"
#include "Heading.hpp"
#include <unordered_set>

class TeamLeader : public Programmer, public Heading {
public:
	~TeamLeader() {
		// clear all tracked Engineers (without deleting them)
		for (Engineer* eng : engineerPointers) {
			if (eng->getTeamLeader() == this) {
				eng->setTeamLeader(nullptr);
			}
		}
	}

	TeamLeader(const int _id, const std::string& _name,
		const std::string& _projectName, const double _hourlyRate) :
		Programmer(_id, _name, _projectName, _hourlyRate) {
	}

	// implement addEmployee function that will add pointer to engineer
	// to the engineerPointers vector and add the TeamLeader pointer
	// to the Employee object
	void addEngineer(Engineer* engineer) {
		if (!engineer) {
			return;
		}
		std::unordered_set<Engineer*>::iterator it = engineerPointers.find(engineer);
		if (it == engineerPointers.end()) {
			engineerPointers.insert(engineer);
			++engineerNumber;
			engineer->setTeamLeader(this);
		}
	}

	void removeEngineer(Engineer* engineer) {
		engineerPointers.erase(engineer);
		if (engineer->getTeamLeader() == this) {
			engineer->setTeamLeader(nullptr);
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
		headingPremium = engineerNumber * 60;
	}

private:
	std::unordered_set<Engineer*> engineerPointers;
	int engineerNumber = 0;
	double headingPremium = 0.0;
};
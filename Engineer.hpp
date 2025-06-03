#pragma once
#include "WorkTime.hpp"
#include "Project.hpp"
#include "Employee.hpp"
#include "Budgets.hpp"

class Engineer : public WorkTime, public Project, public Employee {
	virtual ~Engineer() = 0;
private:
	std::string projectName;
	double projectSalaryPremium = 0;

	void setProjectName(const std::string _projectName) {
		projectName = _projectName;
	}

	std::string getProjectName() const {
		return projectName;
	}

	void calculateProjectPremium() override {
		projectSalaryPremium;
	}
};

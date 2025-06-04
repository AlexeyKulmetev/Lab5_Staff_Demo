#pragma once
#include "WorkTime.hpp"
#include "Project.hpp"
#include "Employee.hpp"
#include "Budgets.hpp"

class Engineer : public WorkTime, public Project, public Employee {
public:
	virtual ~Engineer() = 0;

	void setProjectName(const std::string _projectName) {
		projectName = _projectName;
	}

	std::string getProjectName() const {
		return projectName;
	}


private:
	std::string projectName;
	double projectSalaryPremium = 0;

	// set projectSalaryPremium to 0 if the object
	// does not participate any project
	void calculateProjectPremium() override {
		long int projectBudget = Budgets::getBudget(projectName);
		if (projectBudget >= 0) {
			projectSalaryPremium = (projectBudget / 3) / 100 * 6;
		}
		else {
			projectSalaryPremium = 0;
		}

	}
};
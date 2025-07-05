#pragma once
#include "WorkTime.hpp"
#include "Project.hpp"
#include "Employee.hpp"
#include "Budgets.hpp"

class Engineer : public WorkTime, public Project, public Employee {
public:
	virtual ~Engineer() = 0;

	Engineer(const int _id, const std::string& _name, const std::string& _projectName,
		const double _projectPremium, const double _workedTimeSalary, const double _hourlyRate)
		: Employee(_id, _name),
		projectName{ _projectName }, projectPremium{ _projectPremium },
		workedTimeSalary{ _workedTimeSalary }, hourlyRate{ _hourlyRate } {}


	void setProjectName(const std::string _projectName) {
		projectName = _projectName;
	}

	std::string getProjectName() const {
		return projectName;
	}

	void setHourlyRate(const double _hourlyRate) {
		hourlyRate = _hourlyRate;
	}

	double getHourlyRate() const {
		return hourlyRate;
	}

	void calculatePayment() {
		calculateProjectPremium();
		calculateWorkedTimeSalary();
		payment = workedTimeSalary + projectPremium;
	}

protected:
	void calculateWorkedTimeSalary() override {
		workedTimeSalary = workTime * hourlyRate;
	}

	// set projectSalaryPremium to 0 if the object
	// does not participate any project
	void calculateProjectPremium() override {
		long int projectBudget = Budgets::getBudget(projectName);
		if (projectBudget >= 0) {
			projectPremium = (projectBudget / 3) / 100 * 6;
		}
		else {
			projectPremium = 0;
		}
	}


private:
	std::string projectName;
	double projectPremium = 0;
	double workedTimeSalary = 0;
	double hourlyRate = 1;
};
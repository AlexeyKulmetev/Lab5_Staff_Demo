#pragma once
#include "WorkTime.hpp"
#include "Project.hpp"
#include "Employee.hpp"
#include "Budgets.hpp"

// Consider to implement observer pattern to
// handle the Programmer and Tester deleting
class TeamLeader;  // Forward declaration

class Engineer : public WorkTime, public Project, public Employee {

public:

	virtual ~Engineer();

	Engineer() = default;

	Engineer(const int _id, const std::string& _name,
		const std::string& _projectName, const double _hourlyRate) :
		Employee(_id, _name), projectName{ _projectName }, 
		hourlyRate{ _hourlyRate } {}

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

	void calculatePayment() override {
		calculateProjectPremium();
		calculateWorkedTimeSalary();
		payment += projectSalaryPremium;
	}

	double getProjectSalaryPremium() const {
		return projectSalaryPremium;
	}

	TeamLeader* getTeamLeader() const {
		return teamLeaderPointer;
	}

protected:
	// set projectSalaryPremium to 0 if the object
	// does not participate any project
	void calculateProjectPremium() override {
		long int projectBudget = Budgets::getBudget(projectName);
		if (projectBudget >= 0) {
			projectSalaryPremium = (static_cast<double>(projectBudget) / 8.0) / 600.00;
		}
		else {
			projectSalaryPremium = 0;
		}
	}

	void calculateWorkedTimeSalary() override {
		payment = workTime * hourlyRate;
	}

private:
	std::string projectName; // key for projectsBudgets map
	double projectSalaryPremium = 0.0; // premium by participation on project
	double hourlyRate = 1.0; // rate for 1 hour work
	TeamLeader* teamLeaderPointer = nullptr;
	friend class TeamLeader;

	void setTeamLeader(TeamLeader* teamLeader) {
		teamLeaderPointer = teamLeader;
	}
};
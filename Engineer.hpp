#pragma once
#include "WorkTime.hpp"
#include "Project.hpp"
#include "Employee.hpp"

class Engeneer : public WorkTime, public Project, public Employee {

private:
	double projectSalaryPremium = 0;
};
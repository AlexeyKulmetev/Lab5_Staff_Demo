#pragma once
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

	// implement addEmployee function that will add pointer to employee
	// to the employeePointers vector and add the TeamLeader pointer
	// to the Employee object

	void addEmployee(Engineer* employee) {
		if (employee) {
			employeePointers.push_back(employee);
			++employeeNumber;
			employee.set
		}
	}

private:
	// probably should have vector of pointers to all programmers and testers
	std::vector<Engineer*> employeePointers;
	int employeeNumber = 0;
};
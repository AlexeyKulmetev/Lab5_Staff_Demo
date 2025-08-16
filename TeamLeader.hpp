#pragma once
#include "Programmer.hpp"
#include "Heading.hpp"

// this class have to track all Programmer and Tester objects
// perhaps should use another class for this purpuse

class TeamLeader : public Programmer, public Heading {
public:
	TeamLeader(const int _id, const std::string& _name, const std::string& _projectName,
		const double _workedTimeSalary, const double _hourlyRate)
		: Programmer(_id, _name, _projectName, _workedTimeSalary, _hourlyRate)
	{}

	~TeamLeader() = default;

protected:
	// get the project budget of projectName and return specific percent of it
	double headingSalary() override {
		

		// FIX ME
		// should return percent of project budget
		return 0;
	}
};
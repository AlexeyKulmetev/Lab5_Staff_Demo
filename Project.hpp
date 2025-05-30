#pragma once

class Project {
public:
	virtual ~Project() = 0;
	virtual double projectParticipationSalary() = 0;
};

Project::~Project() {}
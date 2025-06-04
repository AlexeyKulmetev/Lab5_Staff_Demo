#pragma once

class Project {
public:
	virtual ~Project() = 0;

protected:
	// perhaps should be a privite to prevent using
	// this method from Engineer`s heirarchy objects
	virtual void calculateProjectPremium() = 0;
};

Project::~Project() {}
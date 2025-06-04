#pragma once

class WorkTime {
public:
	virtual ~WorkTime() = 0;

protected:
	virtual void calculateWorkedTimeSalary() = 0;
};

WorkTime::~WorkTime() {}
#pragma once

class WorkTime {
public:
	virtual ~WorkTime() = 0;
	virtual void calculateWorkedTimeSalary() = 0;
};

WorkTime::~WorkTime() {}
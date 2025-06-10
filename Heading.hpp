#pragma once

class Heading {
public:
	virtual ~Heading() = 0;
	
protected:
	virtual double calculateHeadingSalary() = 0;
};

Heading::~Heading() {}
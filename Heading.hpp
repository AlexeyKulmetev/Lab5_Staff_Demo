#pragma once

class Heading {
public:
	virtual ~Heading() = 0;
	
protected:
	virtual void calculateHeadingSalary() = 0;
};

Heading::~Heading() {}
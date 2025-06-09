#pragma once

class Heading {
public:
	virtual ~Heading() = 0;
	
protected:
	virtual double headingSalary() = 0;
};

Heading::~Heading() {}
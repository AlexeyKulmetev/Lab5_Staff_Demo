#pragma once

class Heading {
	virtual ~Heading() = 0;
	virtual double headingSalary() = 0;
};

Heading::~Heading() {}
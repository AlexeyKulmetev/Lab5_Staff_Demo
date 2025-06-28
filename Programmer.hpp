#pragma once
#include "Engineer.hpp"
#include "TeamLeader.hpp"


class Programmer : public Engineer {
public:
	// probably deleting from TeamLeader`s set should be added at the destructor
	~Programmer();
	
	Programmer(const int _id, const std::string& _name,
		const std::string& _projectName, const double _hourlyRate) :
		Engineer(_id, _name, _projectName, _hourlyRate) {}
};
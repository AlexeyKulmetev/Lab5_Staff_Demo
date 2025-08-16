#pragma once
#include <list>
#include <map>
#include <string>


// ============================================================

// Class helper contains std::map with projects budgets values
// Provides functionality to add, delete, search on this map

// ============================================================


class Budgets {
public:
	// probably should use to store projects name list
	static std::list<std::string> projectList;

	// returns false if the key is already exist
	static bool addProjectBudget(std::string& projectsName, long int budget);

	// returns -1 if the key did not found
	static long int getBudget(std::string& projecgtName);

private:
	static std::map<std::string, long int> projectsBudgets;
};
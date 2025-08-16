#include "Budgets.hpp"

std::map<std::string, long int> Budgets::projectsBudgets;

// probably should use to store projects name list
std::list<std::string> Budgets::projectList;

// returns false if the key is already exist
bool Budgets::addProjectBudget(std::string& projectsName, long int budget) {
	if (projectsBudgets.find(projectsName) != projectsBudgets.end()) {
		return false;
	}
	projectsBudgets[projectsName] = budget;
	return true;
}

// returns -1 if the key did not found
long int Budgets::getBudget(std::string& projecgtName) {
	auto it = projectsBudgets.find(projecgtName);
	if (it != projectsBudgets.end()) {
		return it->second;
	}
	else {
		return -1;
	}
}
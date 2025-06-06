#include "Budgets.hpp"

std::map<std::string, long int> Budgets::projectsBudgets;

bool Budgets::addProjectBudget(const std::string& projectsName, long int budget) {
	if (projectsBudgets.find(projectsName) != projectsBudgets.end()) {
		return false;
	}
	projectsBudgets[projectsName] = budget;
	return true;
}

long int Budgets::getBudget(std::string& projectName) {
	auto it = projectsBudgets.find(projectName);
	if (it != projectsBudgets.end()) {
		return it->second;
	}
	else {
		return -1;
	}
}
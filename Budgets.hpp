#pragma once
#include <map>
#include <string>


class Constants {
public:
	static std::map<std::string, long int> projectsBudgets;

	// returns false if the key is already exist
	static bool addProjectBudget(std::string& projectsName, int budget) {
		if (projectsBudgets.find(projectsName) != projectsBudgets.end()) {
			return false;
		}
		projectsBudgets[projectsName] = budget;
		return true;
	}

	// returns -1 if the key did not found
	static long int getBudget(std::string& projecgtName) {
		auto it = projectsBudgets.find(projecgtName);
		if (it != projectsBudgets.end()) {
			return it->second;
		}
		else {
			return -1;
		}
	}
};
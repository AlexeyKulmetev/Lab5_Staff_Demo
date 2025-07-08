#include "Cleaner.hpp"
#include "Driver.hpp"
//#include "Engineer.hpp"
#include "Programmer.hpp"
#include "Tester.hpp"
#include "Budgets.hpp"
#include <iostream>


int main() {
	Cleaner cl(1, "Petrovna", 1.3);
	cl.setWorkTime(10);
	cl.calculatePayment();
	std::cout << cl.getPayment();

	Driver dr(2, "Petroich", 1.5);
	dr.setWorkTime(10);
	dr.calculatePayment();
	std::cout << "\n" << dr.getPayment();

	Budgets::projectList.push_back("Arzamas");
	Budgets::projectsBudgets.insert({ "Arzamas", 200000 });
	Programmer pr(3, "Mihalich", "Arzamas", 150.0, 1.2);
	pr.setWorkTime(80.0);
	pr.calculatePayment();
	std::cout << "\n" << pr.getPayment();

	Budgets::projectList.push_back("Sarov");
	Budgets::projectsBudgets.insert({ "Sarov", 150000 });
	Tester ts(4, "Nikitichna", "Sarov", 120.0, 1.1);
	ts.setWorkTime(80.0);
	ts.calculatePayment();
	std::cout << "\n" << ts.getPayment();
	

	return 0;
}

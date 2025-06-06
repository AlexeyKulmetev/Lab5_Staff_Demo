#include "Cleaner.hpp"
#include "Driver.hpp"
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

	Budgets::addProjectBudget("Project1", 200000);
	Tester ts(3, "Ivanich", "Project1", 2.1);
	ts.calculatePayment();
	std::cout << "\n" << ts.getPayment();

	return 0;
}

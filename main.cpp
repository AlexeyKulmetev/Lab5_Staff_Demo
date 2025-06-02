#include "Cleaner.hpp"
#include "Driver.hpp"
#include <iostream>


int main() {
	Cleaner cl(1, "Petrovna", 1.3);
	cl.setWorkTime(10);
	cl.calculateWorkedTimeSalary();
	std::cout << cl.getPayment();

	Driver dr(2, "Petroich", 1.5);
	dr.setWorkTime(10);
	dr.calculateWorkedTimeSalary();
	std::cout << "\n" << dr.getPayment();

	return 0;
}

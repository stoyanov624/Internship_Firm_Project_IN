#pragma once 
#include "Employee.h"

class Accountant : public Employee {
public:
	Accountant() {};
	Accountant(const std::string& name);

	void greet();
	void calculateSalary();
	void report();
};
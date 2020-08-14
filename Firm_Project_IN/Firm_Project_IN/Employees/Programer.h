#pragma once 
#include "Employee.h"

class Programmer : public Employee {
	std::vector<std::string> progrLanguages;
	size_t projectsPerMonth;
public:
	Programmer();
	Programmer(const std::string& name, const std::vector<std::string>& langs, size_t projects);

	void greet();
	void calculateSalary();
	void report();
};
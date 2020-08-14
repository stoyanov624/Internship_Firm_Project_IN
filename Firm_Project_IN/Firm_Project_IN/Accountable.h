#pragma once
#include "Employee.h"

class Accountable {
private:
	std::vector<Employee*> employeesToReport;
	static Accountable* singleton;

	Accountable(const std::vector<Employee*> employees);
public:
	void report();
	void addAccountable(Employee* employee);
	static Accountable* getInstance(const std::vector<Employee*> employees);
};

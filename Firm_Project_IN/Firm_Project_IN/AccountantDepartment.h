#pragma once
#include "Employee.h"
#include "Department.h"

class Accountable : public Department {
private:
	std::vector<Employee*> employeesToReport;
	static Accountable* singleton;

	Accountable(const std::vector<Employee*> employees);
public:
	void report();
	void addAccountable(Employee* employee);
	static Accountable* getInstance(const std::vector<Employee*> employees);

	void giveTask();
	void finishTask();
};

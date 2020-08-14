#pragma once
#include "../Employees/Employee.h"

class AccountantDepartment {
private:
	std::vector<Employee*> employeesToReport;
	static AccountantDepartment* singleton;

	AccountantDepartment(const std::vector<Employee*> employees);
public:
	void report();
	void addAccountable(Employee* employee);
	static AccountantDepartment* getInstance(const std::vector<Employee*> employees);

	void giveTask();
	void finishTask();
};

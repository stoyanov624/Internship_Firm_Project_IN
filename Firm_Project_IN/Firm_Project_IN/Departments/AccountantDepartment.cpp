#include "AccountantDepartment.h"

AccountantDepartment::AccountantDepartment(const std::vector<Employee*> employees) {
	employeesToReport = employees;
}

void AccountantDepartment::report() {
	if (employeesToReport.size() != 0) {
		for (size_t i = 0; i < employeesToReport.size(); i++) {
			employeesToReport[i]->report();
		}
	}
}

void AccountantDepartment::addAccountable(Employee* employee) {
	this->employeesToReport.push_back(employee);
}

AccountantDepartment* AccountantDepartment::getInstance(const std::vector<Employee*> employees) {
	if (singleton == nullptr) {
		singleton = new AccountantDepartment(employees);
	}

	return singleton;
}

void AccountantDepartment::giveTask() {
	report();
}

void AccountantDepartment::finishTask() {
	std::cout << "The accountant department finished with the reports!" << std::endl;
}

AccountantDepartment* AccountantDepartment::singleton = nullptr;
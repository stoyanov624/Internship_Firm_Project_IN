#include "AccountantDepartment.h"

Accountable::Accountable(const std::vector<Employee*> employees) {
	employeesToReport = employees;
}

void Accountable::report() {
	if (employeesToReport.size() != 0) {
		for (size_t i = 0; i < employeesToReport.size(); i++) {
			employeesToReport[i]->report();
		}
	}
}

void Accountable::addAccountable(Employee* employee) {
	this->employeesToReport.push_back(employee);
}

Accountable* Accountable::getInstance(const std::vector<Employee*> employees) {
	if (singleton == nullptr) {
		singleton = new Accountable(employees);
	}

	return singleton;
}

void Accountable::giveTask() {
	report();
}

void Accountable::finishTask() {
	std::cout << "The accountant department finished with the reports!" << std::endl;
}

Accountable* Accountable::singleton = nullptr;
#include "Accountant.h"

Accountant::Accountant(const std::string& name) {
	this->name = name;
	calculateSalary();
}

void Accountant::greet() {
	std::cout << "Hello, I am " << name << " and I am an accountant with a salary\n of " << salary << "$." << std::endl;
}

void Accountant::calculateSalary() {
	this->salary = 6000;
}

void Accountant::report() {
	std::cout << "This month " << name << " earned " << salary << "$." << std::endl;
}

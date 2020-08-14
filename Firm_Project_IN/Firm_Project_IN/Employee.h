#pragma once 
#include <iostream>
#include <vector>

class Employee {
protected:
	std::string name;
	size_t salary;
public:
	Employee() { this->salary = 0; }

	virtual void greet() = 0;
	virtual void calculateSalary() = 0;
	virtual void report() = 0;
	
	const std::string& getName() const { return this->name; }
	size_t getSalary() const { return this->salary; }
};
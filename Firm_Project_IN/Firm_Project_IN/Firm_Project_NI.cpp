#include <iostream>
#include "Accountable.h"
#include "Seller.h"
#include "Accountant.h"
#include "Programer.h"

int main() {
	std::vector<std::string> languages = { "C++", "JavaScript", "C#" };
	Employee* nasko = new Programmer("NASKO", languages, 16);
	Employee* mladen = new Seller("MLADEN");
	Employee* traicho = new Accountant("TRAICHO");

	std::vector<Employee*> employees;
	employees.push_back(nasko);
	employees.push_back(mladen);
	employees.push_back(traicho);
	Accountable::getInstance(employees)->report();
}

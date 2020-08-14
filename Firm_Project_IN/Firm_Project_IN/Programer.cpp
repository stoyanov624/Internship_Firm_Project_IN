#include "Programer.h"

Programmer::Programmer() {
	this->projectsPerMonth = 0;
}

Programmer::Programmer(const std::string& name, const std::vector<std::string>& langs, size_t projects) {
	this->name = name;
	this->progrLanguages = langs;
	this->projectsPerMonth = projects;
	calculateSalary();
}

void Programmer::greet() {
	std::cout << "Hello, I am " << name << " and I am a programmer with a salary\n of " << salary << "$." << std::endl;
	std::cout << "I have " << projectsPerMonth << " projects per month." << std::endl;
	std::cout << "My used programming languages:" << std::endl;
	for (size_t i = 0; i < progrLanguages.size(); i++) {
		std::cout << progrLanguages[i] << std::endl;
	}
}

void Programmer::calculateSalary() {
	this->salary = 4000 + progrLanguages.size() * 150 + projectsPerMonth * 1200;
}

void Programmer::report() {
	std::cout << "This month " << name << " earned " << salary << "$ for an estimated work of 40 hours" << std::endl;
	std::cout << "and completed " << projectsPerMonth << " projects." << std::endl;
}

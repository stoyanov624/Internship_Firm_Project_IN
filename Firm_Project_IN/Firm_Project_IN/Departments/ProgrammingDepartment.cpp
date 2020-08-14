#include "ProgrammingDepartment.h"

ProgrammingDepartment::ProgrammingDepartment() : programmers(), products_made() {}

ProgrammingDepartment::ProgrammingDepartment(const std::vector<Programmer>& programmers) : products_made() {
	this->programmers = programmers;
} 

ProgrammingDepartment& ProgrammingDepartment::addProgrammer(const Programmer& programmer) {
	this->programmers.push_back(programmer);
	return *this;
}

void ProgrammingDepartment::createProduct(Product* product) {

	this->products_made.push_back(product);
}

const std::vector<Product*>& ProgrammingDepartment::getProductsMade() const {
	return products_made;
}


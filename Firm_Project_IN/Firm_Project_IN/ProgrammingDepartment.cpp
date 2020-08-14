#include "ProgrammingDepartment.h"

ProgrammingDepartment::ProgrammingDepartment() : programmers(), products_made() {}

ProgrammingDepartment& ProgrammingDepartment::addProgrammer(const Programmer& programmer) {
	this->programmers.push_back(programmer);
	return *this;
}

void ProgrammingDepartment::createProduct(const std::string& product_type) {

	this->products_made.push_back(ProductFactory::createProduct(product_type));
}

const std::vector<Product*>& ProgrammingDepartment::getProductsMade() const {
	return products_made;
}

void ProgrammingDepartment::giveTask() {

}

void ProgrammingDepartment::finishTask() {

}
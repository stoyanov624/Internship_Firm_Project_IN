#pragma once
#include "Department.h"
#include "Programer.h"
#include "ProductFactory.h"
#include <vector>
class ProgrammingDepartment : public Department
{
private:
	std::vector<Programmer> programmers;
	std::vector<Product*> products_made;
public:
	ProgrammingDepartment();
	ProgrammingDepartment& addProgrammer(const Programmer& programmer);
	const std::vector<Product*>& getProductsMade() const;
	void createProduct(const std::string& product_type);
	void giveTask();
	void finishTask();
};


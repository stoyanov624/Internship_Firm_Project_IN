#pragma once
#include "../Employees/Programer.h"
#include "../Products/ProductFactory.h"
#include <vector>
class ProgrammingDepartment
{
private:
	std::vector<Programmer> programmers;
	std::vector<Product*> products_made;
public:
	ProgrammingDepartment();
	ProgrammingDepartment(const std::vector<Programmer>& programmers);
	ProgrammingDepartment& addProgrammer(const Programmer& programmer);
	const std::vector<Product*>& getProductsMade() const;
	void createProduct(Product* product);
	
};


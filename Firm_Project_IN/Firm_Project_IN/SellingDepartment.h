#pragma once
#include "Department.h"
#include "Seller.h"
#include <vector>

class SellingDepartment : public Department {
private:
	std::vector<Seller> sellers;
public:
	SellingDepartment(const std::vector<Seller> sellers);

	void giveTask();
	void giveTask(Product* product);
	void finishTask();
};


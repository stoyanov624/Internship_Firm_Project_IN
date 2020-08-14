#pragma once
#include "../Employees/Seller.h"
#include <vector>

class SellingDepartment {
private:
	std::vector<Seller> sellers;
public:
	SellingDepartment(const std::vector<Seller>& sellers);

	void giveTask();
	void giveTask(Product* product);
	void finishTask();
};


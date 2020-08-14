#include "SellingDepartment.h"

SellingDepartment::SellingDepartment(const std::vector<Seller>& sellers) {
	this->sellers = sellers;
}

void SellingDepartment::giveTask() {
	for (size_t i = 0; i < sellers.size(); i++) {
		std::cout << this->sellers[i].getName() << " started selling his products..." << std::endl;
		this->sellers[i].print();
		this->sellers[i].sellLastProduct();
	}
}

void SellingDepartment::giveTask(Product* product) {
	for (size_t i = 0; i < sellers.size(); i++) {
		if (sellers[i].checkAvailability(product)) {
			std::cout << this->sellers[i].getName() << " started selling his products..." << std::endl;
			this->sellers[i].print();
			sellers[i].sellProduct(product);
		}
	}
}

void SellingDepartment::finishTask() {
	std::cout << "The selling department finished the job!" << std::endl;
}

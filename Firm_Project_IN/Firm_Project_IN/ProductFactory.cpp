#include "ProductFactory.h"
#include "Laptop.h"
#include "Phone.h"
#include "Tablet.h"
Product* ProductFactory::createProduct(const std::string& product_type) {
	Product* product = NULL;

	if (product_type == "laptop") {
		product = new Laptop();
	}
	else if (product_type == "phone"){
		product = new Phone();
	}
	else if (product_type == "tablet") {
		product = new Tablet();
	}
	else {
		std::cout << "Invalid product type!" << std::endl;
	}

	return product;
}
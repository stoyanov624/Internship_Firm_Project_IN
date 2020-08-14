#pragma once
#include "Employee.h"
#include "../Products/Product.h"

class Seller : public Employee {
	size_t soldProducts;
	std::vector<Product*> products;
public:
	Seller();
	Seller(const std::string& name, const std::vector<Product*>& products);

	void greet();
	void calculateSalary();
	void report();

	void addProduct(Product* product);
	void sellLastProduct();
	void sellProduct(Product* product);
	bool checkAvailability(Product* product);
	const std::string& getName() const;

	// helpers 
	void pop_at(size_t pos);
	void print() const;
};



















// Observers for the store
/* class SoldProductObserver {
public:
	virtual void update() = 0;
};

class SoldProductSubject {
	std::vector<SoldProductObserver*> observers;
public:
	void addObserver(SoldProductObserver* obs) {
		observers.push_back(obs);
	}

	void notify() {
		for (SoldProductObserver* observer : observers) {
			observer->update();
		}
	}
};

class SoldProductService {
	SoldProductSubject* sold;
	Seller* seller;
public:
	SoldProductService() {
		sold = new SoldProductSubject();
	}

	void addSoldProductObserver(SoldProductObserver* obs) {
		sold->addObserver(obs);
	}

	void sell() {

		sold->notify();
	}
}; */
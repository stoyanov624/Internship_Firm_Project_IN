#pragma once
#include "Employee.h"

class Seller : public Employee {
	size_t soldProducts;
public:
	Seller();
	Seller(const std::string& name);

	void greet();
	void calculateSalary();
	void report();
	void sellProduct();
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
#pragma once
#include "Seller.h"

Seller::Seller() {
	this->soldProducts = 0;
}

Seller::Seller(const std::string& name) {
	this->name = name;
	this->soldProducts = 0;
}

void Seller::greet() {
	std::cout << "Hello I am " << name << " and I sell products from the store!" << std::endl;
}

void Seller::calculateSalary() {
	this->salary = 2000;
}

void Seller::report() {
	std::cout << name << " earned " << salary << "$ this month and sold " << soldProducts << " products." << std::endl;
}

void Seller::sellProduct() {
	this->soldProducts++;
}

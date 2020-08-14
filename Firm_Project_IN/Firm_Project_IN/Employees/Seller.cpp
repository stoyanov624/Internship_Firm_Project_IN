#pragma once
#include "Seller.h"

Seller::Seller() {
	this->soldProducts = 0;
}

Seller::Seller(const std::string& name, const std::vector<Product*>& products) {
	this->name = name;
	this->soldProducts = 0;
	this->products = products;
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

void Seller::addProduct(Product* product) {
	this->products.push_back(product);
}

void Seller::sellLastProduct() {
	this->soldProducts++;
	this->products.pop_back();
}

void Seller::sellProduct(Product* product) {
	for (size_t i = 0; i < products.size(); i++) {
		if (products[i]->getSerialNumber() == product->getSerialNumber())
			pop_at(i + 1);
	}
	this->soldProducts++;
}

bool Seller::checkAvailability(Product* product) {
	for (size_t i = 0; i < products.size(); i++) {
		if (products[i]->getSerialNumber() == product->getSerialNumber())
			return true;
	}

	return false;
}

const std::string& Seller::getName() const {
	return this->name;
}

void Seller::pop_at(size_t pos) {
	for (size_t i = pos - 1; i < products.size(); i++) {
		products[i] = products[i + 1];
	}

	products.pop_back();
}

void Seller::print() const
{
	for (size_t i = 0; i < products.size(); i++) {
		products[i]->printName();
	}
}

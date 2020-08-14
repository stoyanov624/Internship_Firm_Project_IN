#pragma once
#include <iostream>
#include <string>
class Product
{
protected:
	std::string product_name;
	std::string product_serial_number;
	std::string CPU;
	size_t RAM;
	double product_price;
public:
	const std::string& getSerialNumber() const { return this->product_serial_number; };
	void printName() const { std::cout << " - " << this->product_name << std::endl; };
	virtual void print() const = 0;
};


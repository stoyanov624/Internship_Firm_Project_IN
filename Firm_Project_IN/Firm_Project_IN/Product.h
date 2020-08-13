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
	virtual void print() = 0;
};


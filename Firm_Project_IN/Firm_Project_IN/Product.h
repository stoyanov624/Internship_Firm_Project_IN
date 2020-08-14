#pragma once
#include <iostream>
#include <string>
class Product
{
protected:
	std::string product_name;
	std::string product_serial_number;
	double product_price;
	
public:
	virtual void print() const = 0;
};


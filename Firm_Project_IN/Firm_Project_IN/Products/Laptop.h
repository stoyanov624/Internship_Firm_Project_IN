#pragma once
#include "Product.h"
class Laptop : public Product
{
private:
	std::string GPU;
	std::string CPU;
	size_t RAM;
public:
	Laptop();
	Laptop(const std::string& _product_name,const std::string& _product_serial_number,double _price ,const std::string& _GPU , const std::string& _CPU, size_t _RAM);
	void print() const override;
};


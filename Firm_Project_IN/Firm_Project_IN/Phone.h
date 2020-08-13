#pragma once
#include "Product.h"
class Phone : public Product
{
private:
	double front_camera_megapixels;
	double back_camera_megapixels;
public:
	Phone();
	Phone(const std::string& _product_name, const std::string& _product_serial_number, double _front_camera_megapixels, double back_camera_megapixels, const std::string& _CPU, size_t _RAM);
	void print();
};


#pragma once
#include "Product.h"
class Tablet : public Product
{
private:
	double front_camera_megapixels;
	double back_camera_megapixels;
public:
	Tablet();
	Tablet(const std::string& _product_name, const std::string& _product_serial_number, double _front_camera_megapixels, double _back_camera_megapixels, const std::string& _CPU, size_t _RAM);
	void print() const noexcept;
};


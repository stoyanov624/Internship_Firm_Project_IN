#include "Tablet.h"

Tablet::Tablet() : front_camera_megapixels(0), back_camera_megapixels(0),CPU(),RAM(0) {}

Tablet::Tablet(const std::string& _product_name, const std::string& _product_serial_number,double _product_price ,double _front_camera_megapixels, double _back_camera_megapixels, const std::string& _CPU, size_t _RAM) {
	product_name = _product_name;
	product_serial_number = _product_serial_number;
	product_price = _product_price;
	this->CPU = _CPU;
	this->RAM = _RAM;
	this->front_camera_megapixels = _front_camera_megapixels;
	this->back_camera_megapixels = _back_camera_megapixels;
}

void Tablet::print() const {
	std::cout << "Product name: " << product_name << std::endl;
	std::cout << "Serial number: " << product_serial_number << std::endl;
	std::cout << "CPU: " << CPU << std::endl;
	std::cout << "RAM: " << RAM << std::endl;
	std::cout << "Front camera megapixels: " << front_camera_megapixels << std::endl;
	std::cout << "Back camera megapixels: " << back_camera_megapixels << std::endl;
}
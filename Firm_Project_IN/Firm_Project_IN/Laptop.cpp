#include "Laptop.h"

Laptop::Laptop() : GPU(),CPU(),RAM(0) {}

Laptop::Laptop(const std::string& _product_name, const std::string& _product_serial_number, const std::string& _GPU, const std::string& _CPU, size_t _RAM) {
	product_name = _product_name;
	product_serial_number = _product_serial_number;
	this->CPU = _CPU;
	this->RAM = _RAM;
	this->GPU = _GPU;
}

void Laptop::print() const noexcept {
	std::cout << "Product name: " << product_name << std::endl;
	std::cout << "Serial number: " << product_serial_number << std::endl;
	std::cout << "CPU: " << this->CPU << std::endl;
	std::cout << "RAM: " << this->RAM << std::endl;
	std::cout << "GPU: " << this->GPU << std::endl;
}
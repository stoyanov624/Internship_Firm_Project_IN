#pragma once
#include "Products/Product.h"
#include "Departments/ProgrammingDepartment.h"
#include "Departments/SellingDepartment.h"
#include "Departments/AccountantDepartment.h"


struct Product_Request {
	std::string product_type;
	std::string product_name;
	double product_price;
	double front_camera_megapixels;
	double back_camera_megapixels;
	std::string CPU;
	std::string GPU;
	size_t RAM;
};

class Person {
	std::string name;
	double age;
};

class Shop 
{
private:
	ProgrammingDepartment prog_depart;
	SellingDepartment sell_depart;
public:
	Shop(const std::vector<Programmer>& programmers, const std::vector<Seller>& sellers);

};


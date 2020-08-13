#pragma once
#include "Phone.h"
class ProductFactory
{
public:
	static Product* createProduct(const std::string& product_type);
};


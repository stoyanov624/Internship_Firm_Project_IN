
#include <iostream>
#include "Phone.h"
#include "Laptop.h"
#include "Tablet.h"
#include "ProductFactory.h"
int main()
{
	Product* p1 = ProductFactory::createProduct("laptop");
	p1->print();
}
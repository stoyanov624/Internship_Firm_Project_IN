#include <iostream>
#include "AccountantDepartment.h"
#include "Seller.h"
#include "Accountant.h"
#include "Programer.h"
#include "Phone.h"
#include "Laptop.h"
#include "Tablet.h"
#include "SellingDepartment.h"

int main() {
	std::vector<Product*> products;
	Product* iphone = new Phone("Iphone XS 64gb", "A1250", 12, 12, "Intel Core I5-10054", 8);
	Product* iphone2 = new Phone("Iphone XS MAX", "A1251", 12, 12, "Intel Core I5-10054", 8);
	Product* iphone3 = new Phone("Iphone 11 Pro", "A1252", 12, 12, "Intel Core I5-9054", 12);
	products.push_back(iphone);
	products.push_back(iphone2);
	products.push_back(iphone3);

	std::vector<Seller> sellers;
	Seller mladen = Seller("MLADEN", products);
	Seller stoqn = Seller("STOYAN", products);
	Seller dancho = Seller("DANCHO", products);

	sellers.push_back(mladen);
	sellers.push_back(stoqn);
	sellers.push_back(dancho);

	SellingDepartment sell_dep(sellers);
	sell_dep.giveTask();





	/*std::vector<std::string> languages = { "C++", "JavaScript", "C#" };
	Employee* nasko = new Programmer("NASKO", languages, 16);
	Employee* mladen = new Seller("MLADEN", products);
	Employee* traicho = new Accountant("TRAICHO");

	std::vector<Employee*> employees;
	employees.push_back(nasko);
	employees.push_back(mladen);
	employees.push_back(traicho);

	Accountable::getInstance(employees)->report();*/
}
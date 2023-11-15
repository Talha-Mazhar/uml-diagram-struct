#include "../include/Supplier.h"

void Supplier::setName(string name) { this->name = name; };

void Supplier::setCompany(string company) { this->company = company; };

string Supplier::getName() { return name; };

string Supplier::getCompany() { return company; };

void Supplier::printSupplierInfo() {
  cout << "Supplier Name: " << getName() << endl;
  cout << "Company Name: " << getCompany() << endl;
};
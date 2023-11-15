#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <iostream>
#include <string>

using namespace std;

class Supplier {

  string name, company;

public:
  Supplier(string name = "", string company = "") {}

  void setName(string);
  void setCompany(string);

  string getName();
  string getCompany();

  void printSupplierInfo();
};
#endif // SUPPLIER_H
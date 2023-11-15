#ifndef SALESPRODUCT_H
#define SALESPRODUCT_H
#include "Product.h"
#include <iostream>
#include <string>

using namespace std;

class SalesProduct : virtual public Product {

  float salePrice;

public:
  SalesProduct(int code = 0, string name = "", double cost = 0.0,
               float salePrice = 0.00)
      : Product(code, name, cost), salePrice(salePrice) {}

  void setSalePrice(float);

  float getSalePrice();

  void printProductInfo();
};
#endif // SALESPRODUCT_H
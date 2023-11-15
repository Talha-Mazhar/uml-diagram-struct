#ifndef INVENTORYPRODUCT_H
#define INVENTORYPRODUCT_H
#include "Product.h"
#include "Supplier.h"
#include <iostream>
#include <string>

using namespace std;

class InventoryProduct : virtual public Product {

  int quantity;

  Supplier supplier;

public:
  InventoryProduct(int code = 0, string name = "", double cost = 0.0,
                   int quantity = 0.0, string supplier_name = "",
                   string company = "")
      : Product(code, name, cost), quantity(quantity),
        supplier(supplier_name, company) {}

  // void setQuantity(int);

  // int getQuantity();

  void setProductInfo(string, string);

  void printProductInfo();
};
#endif // INVENTORYPRODUCT_H
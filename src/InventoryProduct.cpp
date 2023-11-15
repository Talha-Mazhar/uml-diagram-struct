#include "../include/InventoryProduct.h"

void InventoryProduct::setQuantity(int quantity) { this->quantity = quantity; };

int InventoryProduct::getQuantity() { return quantity; };

void InventoryProduct::setProductInfo(string name, string company) {
  setName(name);
  supplier.setCompany(company);
};

void InventoryProduct::printProductInfo() {

  cout << "Product Name: " << getName() << endl;
  cout << "Product Code: " << getCode() << endl;
  cout << "Product Cost: " << getPrice() << endl;
  supplier.printSupplierInfo();
};
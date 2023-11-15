#include "../include/SalesProduct.h"

void SalesProduct::setSalePrice(float salePrice) {
  salePrice = getPrice() * (21 / 100);
};

float SalesProduct::getSalePrice() { return salePrice; };

void SalesProduct::printProductInfo() {

  cout << "Product Name: " << getName() << endl;
  cout << "Product Code: " << getCode() << endl;
  cout << "Product Cost: " << getPrice() << endl;
  cout << "Sale Price: " << getSalePrice() << endl;
};
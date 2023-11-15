#include "../include/SalesProduct.h"

void SalesProduct::setSalePrice(float salePrice) {
  this->salePrice = getPrice() * 0.21;
};

float SalesProduct::getSalePrice() { return salePrice; };

void SalesProduct::printProductInfo() {

  cout << "Product Name: " << getName() << endl;
  cout << "Product Code: " << getCode() << endl;
  cout << "Product Cost: " << getPrice() << endl;
  cout << "Sale Price: " << getSalePrice() << endl;
};
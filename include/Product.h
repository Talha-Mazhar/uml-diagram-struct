#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>

using namespace std;

class Product {
  int code;
  string name;
  double price;

public:
  Product() : code(0), name(""), price(0.0) {}

  Product(int code, string name, double price)
      : code(code), name(name), price(price) {}

  void setCode(int);
  void setName(string);
  void setPrice(double);

  int getCode();
  string getName();
  double getPrice();
};
#endif // PRODUCT_H
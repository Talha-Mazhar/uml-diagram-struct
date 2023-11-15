#include "../include/Product.h"

void Product::setCode(int code) { code = code; };
void Product::setName(string name) { name = name; };
void Product::setPrice(double price) { price = price; };

int Product::getCode() { return code; };
string Product::getName() { return name; };
double Product::getPrice() { return price; };
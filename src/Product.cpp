#include "../include/Product.h"

void Product::setCode(int code) { this->code = code; };
void Product::setName(string name) { this->name = name; };
void Product::setPrice(double price) { this->price = price; };

int Product::getCode() { return code; };
string Product::getName() { return name; };
double Product::getPrice() { return price; };
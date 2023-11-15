#include <iostream>

#include "../include/InventoryProduct.h"
#include "../include/Product.h"
#include "../include/SalesProduct.h"
#include "../include/Supplier.h"
using namespace std;
int main() {
  // Test Product class
  Product product1(101, "Widget", 10.99);
  cout << "Product Code: " << product1.getCode()
       << ", Name: " << product1.getName() << ", Price: $"
       << product1.getPrice() << endl;

  // Test SalesProduct class
  SalesProduct salesProduct1(201, "Gadget", 15.99, 0.0);
  salesProduct1.setSalePrice(0.15); // Set sale price to 15% of cost
  cout << "Sales Product Code: " << salesProduct1.getCode()
       << ", Name: " << salesProduct1.getName() << ", Cost: $"
       << salesProduct1.getPrice() << ", Sale Price: $"
       << salesProduct1.getSalePrice() << endl;

  // Test InventoryProduct class
  InventoryProduct inventoryProduct1(301, "Tool", 12.99, 50, "Supplier1",
                                     "ToolCo");
  cout << "Inventory Product Code: " << inventoryProduct1.getCode()
       << ", Name: " << inventoryProduct1.getName() << ", Cost: $"
       << inventoryProduct1.getPrice()
       << ", Quantity: " << inventoryProduct1.getQuantity() << endl;

  // Test Supplier class
  Supplier supplier1;
  supplier1.setName("Talha");
  supplier1.setCompany("Talha Pvt ltd");
  // Test Supplier class
  supplier1.printSupplierInfo();

  // Test setting product info for InventoryProduct
  inventoryProduct1.setProductInfo("Wrench", "ToolCo");
  cout << "Updated Product Info: ";
  inventoryProduct1.printProductInfo();

  return 0;
}

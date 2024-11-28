#include<iostream>
#include "Stock.h"

int main() {
// Tests to see if stock is working
Stock share("apple", 200.00, 10);
share.displayTheStocks();

share.setPrice(150.00);
share.setQuantity(15);
share.displayTheStocks();

std::cout << share.getPrice() << "\n";
std::cout << share.getQuantity() << "\n";
std::cout << share.getSymbol() << "\n";

}
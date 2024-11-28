#include<iostream>
#include "Stock.h"
#include "Trader.h"

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

//Tests to see if trader working
 Trader trader("Luke", 10000.0); // Example trader
    trader.viewAccountBalance();

return 0;
}
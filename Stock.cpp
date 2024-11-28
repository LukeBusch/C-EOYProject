#include "Stock.h"
#include <iostream>

//constructor actual
Stock::Stock(const std::string &symbol, double price, int quantity) : symbol(symbol), price(price), quantity(quantity) {}

//getters
std::string Stock::getSymbol() const {return symbol;}
double Stock::getPrice() const {return price; }
int Stock::getQuantity() const {return quantity; }

//setters
void Stock::setPrice(double price) { this->price = price; }
void Stock::setQuantity(int quantity) {this->quantity = quantity; }

//function
void Stock::displayTheStocks() const {

    std::cout <<"Stock Symbol: " << symbol<< ", Cost Per Unit: $" << price << ", Quantity: " << quantity << std::endl;

}
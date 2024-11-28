#include "Trader.h"
#include <iostream>

Trader::Trader(const std::string &name, double initialBalance) : name(name), accountBalance(initialBalance) {}

std::string Trader::getName() const { return name; }
double Trader::getAccountBalance() const { return accountBalance; }

void Trader::setAccountBalance(double balance) {accountBalance = balance; }

void Trader::buyStock(const std::string &symbol, int quantity) {
    //dioing this later
}

void Trader::sellStock(const std::string &symbol, int quantity){
    //later
}

void Trader::displayPortfolio() const{
    //later
}

void Trader::viewAccountBalance() const {
    std::cout << "Balance: $" << accountBalance << std::endl;
}
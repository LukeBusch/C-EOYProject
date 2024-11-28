#include "Trader.h"
#include <iostream>

//constructor actual
Trader::Trader(const std::string &name, double initialBalance) : name(name), accountBalance(initialBalance) {}

//getters
std::string Trader::getName() const { return name; }
double Trader::getAccountBalance() const { return accountBalance; }

//setter
void Trader::setAccountBalance(double balance) {accountBalance = balance; }

//stubs, building later except viewAccountBalance

//will add stock to trader sheet
void Trader::buyStock(const std::string &symbol, int quantity) {
    //dioing this later
}

//will remove stock from trader sheet
void Trader::sellStock(const std::string &symbol, int quantity){
    //later
}

//will show trader sheet
void Trader::displayPortfolio() const{
    //later
}

//shows current liquidity
void Trader::viewAccountBalance() const {
    std::cout << "Balance: $" << accountBalance << std::endl;
}
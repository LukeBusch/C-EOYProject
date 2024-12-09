#ifndef TRADER_H
#define TRADER_H

#include <string>
#include <vector>
#include "Stock.h"

class Trader {
private: 
    std::string name;
    double accountBalance;
    std::vector<Stock> portfolio;

public:
    //constrtuctor
    Trader(const std::string &name, double initialBalance);
    
    //getters
    std::string getName() const;
    double getAccountBalance() const;

    //setter
    void setAccountBalance(double balance);


    //stubs , will build these out later
    void buyStock(const std::string &symbol, int quantity);
    void sellStock(const std::string &symbol, int quantity);
    void displayPortfolio() const;
    void viewAccountBalance() const;

     double calculatePortfolioValue() const;

};

#endif
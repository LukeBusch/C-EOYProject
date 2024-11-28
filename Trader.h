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
    Trader(const std::string &name, double initialBalance);

    std::string getName() const;
    double getAccountBalance() const;

    void setAccountBalance(double balance);

    void buyStock(const std::string &symbol, int quantity);
    void sellStock(const std::string &symbol, int quantity);
    void displayPortfolio() const;
    void viewAccountBalance() const;
};

#endif
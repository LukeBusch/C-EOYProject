#include "Trader.h" 
#include <iostream>
#include <algorithm> 

//constructor actual
Trader::Trader(const std::string &name, double initialBalance) : name(name), accountBalance(initialBalance) {}

//getters
std::string Trader::getName() const { return name; }
double Trader::getAccountBalance() const { return accountBalance; }

void Trader::setAccountBalance(double balance) { accountBalance = balance; }

void Trader::buyStock(const std::string &symbol, int quantity) {
    double totalCost = 0.0;
    bool stockFound = false;

    for (auto &stock : portfolio) {
        if (stock.getSymbol() == symbol) {
            totalCost = stock.getPrice() * quantity;
            if (accountBalance >= totalCost) {
                accountBalance -= totalCost;
                stock.setQuantity(stock.getQuantity() + quantity);
                stockFound = true;
                break;
            } else {
                std::cout << "Insufficient funds to buy " << quantity << " of " << symbol << "." << std::endl;
                return;
            }
        }
    }

    if (!stockFound) {
        std::cout << "Stock " << symbol << " not found in portfolio." << std::endl;
    }
}

void Trader::sellStock(const std::string &symbol, int quantity) {
    for (auto &stock : portfolio) {
        if (stock.getSymbol() == symbol) {
            if (stock.getQuantity() >= quantity) {
                double totalSale = stock.getPrice() * quantity;
                accountBalance += totalSale;
                stock.setQuantity(stock.getQuantity() - quantity);
                if (stock.getQuantity() == 0) {
                    portfolio.erase(std::remove(portfolio.begin(), portfolio.end(), stock), portfolio.end());
                }
                return;
            } else {
                std::cout << "Insufficient quantity to sell " << quantity << " of " << symbol << "." << std::endl;
                return;
            }
        }
    }

    std::cout << "Stock " << symbol << " not found in portfolio." << std::endl;
}

void Trader::displayPortfolio() const {
    if (portfolio.empty()) {
        std::cout << "Portfolio is empty." << std::endl;
        return;
    }

    double totalValue = 0.0;
    for (const auto &stock : portfolio) {
        double stockValue = stock.getPrice() * stock.getQuantity();
        totalValue += stockValue;
        std::cout << "Stock Symbol: " << stock.getSymbol()
                  << ", Quantity: " << stock.getQuantity()
                  << ", Total Value: $" << stockValue << std::endl;
    }
    std::cout << "Total Portfolio Value: $" << totalValue << std::endl;
}

//shows current liquidity
void Trader::viewAccountBalance() const {
    std::cout << "Balance: $" << accountBalance << std::endl;
}

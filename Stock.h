#ifndef STOCK_H
#define STOCK_H

#include <string>

class Stock {
private:
    std::string symbol;
    int quantity;
    double price;

public:
    Stock(const std::string &symbol, double price, int quantity);

    std::string getSymbol() const;
    int getQuantity() const;
    double getPrice() const;

    void setQuantity(int quantity);
    void setPrice(double price);

    void displayTheStocks() const;

};

#endif
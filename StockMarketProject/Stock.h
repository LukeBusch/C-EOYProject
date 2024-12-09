#ifndef STOCK_H
#define STOCK_H

#include <string>

class Stock {
private:
    std::string symbol;
    int quantity;
    double price;

public:

    bool operator==(const Stock &other) const {
    return symbol == other.symbol && price == other.price && quantity == other.quantity;
}


    //This is the constructor format Im gonna use
    Stock(const std::string &symbol, double price, int quantity);

    //getters
    std::string getSymbol() const;
    int getQuantity() const;
    double getPrice() const;
    
    //setters
    void setQuantity(int quantity);
    void setPrice(double price);


    //stub for function, only planning on one for this class
    void displayTheStocks() const;
    void fluctuatePrice();
};

#endif
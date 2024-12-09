#include <iostream>
#include "Stock.h"
#include "Trader.h"

void displayMenu() {
    std::cout << "\n--- Stock Trading Simulation Menu ---\n";
    std::cout << "1. Create a Trader\n";
    std::cout << "2. View Trader Account Balance\n";
    std::cout << "3. Update Trader Account Balance\n";
    std::cout << "4. Create a Stock\n";
    std::cout << "5. View Stock Details\n";
    std::cout << "6. Update Stock Details\n";
    std::cout << "7. View Trader Portfolio\n";
    std::cout << "0. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    Trader* trader = nullptr;
    Stock* stock = nullptr;

    int choice;
    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name;
                double balance;
                std::cout << "Enter trader's name: ";
                std::cin >> name;
                std::cout << "Enter initial balance: ";
                std::cin >> balance;
                trader = new Trader(name, balance);
                std::cout << "Trader created successfully.\n";
                break;
            }
            case 2: {
                if (trader) {
                    trader->viewAccountBalance();
                } else {
                    std::cout << "No trader available. Create a trader first.\n";
                }
                break;
            }
            case 3: {
                if (trader) {
                    double balance;
                    std::cout << "Enter amount to add or subtract using negative: ";
                    std::cin >> balance;
                    trader->setAccountBalance(balance);
                    std::cout << "Balance updated successfully.\n";
                } else {
                    std::cout << "No trader available. Create a trader first.\n";
                }
                break;
            }
            case 4: {
                std::string symbol;
                double price;
                int quantity;
                std::cout << "Enter stock symbol: ";
                std::cin >> symbol;
                std::cout << "Enter stock price: ";
                std::cin >> price;
                std::cout << "Enter stock quantity: ";
                std::cin >> quantity;
                if (!trader) {
    std::cout << "Create a trader first to manage this stock.\n";
} else {
    stock = new Stock(symbol, price, quantity);
    trader->buyStock(symbol, quantity);
    std::cout << "Stock created and added to trader's portfolio successfully.\n";
}

            }
            case 5: {
                if (stock) {
                    stock->displayTheStocks();
                } else {
                    std::cout << "No stock available. Create a stock first.\n";
                }
                break;
            }
            case 6: {
                if (stock) {
                    double price;
                    int quantity;
                    std::cout << "Enter new price: ";
                    std::cin >> price;
                    stock->setPrice(price);
                    std::cout << "Enter new quantity: ";
                    std::cin >> quantity;
                    stock->setQuantity(quantity);
                    std::cout << "Stock details updated successfully.\n";
                } else {
                    std::cout << "No stock available. Create a stock first.\n";
                }
                break;
            }
            case 7: {
    if (trader) {
        trader->displayPortfolio();
    } else {
        std::cout << "No trader available. Create a trader first.\n";
    }
    break;
}

            case 0:
                std::cout << "Exiting\n";
                break;
            default:
                std::cout << "Invali Please try again.\n";
                break;
        }
    } while (choice != 0);

    if (trader) delete trader;
    if (stock) delete stock;

    return 0;
}




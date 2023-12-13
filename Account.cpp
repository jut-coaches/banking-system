// Account.cpp

#include "Account.h"
#include <iostream>

Account::Account(int accountId, double balance) : accountId(accountId), balance(balance) {}

int Account::getAccountId() const {
    return accountId;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds.\n";
    }
}

void Account::displayInfo() const {
    std::cout << "Account ID: " << accountId << "\n";
    std::cout << "Balance: $" << balance << "\n";
}

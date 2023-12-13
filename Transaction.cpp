// Transaction.cpp

#include "Transaction.h"
#include <iostream>

Transaction::Transaction(int transactionId, const Account& account, const Customer& customer, double amount)
    : transactionId(transactionId), account(account), customer(customer), amount(amount) {}

int Transaction::getTransactionId() const {
    return transactionId;
}

const Account& Transaction::getAccount() const {
    return account;
}

const Customer& Transaction::getCustomer() const {
    return customer;
}

double Transaction::getAmount() const {
    return amount;
}

void Transaction::displayInfo() const {
    std::cout << "Transaction ID: " << transactionId << "\n";
    account.displayInfo();
    customer.displayInfo();
    std::cout << "Amount: $" << amount << "\n";
}

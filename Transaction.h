// Transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Account.h"
#include "Customer.h"

class Transaction {
private:
    int transactionId;
    Account account;
    Customer customer;
    double amount;

public:
    Transaction(int transactionId, const Account& account, const Customer& customer, double amount);

    int getTransactionId() const;
    const Account& getAccount() const;
    const Customer& getCustomer() const;
    double getAmount() const;

    void displayInfo() const;
};

#endif

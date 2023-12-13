// Account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int accountId;
    double balance;

public:
    Account(int accountId, double balance);

    int getAccountId() const;
    double getBalance() const;

    void deposit(double amount);
    void withdraw(double amount);
    void displayInfo() const;
};

#endif

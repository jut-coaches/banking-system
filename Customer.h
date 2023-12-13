// Customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    int customerId;
    std::string name;

public:
    Customer(int customerId, const std::string& name);

    int getCustomerId() const;
    const std::string& getName() const;

    void displayInfo() const;
};

#endif

// Customer.cpp

#include "Customer.h"
#include <iostream>

Customer::Customer(int customerId, const std::string& name) : customerId(customerId), name(name) {}

int Customer::getCustomerId() const {
    return customerId;
}

const std::string& Customer::getName() const {
    return name;
}

void Customer::displayInfo() const {
    std::cout << "Customer ID: " << customerId << "\n";
    std::cout << "Name: " << name << "\n";
}

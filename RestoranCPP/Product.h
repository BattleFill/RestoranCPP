#pragma once
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    int id;
    std::string name;
    double cost;

public:
    Product(int id, const std::string& name, double cost);
    int getId() const;
    std::string getName() const;
    double getCost() const;
};

#endif

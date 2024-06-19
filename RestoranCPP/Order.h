#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "MenuItem.h"

class Order {
private:
    int id;
    std::vector<MenuItem> items;
    std::string status;

public:
    Order(int id);
    void addItem(const MenuItem& item);
    void setStatus(const std::string& status);
    std::string getStatus() const;
    int getId() const;
    void processOrder();
};

#endif

#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <vector>
#include "Menu.h"
#include "User.h"
#include "Order.h"

class Restaurant {
private:
    std::vector<User*> users;
    Menu menu;
    double balance;
    std::vector<Order> orders;

public:
    Restaurant();
    ~Restaurant();
    User* login(const std::string& username, const std::string& password);
    MenuItem* getMenuItem(int id);
    void addUser(User* user);
    void saveData();
    void loadData();
    void addOrder(const Order& order);
    void updateOrderStatus(int orderId, const std::string& status);
};

#endif

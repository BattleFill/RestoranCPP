#ifndef USER_H
#define USER_H

#include <string>
#include "Order.h"
#include "MenuItem.h"

class User {
protected:
    std::string role;
    std::string firstName;
    std::string lastName;
    std::string middleName;
    std::string username;
    std::string password;

public:
    User(const std::string& role, const std::string& firstName, const std::string& lastName, const std::string& middleName, const std::string& username, const std::string& password);
    std::string getUsername() const;
    std::string getPassword() const;
    std::string getRole() const;
    virtual void displayMenu() const = 0;
};

class Guest : public User {
private:
    Order* currentOrder;

public:
    Guest();
    void addItemToOrder(MenuItem* item);
    void confirmOrder(Restaurant& restaurant);
    virtual void displayMenu() const override;
};

class Admin : public User {
public:
    Admin(const std::string& firstName, const std::string& lastName, const std::string& middleName, const std::string& username, const std::string& password);
    virtual void displayMenu() const override;
};

#endif

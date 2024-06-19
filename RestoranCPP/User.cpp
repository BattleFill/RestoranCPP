#include "User.h"
#include "Restaurant.h"
#include <iostream>

User::User(const std::string& role, const std::string& firstName, const std::string& lastName, const std::string& middleName, const std::string& username, const std::string& password)
    : role(role), firstName(firstName), lastName(lastName), middleName(middleName), username(username), password(password) {}

std::string User::getUsername() const {
    return username;
}

std::string User::getPassword() const {
    return password;
}

std::string User::getRole() const {
    return role;
}

Guest::Guest() : User("Guest", "", "", "", "guest", ""), currentOrder(new Order(1)) {}

void Guest::addItemToOrder(MenuItem* item) {
    if (currentOrder) {
        currentOrder->addItem(*item);
    }
}

void Guest::confirmOrder(Restaurant& restaurant) {
    if (currentOrder) {
        restaurant.addOrder(*currentOrder);
        currentOrder->setStatus("Оплачен и передан на кухню");
        delete currentOrder;
        currentOrder = nullptr;
    }
}

void Guest::displayMenu() const {
    std::cout << "Displaying menu for Guest\n";
}

Admin::Admin(const std::string& firstName, const std::string& lastName, const std::string& middleName, const std::string& username, const std::string& password)
    : User("Admin", firstName, lastName, middleName, username, password) {}

void Admin::displayMenu() const {
    std::cout << "Displaying menu for Admin\n";
    // Логика отображения меню для администратора
}

#include "Restaurant.h"
#include <iostream>
#include <fstream>

Restaurant::Restaurant() : balance(0.0) {
    // Загрузка данных из файлов
    loadData();
}

Restaurant::~Restaurant() {
    for (auto user : users) {
        delete user;
    }
}

User* Restaurant::login(const std::string& username, const std::string& password) {
    for (auto& user : users) {
        if (user->getUsername() == username && user->getPassword() == password) {
            return user;
        }
    }
    return nullptr;
}

MenuItem* Restaurant::getMenuItem(int id) {
    return menu.getItem(id);
}

void Restaurant::addUser(User* user) {
    users.push_back(user);
}

void Restaurant::saveData() {
    // Сохранить пользователей
    std::ofstream userFile("users.dat", std::ios::binary);
    for (const auto& user : users) {
        // Сохранить данные о каждом пользователе
    }
    userFile.close();

    // Сохранить меню
    menu.saveMenu();

    // Сохранить заказы
    std::ofstream orderFile("orders.dat", std::ios::binary);
    for (const auto& order : orders) {
        // Сохранить данные о каждом заказе
    }
    orderFile.close();
}

void Restaurant::loadData() {
    // Загрузить пользователей
    std::ifstream userFile("users.dat", std::ios::binary);
    if (userFile) {
        while (userFile) {
            // Загрузить данные о каждом пользователе
        }
        userFile.close();
    }

    // Загрузить меню
    menu.loadMenu();

    // Загрузить заказы
    std::ifstream orderFile("orders.dat", std::ios::binary);
    if (orderFile) {
        while (orderFile) {
            // Загрузить данные о каждом заказе
        }
        orderFile.close();
    }
}

void Restaurant::addOrder(const Order& order) {
    orders.push_back(order);
}

void Restaurant::updateOrderStatus(int orderId, const std::string& status) {
    for (auto& order : orders) {
        if (order.getId() == orderId) {
            order.setStatus(status);
            break;
        }
    }
}

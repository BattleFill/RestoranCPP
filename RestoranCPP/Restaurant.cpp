#include "Restaurant.h"
#include <iostream>
#include <fstream>

Restaurant::Restaurant() : balance(0.0) {
    // �������� ������ �� ������
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
    // ��������� �������������
    std::ofstream userFile("users.dat", std::ios::binary);
    for (const auto& user : users) {
        // ��������� ������ � ������ ������������
    }
    userFile.close();

    // ��������� ����
    menu.saveMenu();

    // ��������� ������
    std::ofstream orderFile("orders.dat", std::ios::binary);
    for (const auto& order : orders) {
        // ��������� ������ � ������ ������
    }
    orderFile.close();
}

void Restaurant::loadData() {
    // ��������� �������������
    std::ifstream userFile("users.dat", std::ios::binary);
    if (userFile) {
        while (userFile) {
            // ��������� ������ � ������ ������������
        }
        userFile.close();
    }

    // ��������� ����
    menu.loadMenu();

    // ��������� ������
    std::ifstream orderFile("orders.dat", std::ios::binary);
    if (orderFile) {
        while (orderFile) {
            // ��������� ������ � ������ ������
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

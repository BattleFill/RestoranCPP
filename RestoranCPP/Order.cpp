#include "Order.h"

Order::Order(int id) : id(id), status("������� � ������� �� �����") {}

void Order::addItem(const MenuItem& item) {
    items.push_back(item);
}

void Order::setStatus(const std::string& status) {
    this->status = status;
}

std::string Order::getStatus() const {
    return status;
}

int Order::getId() const {
    return id;
}

void Order::processOrder() {
    // ������ ��������� ������
}

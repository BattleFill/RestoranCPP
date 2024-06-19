#include "Menu.h"
#include <fstream>

void Menu::addItem(const MenuItem& item) {
    items.push_back(item);
}

MenuItem* Menu::getItem(int id) {
    for (auto& item : items) {
        if (item.getId() == id) {
            return &item;
        }
    }
    return nullptr;
}

void Menu::saveMenu() {
    std::ofstream file("menu.dat", std::ios::binary);
    for (const auto& item : items) {
        // Сохранить данные о каждом элементе меню
    }
    file.close();
}

void Menu::loadMenu() {
    std::ifstream file("menu.dat", std::ios::binary);
    if (!file) return;
    while (file) {
        // Загрузить данные о каждом элементе меню
    }
    file.close();
}

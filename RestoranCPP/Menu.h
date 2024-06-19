#pragma once
#ifndef MENU_H
#define MENU_H

#include <vector>
#include "MenuItem.h"

class Menu {
private:
    std::vector<MenuItem> items;

public:
    void addItem(const MenuItem& item);
    MenuItem* getItem(int id);
    void saveMenu();
    void loadMenu();
};

#endif

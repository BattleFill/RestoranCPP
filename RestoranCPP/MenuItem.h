#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>
#include <vector>
#include "Product.h"

class MenuItem {
private:
    int id;
    std::string name;
    std::vector<Product> ingredients;
    std::string description;
    double price;
    int prepTime;

public:
    MenuItem(int id, const std::string& name, const std::vector<Product>& ingredients, const std::string& description, double price, int prepTime);
    int getId() const;
    std::string getName() const;
    double getPrice() const;
    std::string getDescription() const;
    std::vector<Product> getIngredients() const;
    // Другие необходимые методы
};

#endif

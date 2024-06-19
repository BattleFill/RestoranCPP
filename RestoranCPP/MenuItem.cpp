#include "MenuItem.h"

MenuItem::MenuItem(int id, const std::string& name, const std::vector<Product>& ingredients, const std::string& description, double price, int prepTime)
    : id(id), name(name), ingredients(ingredients), description(description), price(price), prepTime(prepTime) {}

int MenuItem::getId() const {
    return id;
}

std::string MenuItem::getName() const {
    return name;
}

double MenuItem::getPrice() const {
    return price;
}

std::string MenuItem::getDescription() const {
    return description;
}

std::vector<Product> MenuItem::getIngredients() const {
    return ingredients;
}

#include <iostream>
#include "Restaurant.h"
#include "User.h"

int main() {
    Restaurant restaurant;

    // Пример авторизации
    User* user = restaurant.login("admin", "password");
    if (user) {
        std::cout << "Welcome, " << user->getRole() << "!\n";
    }
    else {
        std::cout << "Invalid login credentials.\n";
    }

    // Пример использования гостем
    Guest guest;
    MenuItem* item = restaurant.getMenuItem(1);
    if (item) {
        guest.addItemToOrder(item);
        guest.confirmOrder(restaurant);
    }

    // Сохранение данных перед завершением программы
    restaurant.saveData();

    return 0;
}

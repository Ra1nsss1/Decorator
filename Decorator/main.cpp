#include "BasePizza.h"
#include "Ingredients.h"
#include <iostream>
#include <Windows.h>
int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
    Pizza* pizza = new BasePizza();
    std::cout << "1 - сир, 2 - ковбаса, 3 - овочі, 4 - соус\n"
        << "0 - завершити замовлення\n";
    int choice;
    while (true) {
        std::cout << "Ваш вибір: ";
        if (!(std::cin >> choice)) {
            std::cerr << "Помилка: введіть ціле число.\n";
            delete pizza;
            return 1;
        }
        if (choice == 0) break;
        // обгортаємо піцу вибраним інгредієнтом
        switch (choice) {
        case 1:
            pizza = new Cheese(pizza);
            break;
        case 2:
            pizza = new Sausage(pizza);
            break;
        case 3:
            pizza = new Vegetables(pizza);
            break;
        case 4:
            pizza = new Sauce(pizza);
            break;
        default:
            std::cout << "Оберіть число від 0 до 4.\n";
        }
    }
    std::cout << "Замовлення: " << pizza->getDescription()
        << "\nЦіна: " << pizza->getCost() << " грн\n";
    delete pizza; // видаляємо весь ланцюжок
    return 0;
}
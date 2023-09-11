#include <iostream>

int main() {
    double x, a, y;

    std::cout << "Ввести X (кг): ";
    std::cin >> x;

    std::cout << "Ввести цену A (гривен) за " << x << " кг конфет: ";
    std::cin >> a;

    std::cout << "Ввести желаемый вес Y (кг) конфет: ";
    std::cin >> y;

    // Найти цену за 1 кг конфет
    double price_per_kg = a / x;

    // Найти стоимость Y кг конфет
    double total_price = price_per_kg * y;

    std::cout << "Цена за 1 кг конфет: " << price_per_kg << " гривен/кг" << std::endl;
    std::cout << " Стоимость " << y << " кг конфет: " << total_price << " гривен" << std::endl;

    return 0;
}
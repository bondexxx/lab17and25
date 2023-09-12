#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double x, a, y;


    std::cout << "Введіть вагу X (кг): ";
    std::cin >> x;

    std::cout << "Введіть ціну A (гривень) за " << x << " кг цукерок: ";
    std::cin >> a;

    std::cout << "Введіть бажану вагу Y (кг) цукерок: ";
    std::cin >> y;

    // Знайти ціну за 1 кг цукерок
    double price_per_kg = a / x;

    // Знайти вартість Y кг цукерок
    double total_price = price_per_kg * y;

    std::cout << "Ціна за 1 кг цукерок: " << price_per_kg << " гривень/кг" << std::endl;
    std::cout << "Вартість " << y << " кг цукерок: " << total_price << " гривень" << std::endl;

    return 0;
}

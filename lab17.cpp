#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "rus");
    double x;
    std::cout << "Введите значение x: ";
    std::cin >> x;

    double y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

    std::cout << "Значение функции при x = " << x << " равно " << y << std::endl;

    return 0;
}
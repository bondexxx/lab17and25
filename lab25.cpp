#include <iostream>

int main() {
    double x, a, y;

    std::cout << "������ X (��): ";
    std::cin >> x;

    std::cout << "������ ���� A (������) �� " << x << " �� ������: ";
    std::cin >> a;

    std::cout << "������ �������� ��� Y (��) ������: ";
    std::cin >> y;

    // ����� ���� �� 1 �� ������
    double price_per_kg = a / x;

    // ����� ��������� Y �� ������
    double total_price = price_per_kg * y;

    std::cout << "���� �� 1 �� ������: " << price_per_kg << " ������/��" << std::endl;
    std::cout << " ��������� " << y << " �� ������: " << total_price << " ������" << std::endl;

    return 0;
}
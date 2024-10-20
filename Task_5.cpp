#include <iostream>
int main() {
    setlocale(LC_ALL, "RU");
    double x,y,max;
    std::cout << "Введите вещественное число x: ";
    std::cin >> x;
    std::cout << "Введите вещественное число y: ";
    std::cin >> y;
    max = (x > y) ? x : y;
    std::cout << "Максимальное значение (тернарная операция): " << max << '\n';
    return 0;
}

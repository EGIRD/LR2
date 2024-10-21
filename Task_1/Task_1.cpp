#include <iostream>
double num1(double x) {
    return 23*x*x*x+69*x*x+32*x+8;}
double num2(double x) {
    return -23*x*x*x+69*x*x+32*x+8;}
int main() {
    setlocale(LC_ALL, "Rus");
    std::cout << "Введите значение x:";
    double x;
    std::cin >> x;
    std::cout << "Результат вычисления 23*x^3+69*x^2+32*x+8=" << num1(x) <<'\n';
    std::cout <<  "Результат вычисления -23*x^3+69*x^2+32*x+8="<< num2(x);
    return 0;
}

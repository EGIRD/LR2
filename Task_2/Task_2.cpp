#include <iostream>
bool num1(double x, double y, double z){
    return x+y>z && x+z>y && y+z>x;}
int main() {
    setlocale(LC_ALL, "Rus");
    double x,y,z;
    std::cout << "Введите положительное число x: ";
    std::cin >> x;
    std::cout << "Введите положительное число y: ";
    std::cin >> y;
    std::cout << "Введите положительное число z: ";
    std::cin >> z;
    if(x>0 && y>0 && z>0) {
        if(num1(x,y,z)) {
            std::cout << "Треугольник с данными сторонами существует.";}
        else {
            std::cout << "Треугольник с данными сторонами не существует.";}
    }
        else {
            std::cout << "Введены отрицательные числа.";}
    return 0;
}

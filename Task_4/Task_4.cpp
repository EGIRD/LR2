#include <iostream>
int main() {
    setlocale(LC_ALL, "Ru");
    double x,y,A,B,C,K;
    std::cout << "Введите x:";
    std::cin >> x;
    std::cout << "Введите y:";
    std::cin >> y;
    if(x > y) {
        y = 0;
        std::cout << "x=" << x << '\n';
        std::cout << "y=" << y;}
    else if(x < y) {
        x = 0;
        std::cout << "x=" << x << '\n';
        std::cout << "y=" << y;}
    else { x = 0, y = 0;
        std::cout << "x=" << x << '\n';
        std::cout << "y=" << y;}
    std::cout << "\nВведите A:";
    std::cin >> A;
    std::cout << "Введите B:";
    std::cin >> B;
    std::cout << "Введите C:";
    std::cin >> C;
    std::cout << "Введите К:";
    std::cin >> K;
    std::cout <<"x:"<<x<<'\n'<<"y:"<<y<<'\n'<<"A:"<<A<<'\n'<<"B:"<<B<<'\n'<<"C:"<<C<<'\n';
    double max =A;
    if(B>max) {
        max = B;}
    if(C>max) {
        max = C;}
    if (max == A) {
        A -= K;}
    else if (max== B) {
        B -= K;}
    else {
        C -= K;}
    std::cout << "После уменьшения на К.\n";
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
    std::cout << "A: " << A << '\n';
    std::cout << "B: " << B << '\n';
    std::cout << "C: " << C << '\n';
    return 0;
}
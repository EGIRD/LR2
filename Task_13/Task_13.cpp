#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, temp;
    std::cout << "Введите первое целое число а: ";
    std::cin >> a;
    std::cout << "Введите второе целое число b: ";
    std::cin >> b;

    while (b != 0) {
    std::cout << "Содержимое ячеек памяти:\nПеред шагом алгоритма:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";

        int temp = b;
        b = a % b; 
        a = temp;  

    std::cout << "Содержимое ячеек памяти:\nПосле шага алгоритма:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";
    }
    std::cout << "Наибольший общий делитель (НОД): " << a << "\n";

    return 0;
}
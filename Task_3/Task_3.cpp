#include <iostream>
int main() {
    double b1,n;
    std::cout <<  "Введите первый член геометрической прогрессии b1:";
    std::cin >> b1;
    std::cout << "Введите ваш номер в журнале:";
    std::cin >> n;
    if(n<=0) {
        std::cout << "Ваш номер в журнале не может быть отрицитальным.";
        return 0;}
    else {
        double q = 1/(n+1) ;
        double sum = b1 / (1 - q);
        std::cout << "Сумма убывающей геометрической прогрессии=" << sum;
    }
    return 0;
}


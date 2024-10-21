#include <iostream>
double pow(double x, int n) {
    double res = 1.0;
    for (int i = 0; i < n; ++i) {
        res *= x;
    }
    return res;
}
int main () {
    setlocale(LC_ALL, "RU");
    double a,b,c,Y;
    int N;
    std::cout << "Условия для N:\n";
    std::cout << "Y = bc-a^2, если N=2.\n" << "Y = bc, если N=56.\n";
    std::cout << "Y = a^7+c, при N=7\n" << "Y = a-bc, при N=3\n" << "Y = (a+b)^3, в остальных случаях.\n";
    std::cout << "Введите a:";
    std::cin >> a;
    std::cout << "Введите b:";
    std::cin >> b;
    std::cout << "Введите с:";
    std::cin >> c;
    std::cout << "Введите  N:";
    std::cin >> N;
    switch (N) {
        case 2: Y=b*c-(a*a);
        std::cout << "Y = bc-a^2, при N=2\n";
        break;
        case 56: Y=b*c;
        std::cout << "Y = bc, при N=56\n";
        break;
        case 7: Y=pow(a,7)+c;
        std::cout << "Y = a^7+c, при N=7\n";
        break;
        case 3: Y=a-b*c;
        std::cout << "Y = a-bc, при N=3\n";
        break;
        default: Y=pow(a+b,3);
        std::cout << "Y = (a+b)^3, в остальных случаях.\n";
        break;
    }
    std::cout << "Y = " << Y << '\n';
    return 0;
}

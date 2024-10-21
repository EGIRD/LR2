#include <iostream>

double pow(double x, int n) {
    double res = 1.0;
    for (int i = 0; i < n; ++i) {
        res *= x;
    }
    return res;
}
double sqrt(double num) {
if (num < 0) {
return -1;
}
double l = 0, r = num, mid;
double epsilon = 1e-6;
if (num < 1) r = 1;
while (r- l > epsilon) {
mid = (l + r) / 2;
if (mid * mid < num) {
l = mid; } 
else {
r = mid; }
}
return (l + r) / 2;
}

int main() {
    setlocale(LC_ALL, "RU");
    double x1,y1,r,x2,y2,R,d;
    std::cout << "Введите координаты первого круга(Точка М1).\n" << "Введите координату х1:";
    std::cin >> x1;
    std::cout << "Введите координату y1:";
    std::cin >> y1;
    std::cout << "Введите радиус первого круга(r):";
    std::cin >> r;
    if(r==0){
        std::cout << "Радиус круга не может быть равен 0.";
        return 1;
    }
    std::cout << "\nВведите координаты второго круга(Точка М2).\n" << "Введите координату х2:";
    std::cin >> x2;
    std::cout << "Введите координату y2:";
    std::cin >> y2;
    std::cout << "Введите радиус второго круга(R):";
    std::cin >> R;
    if(R==0){
        std::cout << "Радиус круга не может быть равен 0.";
        return 1;
    }
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    std::cout << "Расстояние между центрами кругов М1 и М2: " << d << '\n';
    if(d+r<R){
        std::cout << "Да.";
    }
    else if(d+R<r){
        std::cout << "Да,но справедливо обратное для двух фигур." << '\n';
    }
    else if(R-r<d && d-R<r){
        std::cout << "Фигуры пересекаются." << '\n';
    }
    else{
        std::cout << "Ни одного условие не выполнено." << '\n';
    }
    
    return 0;
}
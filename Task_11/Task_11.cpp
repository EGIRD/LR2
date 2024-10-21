#include <iostream>
int main(){
  double h1,min1,h2,min2;
  int min;
  std::cout << "Введите время начала решения задач.\n";
  std::cin >> h1;
  if(h1>23){
    std::cout << "Введено неправильное значение для часов1(1).";
    return 1;
  }
  if(h1<0 || min1 <0){
    std::cout << "Введено неправильное значение для часов(отрицательные числа).";
    return 1;
  }
  std::cin >> min1;

   if(min1>59){
    std::cout << "Введено неправильное значение для минут(больше 60).";
    return 1;
  }
  if(h1 > 23 && min1 > 59){
    std::cout << "В сутках не может быть больше 24 часа.";
    return 1;
  }

  std::cout << "Введите время окончания решения задач.\n";
  std::cin >> h2;

  if(h2>23){
    std::cout << "Введено неправильное значение для часов2(2)(больше 23).";
    return 1;
  }
  if(h2<0 || min2 <0){
    std::cout << "Введено неправильное значение для часов(2)(отрицательные значения).";
    return 1;
  }
  std::cin >> min2;
  if(min2>59){
    std::cout << "Введено неправильное значение для минут(2)(больше 60).";
    return 1;
  }
  if(h2 > 23 && min2 > 59){
    std::cout << "В сутках не может быть больше 24 часа.";
    
    return 1;
  }

  std::cout << "Студент начал решать задачи в " << h1  << " Часов" <<  " : " << min1 << " Минут." << '\n';
  std::cout << "Студент закончил решать задачи в " << h2  << " Часов" << " : " << min2 << " Минут" << '\n';
  
  if(h1>h2 || min1>min2){
    /*min=(h1*60+min1)-(h2*60+min2);*/
    min=(h1*60+min1)-(h2*60+min2);
    min += 1440;
    std::cout << "Студент решал задачи дольше суток.\n";
    return 1;
  }
  else{min=(h2*60+min2)-(h1*60+min1);}
   int z = min / 60;
   int c = min % 60;
   std::cout << "Студент решал задачи " << z << "  Часов" << " : " <<  c << " Минут " << '\n';
  return 0;
}
#include <iostream>

int ring(int r,int ang){
  std::cout << "Длина окружности: " << std::endl;

  std::cout << r*2*3.14 << std::endl;
  std::cout << "Площадь круга: " << std::endl;
  std::cout << r*3.14*3.14<< std::endl;
  std::cout << "Площадь кругового сектора: " << std::endl;
  std::cout << r*3.14*3.14*ang/360 << std::endl;

  return 0;
}



int main(){
  int in_r, in_ang;
  while (1){
    std::cout << "Введите радиус круга: " << std::endl;
    std::cin >> in_r;
    std::cout << "Введите угол сектора в градусах: " << std::endl;
    std::cin >> in_ang;
    
    //проверка на допустимые значения
    if (in_r > 0 && 0 <= in_ang && in_ang <= 360){
      break;
    }
    else{
      std::cout << "Введены невозможные параметры. Попробуйте еще раз: "<< std::endl;
    }
  }
  ring(in_r,in_ang);
  return 0;
}

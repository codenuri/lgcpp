#include <iostream>
// file3.cpp

#include "Car.h"

int main()
{	
	Car c1;
	Car c2;
	std::cout << Car::get_count() << std::endl; 
}

// g++ car.cpp file3.cpp		=> a.exe 생성

// 핵심 : 클래스의 각각의 문법이 파일 분할시 어떻게 표기되어야 하는지도 알아야 합니다.

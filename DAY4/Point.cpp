// Point.cpp
#include "Point.h"  // 멤버 함수 구현하는 소스에서는 
					// 반드시 클래스 선언을 담은 헤더가 include 되어야 합니다.

Point::Point(int a, int b) : x{a}, y{b} {}

void Point::set(int a, int b) 
{ 
	x = a; 
	y = b; 
}

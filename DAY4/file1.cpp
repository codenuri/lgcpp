#include <iostream>

// 클래스를 만드는 2가지 방법
// #1. 멤버 함수 구현을 클래스 선언 안에 모두 포함하는 방법
// #2. 클래스 안에는 멤버 함수 선언만 하고, 멤버 함수 구현을 클래스 외부에 작성

class Point
{
	int x, y;
public:
	Point(int a, int b);
	void set(int a, int b);
}; 

// 멤버 함수를 외부 구현시에는 "클래스이름::함수이름" 으로 구현합니다.
Point::Point(int a, int b) : x{a}, y{b} {}

void Point::set(int a, int b) 
{ 
	x = a; 
	y = b; 
}


int main() 
{
	Point pt(1, 2);

	pt.set(10,20);
}


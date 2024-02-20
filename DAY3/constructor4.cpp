#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	Rect()
	{
		// 자신의 멤버 데이타의 생성자를 호출하는 기계어 코드를 컴파일러가 추가
		// call Point::Point() - leftTop 에 대해서
		// call Point::Point() - rightBottom 에 대해서

		std::cout << "Rect()" << std::endl;
	}
};

int main()
{
	Rect rc; // Rect 생성자 호출
			 // call Rect::Rect()
}



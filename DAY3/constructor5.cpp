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

	Rect(int left, int top, int right, int bottom)
	{

		std::cout <<"Rect(int, int, int, int)" << std::endl;
	}
};

int main()
{
//	Rect rc1; 
	Rect rc2(1, 1, 10, 10); 
}






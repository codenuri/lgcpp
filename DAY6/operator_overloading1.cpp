#include <iostream>
// 158 page ~
class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 2개의 점에 대해서는 "더하기" 하는 개념을 생각해 봅시다.
	// => 효과는 x, y 를 각각 더한다고 가정해 봅시다.

	// 다음중 어떤 코드가 보기 좋을 까요 ?
	Point p3 = Add(p1, p2); 
	Point p4 = p1.Add(p2);	// Java: 이렇게 할수 밖에 없습니다.	
	Point p5 = p1 + p2;		// C++ : 이렇게 할수 있도록 하는 문법 존재

	// 연산자 재정의(operator overloading ) 이란 ?
	// => 사용자 정의 타입의 객체도, 정수(실수) 처럼 +, - 등의 연산자를 사용할수
	//    있게 하는 문법

	// 원리
	Point p6 = p1 + p2; // 이순간 컴파일러는
						// operator+(Point, Point) 함수 또는
						// p1.operator+(Point)     멤버 함수를 찾게 됩니다.
			
}


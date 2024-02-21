#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x{a}, y{b} {}

	// 상수 멤버 함수가 아닙니다.
	// => 멤버 데이타 x, y 를 R/W 모두 가능합니다.
	void set(int a, int b) 
	{ 
		x = a; 
		y = b; 
	}
	// 상수 멤버 함수 입니다.
	// => 함수 안에서 멤버 데이타를 읽기만 하겠다는 의도
	// => 멤버 데이타를 변경하는 코드가 있다면 컴파일 에러
	void print() const
	{	
//		x = 100; // error

		std::cout << x << ", " << y << std::endl;
	}

	// 왜 상수 함수로 하나요 ??
	// => 그냥 non-const 로 하고, 변경하지 않으면 되지 않나요 ??
	// => 상수 객체는 상수 멤버 함수만 호출가능하다는 규칙 때문 - 아래 main 참고
}; 
int main() 
{
	Point p1(1, 2);
	const Point p2(1, 2);

	// 상수 객체가 아닌 경우 : non-const 멤버 함수와
	//						 const 멤버 함수 모두 호출가능
	p1.set(10,20); // ok
	p1.print();	   // ok

	// 상수 객체
	p2.set(10,20);	// error. 상수 객체는 non-const 멤버는 호출할수 없다.
	p2.print();		// ok.    상수 객체는 const member 는 호출할수 있다.
}





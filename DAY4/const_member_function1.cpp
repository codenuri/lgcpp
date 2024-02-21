#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) : x{a}, y{b} {}

	void set(int a, int b) { x = a; y = b; }

	// 상수 멤버 함수 라는 문법
	// 1. 멤버 함수 () 뒤에 const 를 붙이는 문법
	// 2. 멤버 함수 안에서 멤버를 변경할수 없다. 읽기만 가능
	// 3. 상수 객체라도 호출 할수 있게 해달라는 것.
	void print() const 
	{	
//		x =10; // error. 즉, 멤버 값을 변경할수 없다.
		std::cout << x << ", " << y << std::endl;
	}
}; 
int main() 
{
//	Point p(1, 2);
	const Point p(1,2); // 객체를 상수로 만드는 경우. 

	p.x = 10;		// error. x는 public 에 있지만 "상수객체" 이므로
	p.set(10, 20);	// error. 
	p.print();		// error.
					// 단, print 가 상수 멤버 함수라면 에러 아님.
}
// 규칙 1. 상수 객체는 비상수 멤버 함수를 호출할수 없습니다
//     2. 상수 객체는 상수 멤버 함수만 호출할수 없습니다
#include <iostream>

// this 활용

class Point
{
	int x, y;
public:
	// #1. 멤버 데이타와 이름이 충돌이 있거나 멤버 데이타 임을 명확히 하고 싶을때
	void set(int x, int y) 
	{
//		x = x;	// 인자의 x = 인자의 x;


		// 아래 처럼 하면 인자가 아닌 멤버데이타에 접근할수 있습니다.
		this->x = x;
		this->y = y;

	}

	// #2. this 를 반환
	Point* foo() { return this; }
};
int main()
{
	Point p1;
	p1.set(10, 20); // set(&p1, 10, 20 )

	// 멤버 함수가 this 를 반환 하면 
	// 같은 멤버함수를 연속적으로 호출가능합니다.
	p1.foo()->foo()->foo();

//	std::cout << "A" <<"B" << "C" << "D";
	// cout.operator<<("A").operator<<("B").operator<<("C") 처럼 동작 - 5일차
}

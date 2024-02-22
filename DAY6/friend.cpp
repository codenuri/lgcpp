#include <iostream>

// friend 문법 - 75 page

class Bike
{
private:
	int gear = 0;	// private 이므로 멤버 함수만 접근가능
	
public:
//	void set_gear(int n) { gear = n; }

	// QA1. 그냥 멤버 함수로 하면 되지 않나요 ??
	// => 멤버로 할수 없을때가 있습니다.( 주로 operator overloading 할때)

	// QA2. getter/setter 를 만들면 되지 않나요 ?
	// => setter/getter 를 만드는 것은 모든 곳에서 접근 가능하게 하는것
	// => friend 함수는 "특정함수" 에만 권한을 주는것

	// QA3. 캡슐화에 위배되므로 위험한(나쁜) 문법 아닌가요 ?
	// => 비판이 많은 문법
	// => Java, C# 등에는 없고, C++에만 존재.

	friend void fix_bike(); // fix_bike 가 멤버 함수는 아니지만
							// "Bike" 클래스의 "친구" 이므로
							// private 에 접근할수 있게 해달라.
};

void fix_bike()
{
	Bike b;
	b.gear = 10; // error 아님.
				// 멤버 함수는 아니지만 "friend 함수" 이므로
}

int main()
{
	fix_bike();
}
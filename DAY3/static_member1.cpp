#include <iostream>

// 106page ~

// 객체가 몇개나 생성되었는지 갯수를 관리하고 싶다.

// 방법 1. 멤버 데이타 사용
// => 멤버 데이타는 "객체당 한개씩" 생성된다.
// => 아래 main 처럼 c1, c2 를 만들면
//    c1.cnt, c2.cnt 가 별도로 존재하게 된다.

class Car
{
	int color = 0;
public:	
	int cnt = 0;

	Car() { ++cnt;}
	~Car() {--cnt;}
};

int main()
{
	// Car 객체를 2개 생성.
	Car c1;
	Car c2;

	std::cout << c1.cnt << std::endl;	 // 1
	
}

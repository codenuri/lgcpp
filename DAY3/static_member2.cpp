#include <iostream>

// 방법 2. 전역변수 사용
// => 전역변수 cnt 는 Car 객체를 여러개 생성해도 오직 한개만 있다.
// => Car 객체의 갯수파악에 "성공!!"

// 그런데!!!
// => 전역변수는 어디서도 접근 가능하다
// => cnt 의 값은 프로그램의 어디에서도 수정 가능하므로 안전하지 않다.

// => Car의 멤버함수 에서만 접근 가능하도록 private 으로 보호 할수 없을까 ?
//    "static" 개념.. 다음 예제

int cnt = 0;

class Car
{
	int color = 0;
public:	
	Car() { ++cnt;}
	~Car() {--cnt;}
};

int main()
{
	Car c1;
	Car c2;

	cnt = -10; // 사용자가 실수 했다.

	std::cout << cnt << std::endl;	 // 2
	
}




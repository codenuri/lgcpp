// 5_생성자1.cpp
#include <iostream>
#include <string>

class Person
{
//public:
	std::string name;
	int  age;

public:
	void init( const std::string& n, int a  )
	{
		name = n;
		age = a; // a 값의 유효성을 확인하는 것이 좋습니다.
	}

	// 생성자(constructor)
	// => 클래스이름과 동일한 이름의 함수
	// => 반환 타입을 표기하지 않고, 값을 반환할수도 없다.
	// => 객체를 생성하면 자동으로 호출된다.
	// => private 멤버를 초기화 하기 위해 사용.
	Person( const std::string& n, int a  )
	{
		name = n;
		age = a; 
	}
};


int main()
{
	// #1. 멤버 데이타가 모두 public 에 있다면 아래 처럼 초기화 가능합니다.
	// => struct 와 동일
	//Person p = { "kim", 28 }; 

	// #2. 멤버 데이타가 private 에 있다면 멤버 함수를 사용해서 초기화 해야
	//     합니다.
//	Person p;
//	p.init("kim", 28); // 만들어보세요.

	// #3. 객체 생성시, 자동으로 생성자가 호출됩니다.
	Person p("kim", 28);


}



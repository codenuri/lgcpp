#include <iostream>

// 핵심 : 기반 클래스로 사용되는 모든 클래스의 소멸자는 반드시
//       virtual 이어야 합니다.
// 기반 클래스 소멸자가 virtual 이면 모든 파생 클래스의 소멸자는 
// 자동으로 virtual 입니다.

class Base
{
public:
	Base()  {  }
	virtual ~Base() {  }
};

class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived() 자원할당" << std::endl; }
	~Derived() { std::cout << "~Derived() 자원해지" << std::endl; }
};

int main()
{
//	Derived d;	

//	Derived* p = new Derived;	// 객체 생성 - 생성자호출
//	delete p;					// 객체 파괴 - 소멸자호출

	// 아래 코드가 핵심입니다. 
	Base* p = new Derived;
	delete p;			// 이순간 객체가 파괴되므로 소멸자 호출이 필요합니다.

	// 1. 소멸자를 호출하는 것도, "함수의 호출" 입니다.
	// 2. C++ 에서 "멤버 함수 호출 방식"은 2가지가 있습니다.
	// => static binding  : 포인터 타입으로 결정, non-virtual function
	// => dynamic binding : 포인터가 가리키는 실제 객체 조사후 호출. virtual function

}






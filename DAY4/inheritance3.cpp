#include <iostream>

class Base
{
	int data;
public:
	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
	int data2;
public:
	// 사용자 코드			// 컴파일러가 변경하는 코드
	Derived()			   // Derived() : Base()  <<== 컴파일러가 추가한것
	{ 
		std::cout << "Derived()" << std::endl; 
	} 

	Derived(int a)		// 	Derived(int a) : Base() <<== 컴파일러는 항상		
	{												// Base의 디폴트 생성자호출
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived()      
	{ 
		std::cout << "~Derived()" << std::endl; 

		// 소멸자가 위 구현이 먼저 실행되고 기반 클래스 소멸자 호출
		// Base::~Base() 의미의 코드 추가 ( call ~Base() )
	}
};
int main()
{
	Derived d1;		// call Derived::Derived() 의미의 기계어 코드 생성
//	Derived d2(5);
}


// const 멤버 함수 : 객체가 const 인 경우를 대비해서.
// static 멤버 함수 : 객체가 없이 호출. => 즉, 상수객체라는 의미없음

// const 멤버 함수는 "non-static 멤버 함수" 에서만 의미 있음.




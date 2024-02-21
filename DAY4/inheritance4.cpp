#include <iostream>

// 핵심 : 기반 클래스인 Base 에 디폴트 생성자가 없습니다.
// => 아래 코드에서 에러를 모두 찾아 보세요. 

class Base
{
public:
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};
// 핵심 : 기반 클래스인 Base 에는 디폴트 생성자(인자없는 생성자)가 없습니다.

class Derived : public Base
{
public:
	//					// 컴파일러는 Base의 디폴트 생성자 호출하는 코드생성
//	Derived()      {}  // Derived()      : Base() {} 
//	Derived(int a) {}  // Derived(int a) : Base() {}

	// 기반 클래스에 디폴트 생성자가 없다면
	// 파생 클래스 만들때 "기반 클래스의 다른 생성자"를 반드시 명시적으로
	// 호출해야 합니다. - 초기화 리스트 문법으로
	Derived()      : Base(0) {}
	Derived(int n) : Base(n) {}
};




int main()
{
}





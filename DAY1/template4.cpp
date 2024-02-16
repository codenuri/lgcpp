#include <iostream>

// 아래 처럼 사용하기 위해 decltype 을 만든것 입니다.
// => decltype(표현식) : 표현식의 타입을 조사해 달라.

template<typename T1, typename T2>
//decltype(a+b) Add(T1 a, T2 b) // error. a,b 를 선언전에 사용

auto Add(T1 a, T2 b) -> decltype(a+b) // ok, a, b를 선언 후에 사용
{
	return a + b;
}

int main()
{

	std::cout << Add(1, 2.1) << std::endl;

//	a = 10; // error. 선언 전에 사용
//	int a = 0;
//	a = 10; // ok
}
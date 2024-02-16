#include <iostream>

// 핵심 : 리턴 타입(? 자리) 어떻게 할까요 ?
template<typename T1, typename T2>
? Add(T1 a, T2 b)
{
	return a + b;
}
int main()
{
	std::cout << Add<int, double>(1, 2.1) << std::endl;
					// 타입을 명시적으로 전달

	std::cout << Add(1, 2.1) << std::endl;
					// 타입을 생략하면 함수 인자로 타입 추론
}
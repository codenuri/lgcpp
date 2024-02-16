// 20 page
#include <iostream>
#include <print>	// c++23 부터 지원되는 헤더.

// std::cout    : C++ 최초 버전 부터 도입된 표준 출력 도구(객체)
// std::println : C++23 에서 등장하는 새로운 표준 출력 함수

int main()
{	
	// C++98 style
	std::cout << "hello" << std::endl;

	std::print("hello");   // 출력 하고 개행 안함
	std::println("hello"); // 출력 하고 개행

	int n = 1;
	double d = 3.1;

	std::println("{0}, {1}, {0}", n, d);
}
// g++ io3.cpp               : C++17문법으로 빌드
// g++ io3.cpp -std=c++23
// g++ io3.cpp -std=c++23 -lstdc++exp
//							-lstdc++exp : 실험적 기능도 사용하겠다

// cmd 창에서 prompt 변경
// set prompt= $G 
// set prompt= $P$G 
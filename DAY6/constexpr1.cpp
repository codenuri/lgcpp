// constexpr1.cpp

// 프로그래밍 언어에서 "상수(constant)" 란 ?
// => C/C++ 에서는 아래 1,2 개념이 약간 섞여서 사용
// => 다른 언어는 명확히 구별 합니다.

// 1. 실행시간에 값을 변경할수 없다.  - read only
// 2. 컴파일 시간에 값을 알수 있는 것 - constant

#include <iostream>

// 69
int main()
{
	int n = 3;
	std::cin >> n; // n의 값은 실행시간에 결정됩니다.

	// const : read only 변수를 만드는 것.
	//         컴파일 시에 값을 알수도 있고, 모를수도 있다.
	//         단지, 실행시간에 변경할수 없는 것을 만들때 사용.
	const int c1 = 3; // ok
	const int c2 = n; // ok

	// C++11 에서 추가된 constexpr 키워드
	// => 컴파일 시간에 알아야만 하는 상수 만들때 사용
	constexpr int c3 = 3; // ok
//	constexpr int c4 = n; // error

	// 프로그램의 다양한 문법중에서
	// "컴파일 시간에 반드시 값을 알아야하는 경우가 있습니다"
	// cl 컴파일러는 배열의 크기를 컴파일 시간에 알아야 합니다(g++은 배열크기로변수가능)
	int x1[c1]; // ok
	int x2[c2]; // error
	int x3[c3]; // ok
}






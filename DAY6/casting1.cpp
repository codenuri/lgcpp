﻿#include <iostream>
// 50 page

int main()
{
	int n = 3;

//	double* p = &n; // error.
	double* p = (double*)&n; // ok. --- A

	*p = 3.4; // 이 코드를 생각해 봅시다.
				// 잘못된 메모리 참조, 또는 다른 변수의 메모리 침범...

	// 결국 A 의 캐스팅 코드는 너무나 위험 합니다.
	// => 그런데.. C 캐스팅은 대부분의 캐스팅을 허용합니다.
	// => 그래서, C++ 은 용도에 맞게 사용하라고 다른 캐스팅을 제공합니다.

}

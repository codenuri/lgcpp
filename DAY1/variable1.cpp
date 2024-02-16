﻿// 3_변수1
#include <iostream>

// 변수, 함수, 제어문, 연산자 등은 모두 C언어에 있는 개념입니다.
// => C++ 은 이 개념들에 많은 좋은 문법을 추가 했습니다.
// => 오늘은 이런 문법들만..
// => 객체지향이란 개념은 다음주에


// C++ 은 C언어의 변수 관련 문법을 더욱 발전시켰습니다.
// 22 page ~

int main()
{
	// #1. 새로운 타입
	bool b = true; // 또는 false, 0, 1 같은 정수 로 초기화도 가능
	long long n = 10; // 64bit 정수(8바이트)

	// #2. 2진수 표기법, digit separator
	int n1 = 0b11;  // 3, C++ 은 2진수 표기법 지원, 

	int n2 = 1'000'000; // 자릿수 표기법 가능
						// 정확한의미는 리터럴 사이의 ' 는 무시해달라.	
						// C#은 _
}
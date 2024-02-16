// 매크로 함수도 결국 치환 입니다.
// 매크로 함수 : 전처리기에 의한 문자 치환방식
// 인라인 함수 : 컴파일러에 의한 기계어 코드 치환 방식
#include <iostream>

#define SQUARE(x) (x) * (x)

int main()
{
	int n = 3;
//	int ret = SQUARE(n);  // n * n
//	int ret = SQUARE( n + 1 );  // (n + 1) * (n + 1)
	int ret = SQUARE( ++n );	// (++n) * (++n)

	std::cout << ret << std::endl;
}

// C 소스    ==> 컴파일 ==> 기계어 코드
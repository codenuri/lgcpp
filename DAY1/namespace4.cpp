// 10 page
//#include <stdio.h> // C언어용 헤더
#include <cstdio>    // C++ 에서 다시 만든 헤더
					 // printf 등이 전역과 "std" 안에 모두 있다

// C++ 은 C 언어용 헤더를 모두 새로운 버전으로도 제공합니다.
// 규칙 : <xxx.h> ==> <cxxx>

// <stdlib.h>  ==>  <cstdlib>
// <string.h>  ==>  <cstring>
// <math.h>    ==>  <cmath>


int main()
{
	// printf 는 C 표준함수이지만
	//           C++ 표준이기도 합니다.
	printf("hello\n"); // ok
	std::printf("hello\n"); // ??
}

#include <iostream>


// 반환 타입 자리에 auto 만 표기
// => 사용자가 리턴 타입을 표기한것이 아니라.  컴파일러에게
// => return 문장을 보고 타입을 추론해 달라는것
// => return 문장이 2개이상이면 에러.
template<typename T1, typename T2>
auto Add1(T1 a, T2 b) 
{
	if ( b == 0 ) return a;
	return a + b;
}

// 아래 코드는 리턴 타입을 표기한것
// return 문장이 여러개 라도, 리턴 타입은 "decltype(a+b)" 로 결정
template<typename T1, typename T2>
auto Add2(T1 a, T2 b) -> decltype(a+b) 
{
	if ( b == 0 ) return a;
	return a + b;
}



int main()
{

	std::cout << Add(1, 2.1) << std::endl;
}
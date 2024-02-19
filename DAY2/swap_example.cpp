#include <iostream>
#include <algorithm>

// Swap를 만들어 봅시다.
// 1. C 버전
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 2. C++ 버전
// (1) pointer 대신 reference => pointer 보다 안전하고 사용하기 쉽다.
// (2) 함수가 아닌 함수를 만드는 템(template) => 다양한 타입에 대한 함수를 자동생성
// (3) 구현이 간단하므로 성능향상을 위해 inline 함수로 작성
// (4) namespace 를 만들어서 제공.
// (5) 이미 C++ 표준에 "std::swap" 이 제공된다.

// github.com/aosp-mirror    => "안드로이드 소스 코드" 입니다.

// "platform system core" 라는 레포지토리 선택

namespace utils
{
	template<typename T>
	inline void Swap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
}
int main()
{
	int x = 3, y = 2;
//	utils::Swap(x, y);

	std::swap(x, y); // 이미 표준에 swap 이 있습니다.
					 // <algorithm> 헤더 필요 

	std::cout << x << std::endl;
	std::cout << y << std::endl;
}




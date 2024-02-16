// range-for
// 44 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 전통적인 for 문
	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;

	// C++11 부터 새로운 for 문 제공 - ranged - for 라고 합니다.
//	for( int e : x )  // x에서 하나씩 꺼내서 e 에 담아 달라.
	for( auto e : x )
	{
		std::cout << e << std::endl;
	}

	// 1. 성능은 - 위 2개 비슷합니다.
	// 2. 전체가 아닌 일부만 할수 없나요 ? => 전통적인 for 문 사용
	// 3. 2칸씩 이동 ? => 전통적인 for 문 사용(단, C++20 부터 가능)
}

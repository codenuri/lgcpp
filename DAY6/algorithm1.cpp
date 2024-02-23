#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = {1,3,5,7,9,2,4,6,8,10};

	std::sort( v.begin(), v.end() ); // 정렬
									// 기본은 오름차순
									// 1,2,3,4,5,6,7,8,9,10
	// 정렬기준을 변경하려면 3번째 인자로 비교 함수 전달
	// => 2항 함수로 전달
	// => 요소를 2개 비교하는 람다 표현식
	std::sort( v.begin(), v.end() , [](int a, int b) { return a > b;} );
								// 10, 9, 8, 7, ....
								
	for( auto e : v )
		std::cout << e << ", ";

	std::cout << "\n";
}
// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너 모든 요소 열거하는 방법
	// #1. range-for 권장

	for(auto e : c)
	{
		std::cout << e << std::endl;
	}

	// #2. 반복자 사용 - 일부 구간등도 가능.
//	auto p1 = c.begin();
//	auto p2 = c.end();

	auto p1 = std::next(c.begin(), 3); // 4를 가리키는 반복자
	auto p2 = std::prev(c.end(), 2);   // 9를 가리키는 반복자

	// 4~8 까지 출력
	while( p1 != p2 )
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}






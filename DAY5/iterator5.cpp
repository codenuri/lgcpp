#include <iostream>
#include <vector>
#include <list>

// reverse_iterator
int main()
{
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

//	auto p1 = c.begin(); // c의 1번째 요소
//	auto p2 = c.end();	 // c의 마지막 다음요소

	auto p1 = c.rbegin(); // c의 뒤에서 1번째 요소
	auto p2 = c.rend();	  // c의 1번째의 이전요소
	
	// reverse iterator 는 ++ 연산시 : <- 방향으로 이동

	while (p1 != p2)
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

}


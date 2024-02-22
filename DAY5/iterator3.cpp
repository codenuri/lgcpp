#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. past the end

	auto p1 = s.begin();	// s의 1번째 요소를 가리키는 반복자
	auto p2 = s.end();		// s의 마지막이 아닌 마지막 다음을 가리키는 반복자

	*p1 = 10; // ?
//	*p2 = 10; // runtime error
			  // .end() 로 꺼내는 반복자는 항상 마지막이 아닌 
			  // 마지막 다음입니다. 절대 "*p2" 연산하면 안됩니다
			
		  
	// .end()로 꺼낸 반복자는 아래 처럼 ++p1 으로 이동하다가
	// 끝에 도달했는지 확인하는 용도로만 사용, 즉, == 또는 != 연산만.
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
			  	
}
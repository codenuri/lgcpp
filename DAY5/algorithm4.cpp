#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

//	auto ret2 = std::find_if( v.begin(), v.end(), foo ); 

	// 람다 표현식( lambda expression )
	// => 함수 이름(주소) 가 필요한 위치에 
	// => 함수 구현 자체를 표기할수 있는 문법
	// => C++11 부터 도입된 기능
	// => C#, java, python 등 대부분의 언어에 있는 기능.
	
	auto ret2 = std::find_if( v.begin(), v.end(),  
		
						[](int n) { return n % 3 == 0; }     ); 



	if ( ret2 == v.end() ) 
	{
		std::cout << "검색 실패. 3의 배수 없음" << std::endl;
	}
	else
	{
		std::cout << "1번째 나오는 3의 배수는 : " << *ret2 << std::endl;
	}
}











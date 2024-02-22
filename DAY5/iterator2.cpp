// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. 반복자의 정확한 타입
	// => "컨테이너이름::iterator"
	// => 하지만, 아래 처럼 사용하면 "컨테이너 변경시 코드 수정"이 됩니다.
	// std::list<int>::iterator p1 = s.begin();

	// 권장 : 아래처럼 auto 사용하세요
	auto p1 = s.begin(); 	
}



/*
namespace std
{
	template<typename T>
	class list
	{
	public:
		class iterator
		{
		};
	};
}
*/
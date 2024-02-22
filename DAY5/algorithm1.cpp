// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너에서 3을 찾고 싶다.

	// 방법 1. 멤버함수 find를 제공하자.
	//  => Java 스타일, C++ 은 이렇게 되어 있지 않음
	// 장점 : 사용하기 쉽다.
	// 단점 : 모든 컨테이너에 find 가 있어야 한다.
//	s.find(3);
//	v.find(3); 


	// 방법 2. find 를 멤버가 아닌 일반 함수(템플릿)으로 제공하자.
	// => C++ 스타일
	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);
}
// 알고리즘 이라는 용어
// 일반 적인 의미 : "문제를 해결하는 방법" 이라는 의미

// C++ 표준라이브러리(STL) 에서의 의미 : std::find 같은 멤버가 아닌 일반함수(템플릿)
//										을 부르는 용어.
//									    <algorithm> 헤더 필요



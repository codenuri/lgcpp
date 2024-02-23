#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = {1,9,2,4,3,7};

	int k = 3;
	auto ret = std::find_if( v.begin(), v.end(), 
						[k](int n) { return n % k == 0;  });

	// 람다표현식
	// => 컴파일러에게 "함수객체를 만들어 달라는 요청" 입니다.
	// => 위 처럼 람다표현식을 사용하면 functor3.cpp 의 IsDivide 같은 클래스를
	//    컴파일러가 생성해주게 됩니다.
	// => 위 코드와 functor3.cpp 는 거의 동일한 코드 입니다.
}

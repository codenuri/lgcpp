#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = {1,3,5,7,9,2,4,6,8,10};

	// 컨테이너에서 원하는 요소를 제거하려면

	// 1. 원하는 요소를 가리키는 반복자를 구하세요
	auto ret = std::find(v.begin(), v.end(), 5);

	// 2. v 의 erase 함수를 사용해서 제거하세요
	v.erase(ret); // 주의 : 실제 제거가 아니라. 뒤의 요소를 앞으로 당기게 됩니다.

	for( auto e : v )
		std::cout << e << ", ";

}
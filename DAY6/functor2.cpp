#include <iostream>
#include <vector>
#include <algorithm>

bool foo(int n)
{
	return n % 3 == 0;
}

int main()
{
	std::vector<int> v = {1,9,2,4,3,7};

	// v 에서 1번째 나오는 3의 배수를 찾아보세요 - 람다표현식 말고, 일반함수로
	auto ret = std::find_if( v.begin(), v.end(), foo);

	// 일반함수로 3의 배수가 아닌 k의 배수를 찾을수 있을까요 ?
	int k = 3;
}

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// #1. 주어진 구간에서 3찾기


	// #2. 주어진 구간에서 3의 배수 찾기
	auto ret2 = std::find_if( v.begin(), v.end(), [](int n) { return n % 3==0;} ); 

	// #3. 주어진 구간에서 k의 배수 찾기
	int k = 3; // 사용자가 입력한 값이라고 가정합니다
	
}











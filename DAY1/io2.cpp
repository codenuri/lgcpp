// 18page
#include <iostream>
#include <iomanip>

// 입출력 조정자(io manipulator)
// => 출력 모양을 조정할때 사용하는 것(대부분 함수들)
// => <iostream> 또는 <iomanip> 헤더 필요

int main()
{
	int n = 10;

	std::cout << n << std::endl; // 10.  즉, 10진수 출력

	std::cout << std::hex << n << std::endl; // a, 16 진수 출력

	std::cout << std::dec << n << std::endl; // 

	std::cout << std::setw(10) << std::setfill('#') << n << std::endl; // 

	double d = 0.123456789;

	std::cout << d << std::endl; // 몇 자리 까지 나오는지 확인하세요
								 // 9자리 까지 모두 나오게 해보세요

	std::cout << std::setprecision(10) << d << std::endl;							 
}
// cppreference.com 에서 std::setw 검색
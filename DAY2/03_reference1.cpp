// 53 page ~
#include <iostream>

int main()
{
	int  n = 10;

	int& r = n;		// r은 n의 별명(alias) 입니다.
					// r 을 reference(참조) 라고 부릅니다.

	r = 30;        	// n = 30 과 같은 의미.

	std::cout << n << std::endl; // 30

	std::cout << &n << std::endl;	// 이 결과와
	std::cout << &r << std::endl;	// 이 결과는 동일합니다.(같은 주소)
}




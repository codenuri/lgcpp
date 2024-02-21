#include <iostream>

// 사용자에게 2개의 정수를 입력 받아서 구간의 합을 구하고 싶다
// 입력된 정수는 보관 되어야 한다. => 메모리(변수)필요
// 반복문의 인덱스를 위한 변수 필요
// 결과를 담기 위한 변수 필요
int n1 = 0x11;  // 00 00 00 11 이지만 실제로 보관될때는 거꾸로 보관됩니다.
				// 11 00 00 00 으로 보관됩니다.
int n2 = 0x22;
int i = 0x33;
int s = 0x44;

void sum()
{
	for(i = n1; i <= n2; i++)
	{
		s += i;
	}
}
int main()
{
	std::cin >> n1;
	std::cin >> n2;

	sum();

	std::cout << s << std::endl;
}

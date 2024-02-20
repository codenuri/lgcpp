#include <iostream>

// check 구현을 잘 보고 Date 의 is_leap_year 를 만들어 보세요

bool check(int year)
{
	// 1. 400 으로 나누어 떨어지면 무조건 윤년이다.
	// 2. 4로 나누어 떨어지는 수중에서 100으로 나누어 떨어지지 않으면 윤년

	bool b = (year % 400 == 0) || ( ( year % 4 == 0) && ( year % 100 != 0));

	return b;
}

int main()
{
	std::cout << check(2022) << std::endl; // 0
	std::cout << check(2023) << std::endl; // 0
	std::cout << check(2024) << std::endl; // 1
}
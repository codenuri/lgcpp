#include <iostream>

// 특정 달의 날짜를 구하거나, 내일날짜, 1000일뒤의 날짜를 구하려면 
// 결국, 각 월이 몇일까지 있는지 알아야 합니다.
// 아래 배열이 필요 합니다.
int days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31,30,31};

int how_many_days(int m)
{
	return days[m-1];
}
int main()
{
	std::cout << how_many_days(5) << std::endl;
}
// 위 코드의 문제점
// 1. 배열이 전역적으로 있으므로 누구나 변경 가능합니다.
// => Date 클래스 내부에 private 으로 보호 하세요

// 2. how_many_days(2) 는 어떻게 해야할까요 ? 최선의 방법을 찾아 보세요


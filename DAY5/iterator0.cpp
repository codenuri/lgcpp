// iterator0.cpp
#include <iostream>
#include <vector>
#include <list>

int main()
{
	// #1. 배열 vs vector
	// 배열 : 크기를 변경할수 없습니다.
	// std::vector : 크기 변경가능하고, 많은 멤버함수가 있어서 편리합니다.
	int x[5] = {1, 2, 3, 4, 5};
	
	std::vector<int> v = {1, 2, 3, 4, 5};

	v.push_back(9); 

	std::cout << v.size() << std::endl; // 6
	
	// #2. vector 뿐 아니라 다른 컨테이너도 많이 있습니다.
	// 컨테이너 : 여러개를 보관할수 있는 도구(클래스)

	std::vector<int> v2 = {1,2,3,4,5};	// 모든 요소가 연속된 메모리
	std::list<int>   s2 = {1,2,3,4,5};  // 모든 요소가 떨어진 메모리
}
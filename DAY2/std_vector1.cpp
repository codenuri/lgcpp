// std_vector1.cpp
// 객체지향 프로그램은 "필요한 타입을 먼저 만들자"
// => Rect, Person, Date 등의 타입뿐 아니라
// => 자료구조에서 배운 list 등도 타입으로 먼저 만들자는 것

#include <iostream>

// 자료구조에서 배우는 대부분의 개념이 이미 C++ 표준에서
// class 로 설계되어 있습니다.
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <string> // std::string 도 class 로 미리 만들어 놓은 타입입니다

// vector, list, stack 같이 C++ 표준이 제공하는 라이브러리를 "STL" 이라고합니다.

// STL : "Standard" "Template" "Library"

int main()
{
	std::vetor<int> v(4, 3);

	v.at(0) = 20; // 우리가 만든 것처럼 이렇게 해도 되고
	v[0] = 10;    // 실제 배열처럼 [] 해도 됩니다.

	v.resize(8);
	
	std::cout << v[0] << std::endl; // 10

}
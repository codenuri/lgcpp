// iterator6.cpp
#include <vector>
#include <string>
#include <iostream>
#include "People.h"

std::vector<People*> v = { new People("kim"), 
						   new People("lee"),
						   new People("park")};

// 핵심 : 아래 2줄의 차이점을 반드시 기억하세요
// std::vector<People>  v1;
// std::vector<People*> v2; // People 이 아닌 People 의 주소 보관

int main()
{
	// v의 모든 요소(사람)의 이름 출력해 보세요(name 이 public 이므로 직접접근가능)
	// #1. range-for 사용 해서 해보세요

	for ( auto e : v )
	{
		// e의 타입은 ? v의 요소이므로 People*  
		std::cout << e->name << std::endl; // 내일 : 전체 명단 출력을 이렇게
	}

	// #2. 반복자로 해보세요
	auto p1 = v.begin();
	auto p2 = v.end();

	// 핵심 : 반복자는 요소가 아닌 요소의 포인터 개념
	// 따라서, *p 를 하면 요소에 접근. 현재 요소는 People* 
	// p : People** 개념
	// *p : People*

	while( p1 != p2 )
	{
		std::cout << (*p1)->name << std::endl;
		++p1;
	}
}







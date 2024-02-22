// iterator6.cpp
#include <vector>
#include <string>
#include <iostream>
#include "People.h"

std::vector<People*> v = { new People("kim"), 
						   new People("lee"),
						   new People("park")};

int main()
{
	// v의 모든 요소(사람)의 이름 출력해 보세요(name 이 public 이므로 직접접근가능)
	// #1. range-for 사용로 해보세요


	// #2. 반복자로 해보세요
}
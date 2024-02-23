// functor1.cpp
#include <iostream>

class plus 
{
public:
	int operator()(int a, int b) 
	{
		return a + b;
	}
};
int main()
{
	plus p;	// p는 함수가 아닌 객체 입니다. plus 타입의 객체

	int n = p(1, 2); // 객체인  p를 마치 함수 처럼 사용합니다.
					 // "함수객체(function object 또는 functor)"라고합니다.

	int n1 = p.operator()(1, 2); // 로 해석됩니다. 					 
}
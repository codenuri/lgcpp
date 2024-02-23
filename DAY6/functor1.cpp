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
	plus p;
	int n = p(1,2); // 이 한줄을 잘 생각해 보세요
}
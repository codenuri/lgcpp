#include <iostream>

struct Point
{
	int x, y;
};
void foo(int n)    {} 
void goo(Point pt) {}

int main()
{
	Point p = { 1,2 };

	foo(3); // int n = 3 즉, 인자의 전달은 복사 초기화 기술.
	foo({3} ); // int n = {3};

	goo(p);	
	goo({1,2}); // ok. Point pt = {1,2}
}






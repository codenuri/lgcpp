#include <iostream>

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; } 

int main()
{
	int a = 1, b = 1, c = 1;

	inc1( a ); // call by value
	inc2( &b); // call by pointer
	inc3( c ); // call by reference

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}

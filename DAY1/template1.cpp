#include <iostream>

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1,   2)   << std::endl;
	std::cout << Add(1.1, 2.2) << std::endl;
}
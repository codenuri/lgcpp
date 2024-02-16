
#include <iostream>
#define MAX 10
#define SQUARE(x) (x) * (x)

int main()
{
	int n = MAX;

	int ret = SQUARE(++n);
}

// g++ function2-2.cpp -E -P  해보세요
//								컴파일 하지 말고 전처리만 해달라.
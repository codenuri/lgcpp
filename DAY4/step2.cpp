#include <iostream>

// 동일한 작업을 반복해서 해야 하는 경우는
// => 함수로 분리하면 편리합니다.
void print()
{
	printf("hello ");
	printf("world\n");
}
int main()
{
	print();
	print();
	print();
}

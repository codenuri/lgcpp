// variable_function.cpp
#include <iostream>
#include <cstdarg> // <stdarg.h>
// 가변인자 함수 : 인자로 ... 을 사용하는 함수
//				어떤 타입을 몇개라도 받을수 있다.
// 관례상 1번째 인자를 통해서, 어떤 타입을 몇개 보내는지 알려주어야 한다.

int sum(int cnt,  ...)
{
	va_list ap;			// ap는 내부적으로는 pointer 입니다.
	va_start(ap, cnt);	// ap 를 cnt 다음 인자가 있는 메모리를 가리키게 해달라
	int s = 0;
	for( int i = 0; i < cnt; i++)
	{
		s += va_arg(ap, int);
				// 1. ap 위치의 메모리에서 int 한개를 꺼내고, 
				// 2. ap 는 sizeof(int) 만큼 이동
	}
	va_end(ap); // ap 사용후에는 반드시 va_end(ap) 를 하라고 규칙이 정해져 있음.
	return s;
}
int main()
{
	// printf 의 함수 인자는 몇개 일까요 ?
	// => 1개 이상.
	int s = sum(5, 1,2,3,4,5);
	std::cout << s << std::endl;

	int n = 10;
	double d = 2.1;

	// printf 로 n, d를 출력해 보세요
	// => 1번째 인자인 문자열을 보면, 나머지 인자의 갯수와 타입을 알수 있습니다.
	printf("%d%lf", n, d);
}
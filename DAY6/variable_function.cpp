// variable_function.cpp
#include <iostream>
#include <cstdarg> // <stdarg.h>
// 가변인자 함수 : 인자로 ... 을 사용하는 함수
//				어떤 타입을 몇개라도 받을수 있다.
// 관례상 1번째 인자를 통해서, 어떤 타입을 몇개 보내는지 알려주어야 한다.

int sum(int cnt,  ...)
{
	va_list ap;
	va_start(ap, cnt);
	int s = 0;
	for( int i = 0; i < cnt; i++)
	{
		s += va_arg(ap, int);
	}
	va_end(ap);
	return s;
}
int main()
{
	// printf 의 함수 인자는 몇개 일까요 ?
	// => 1개 이상.
	int s = sum(5, 1,2,3,4,5);
	std::cout << s << std::endl;
}
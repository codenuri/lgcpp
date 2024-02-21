#include <iostream>

// i 는 sum 에서만 사용하는데, 전역변수로 만들면
// => sum 이 종료 되어도 파괴되지 않습니다. 메모리 낭비
// => sum 외에 다른 함수도 언제라도 접근 가능합니다. 위험.

int n1 = 0x11; 
int n2 = 0x22;
//int i = 0x33;
int s = 0x44;

void sum()
{
	int i = 0;	// 스택이라는 메모리에서 4바이트를 할당하는 기계어 코드 생성

	for(i = n1; i <= n2; i++)
	{
		s += i;
	}
}	// i 를 위해 할당했던 메모리를 제거하는 기계어 코드 생성

int main()
{
	std::cin >> n1;
	std::cin >> n2;

	sum();

	std::cout << s << std::endl;
}

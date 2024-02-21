#include <iostream>


// 인자를 받을때 사용하는 변수도 지역변수 입니다.
int sum(int a, int b)
{
	int i = 0;	
	int s = 0;

	for(i = a; i <= b; i++)
	{
		s += i;
	}
	return s;
}	// <= 자신이 만든 4개의 스택 변수.파괴.,

int main()
{
	int n1 = 0;	// 스택에서 4바이트 할당하는 기계어 코드 -실행시간확보
	int n2 = 0;

	std::cin >> n1;
	std::cin >> n2;

	int k = sum(n1, n2);

	std::cout << k << std::endl;
}
// 지역변수 - stack 메모리에 할당
// 특징 : 순차적으로 사용된다.
//        나중에 선언된 변수가 먼저 파괴 된다
//        순차적으로 사용하므로 할당 속도가 아주 빠르다.

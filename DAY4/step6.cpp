#include <iostream>

int main()
{
	int n1 = 0;	
	int x1[5] = {1,2,3,4,5};
	int n2 = 0;

	// 위 3개의 변수는 n2, x1, n1 순으로 {}를 벗어날때 파괴 됩니다.
	// x1 이 더이상 필요 없어도
	// 이 위치에서 제거할 방법은 없습니다.

	// heap 이 가장 자유로운 메모리 공간 입니다.
	// 참고 : p 자체는 지역변수 이므로 stack 에 있습니다.
	int* p = (int*)malloc(sizeof(int)); // 4바이트 확보

	free(p); 

	p = (int*)malloc(sizeof(int)*1000); // 4000 바이트(4k) 의 빈공간을 찾아야 한다.

	free(p);
}


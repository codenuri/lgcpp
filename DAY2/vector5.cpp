#include <iostream>
#include <cstring>

int main()
{
	// 배열 : 실행시에 크기를 변경할수 없고,
	//        원할때 메모리를 제거할수도 없습니다.
	//		  main 함수가 종료 될때 자동으로 파괴 됩니다.
	int score1[4];
	
	// 메모리 동적 할당 : 원하는 시점에 제거할수 있고
	//					vector4.cpp 와 같은 코드로 크기를 키울수도 있습니다.
	int* score2 = new int[4];

	// C 언어 단점
	// => vector4.cpp 와 같은 코드가 또 필요하면
	// => 다시 작성해야 합니다.
	// => 재사용이 어렵습니다.
}
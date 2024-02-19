#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "학생수를 입력하세요 >> ";
	std::cin >> cnt;

	// 입력된 학생수 만큼, 다시 점수를 입력 받아야 한다.
	// C89 : 배열의 크기로 변수를 사용할수 없다.
	// C99 : 배열의 크기로 변수를 사용할수 있다.
//	int score[cnt]; // visual studio 는 에러!
					// g++ 은 에러 아님.
					// 이코드는 컴파일러마다 다른 경우가 많습니다.

	// 실행시간에 결정된 크기 만큼의 메모리를 할당하는 방법
	// => 동적 메모리 할당을 해야 한다. 
	// => C : malloc,  C++ : new

//	int* score = (int*)malloc(sizeof(cnt));
//	free(score);

	int* score = new int[cnt]; // 여기서는 변수도 사용가능

	for(int i = 0; i < cnt; i++ )
	{
		std::cin >> score[i];
	}

	// 사용후에는 반드시 지워야 합니다.
	delete[] score;
	
}
// cl  vector3.cpp  
// g++ vector3.cpp
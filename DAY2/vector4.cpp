#include <iostream>
#include <cstring> // memcpy() C 표준함수

int main()
{
	int n = 0;
	
//	int score[4]; 	// 이렇게 만들면 필요 없을때 지울수 없습니다.
					// 지역변수는 수명의 규칙이 정해져 있습니다.
					// 개발자가 원할때 제거할수 없습니다

	int size = 4;
	int* score = new int[size];	// 이렇게 하면 원하는 시점에 언제라도 삭제 가능.

	int count = 0;



	// 사용자가 -1을 입력할때 까지 계속 입력 받고 싶다.
	while( 1 )
	{
		std::cin >> n;

		if ( n == -1 ) break;

		score[count++] = n;

		if ( count == size )
		{
			int* tmp = new int[size*2];

			// score가 가리키는 메모리 내용을
			// tmp  가 가리키는 메모리 로 복사.
			memcpy(tmp, score, sizeof(int)*size);

			// 작은 버퍼 제거
			delete[] score; // score 를 제거하는게 아니라!!!
							// score 가 가리키는 메모리를 제거

			score = tmp; // score 포인터 변수가 새로운 메모리를 가리키도록

			size = size * 2;
		}
	}

	std::cout << "입력한 갯수        : " << count << std::endl;
	std::cout << "할당한 메모리 크기 : " << size << std::endl; 

	// 동적 할당한 메모리는 반드시 사용후에는 직접 제거해야 합니다.
	delete[] score;
	
}
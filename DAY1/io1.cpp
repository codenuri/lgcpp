//#include <cstdio>		// printf를 위해서
#include <iostream> 	// std::cout 을 위해서, 이헤더만 있으면
						//					printf 도 사용가능

// 13 page
int main()
{
	int n = 10;

	// C style 입출력
	printf("n = %d\n", n); // C style
//	scanf("%d", &n);		// 최신 C/C++ 컴파일러는 에러
							// 보안문제!! 아래 처럼 하세요
							
	scanf_s("%d", &n);	   // 입력

	// C++ style
	// 1. %d 등의 포맷 지시어를 사용할 필요 없습니다
	// 2. << 를 연속적으로 사용가능합니다.
	// 3. 개행은 "/n" 또는 std::endl; 사용
	// printf    : 함수
	// std::cout : 객체라는 존재, 지금은 사용법만 외우세요
	//				5일차에 직접 만들게 됩니다.
	std::cout << "n = " << n << std::endl;

	// 입력
	std::cin >> n; 	// &n 이 아닌 n 입니다.
					// >> 방향 주의 하세요
}

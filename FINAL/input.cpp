#include <iostream>

// 원리 : std::cin 도 객체 입니다.
//       입력 실패시 다양한 멤버 함수를 사용해서 다시 입력 받게 하는 것
void input_integer(int& num)
{
	while( 1 )
	{
		std::cin >> num;

		if ( ! std::cin.fail() )
			break;					// 실패 하지 않았다면

		std::cout << "정수로 다시 입력해 주세요\n";

		std::cin.clear();		// cin 객체의 상태를 초기화하고
		std::cin.ignore(256, '\n');	// cin 의 입력 버퍼를 비웁니다.
		
		
		// 이제 루프의 처음으로 돌아가서 다시 입력 받습니다.
	}
}

int main()
{
	int n = 0;
//	std::cin >> n; // 정수를 입력해야 하는데, 문자열 입력시 
					// 입력버퍼에 문제가 생겨서 프로그램이 잘못동작합니다.

	// 아래 처럼 사용하면 정수만 입력 받게 할수 있습니다.
	std::cout << "정수 입력하세요 >> ";
	input_integer(n);

	std::cout << "입력된 정수 : " << n << std::endl;
}
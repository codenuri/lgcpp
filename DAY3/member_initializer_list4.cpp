#include <iostream>

// 주의 사항!
class Point
{
public:
	int x;
	int y;

	// 초기화 리스트에서 만든 코드는 "대입" 이 아닌 "초기화" 입니다.
	// "Point pt" 를 만들면 "x" 가 먼저 메모리에 만들어지게 됩니다.(선언순서)
	// 아래 코드는 "x{y}" 가 먼저 실행됩니다.
	Point() : y{0}, x{y}
	{
	}
	// 핵심 : 초기화 리스트를 만들때는 "멤버가 선언된 순서" 대로 만들어야 합니다.
//	Point() : x{0}, y{0} {}
};

int main()
{
	Point pt;

	// 아래 코드의 결과를 예측해 보세요
	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // ?
}





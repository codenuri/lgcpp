#include <iostream>

// 주의 사항!
class Point
{
public:
	int x;
	int y;

	Point() : y{0}, x{y}
	{
	}
};

int main()
{
	Point pt;

	// 아래 코드의 결과를 예측해 보세요
	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // ?
}





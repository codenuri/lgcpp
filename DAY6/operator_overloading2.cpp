#include <iostream>
// 158 page ~
class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}

	friend Point operator+(const Point& p1, const Point& p2);
};

// 멤버가 아닌 함수로 만드는 operator+
Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "non-member operator+\n";

	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // 이순간 컴파일러는
						// operator+(Point, Point) 함수 또는
						// p1.operator+(Point)     멤버 함수를 찾게 됩니다.			
}


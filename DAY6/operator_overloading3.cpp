#include <iostream>
// 158 page ~
class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}

	// 멤버 함수로 만드는 operator+ 함수
	// 주의 : +은 이항 연산자 이지만 멤버 함수로 만들면 인자는 한개가 됩니다.
	Point operator+(const Point& pt) const 
	{
		std::cout << "member operator+\n";
		Point temp(x + pt.x, y + pt.y);
		return temp;
	}
};

int main()
{
//	Point p1(1, 1);
	const Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // 이순간 컴파일러는
						// operator+(Point, Point) 함수 또는
						// p1.operator+(Point)     멤버 함수를 찾게 됩니다.	
	p3.print(); // 3, 3		
}


#include <iostream>
// 158 page ~
class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}

	Point operator+(const Point& pt) const 
	{
		std::cout << "member operator+\n";
		Point temp(x + pt.x, y + pt.y);
		return temp;
	}

	friend Point operator+(const Point& p1, const Point& p2);
};
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

	Point p3 = p1 + p2; 
	p3.print(); 
}


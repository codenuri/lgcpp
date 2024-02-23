#include <iostream>
#include <string>

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

	// #1. 멤버 함수와 non-멤버 함수중에서 한개만 만들어야 합니다.

	// #2. 멤버가 좋을까요 ? non-멤버가 좋을까요 ?
	// 1. 객체의 상태가 변하는 연산자는 "멤버"로 하는 것을 권장
	//    a += 1  : a 자체가 변경됩니다. += 연산자는 멤버 함수로!
	//    a + b   : a 자체가 변경되는것은 아닙니다. non-멤버 권장

	// 2. 멤버로 만들수 없을때가 있습니다.
	int n = 3;
	//					// 멤버 함수로 했다면
	Point p4 = p1 + p2; // p1.operator+(Point)
	Point p5 = p1 + n;  // p1.operator+(int)   필요
	Point p6 = n  + p2; // n.operator+(Point) 가 필요한데. n은 int 이다.
						//						만들수 없다.
						// 하지만 일반 함수로 하면 된다
						// operator+(int, Point) 는 만들수 있다.

//	Date d(2024, 2, 23);
//	Date d2 = d.after_days(100);
//	Date d3 = d + 100; // ????
//	Date d4 = 100 + d; // ????

	std::string s1 = "AA";
	std::string s2 = "BB";

	std::string s3 = s1 + s2; // operator+(std::string, std::string)

	// C++ : 거의 모든 연산자 재정의 가능
	//     단, 4개만 안됨 : ?   ?:  .   .*

	// C#, Python : 주요한 20여개만 가능

	// java : 연산자 재정의 안됨.
	//        단지, String 클래스만 예외적으로 + 가능하게 제공
	//        

	// 함수를 직접 호출해도 됩니다.
	Point p6 = p1 + p2; 		  // 보통 이렇게 사용하지만
	Point p7 = operator+(p1, p2); // non-member 로 제공한 경우
	Point p8 = p1.operator+(p2);  //     member 로 제공한 경우
}


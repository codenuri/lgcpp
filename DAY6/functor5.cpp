// operator overloading1.cpp 에서 Point 만 복사.

#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}
	~Point() { std::cout << "~Point" << std::endl;}
};

int main()
{
//	Point pt(1,1); // 이름이 있는 객체(named object)
					// 수명 : 자신을 선언한 {} 을 벗어날때 파괴

	Point (1,1); // Point 는 함수나 객체가 아닌 클래스 입니다.
				 // 이름이 없는 객체(unnamded object) 생성
				 // "임시객체(temporary)" 라고 부릅니다.
				// 수명 : 문장의 끝. 다음 문장 실행전에 파괴.
				
	std::cout << "---------\n";
}
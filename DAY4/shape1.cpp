#include <iostream>
#include <vector>

// 145page ~
// 파워 포인트 같은 프로그램을 만드는 것을 생각해 봅시다.

// 1. 모든 도형을 타입으로 설계하면 편리합니다

// 2. 모든 도형의 공통의 기반 클래스가 있다면 모든 도형 객체를 
//    하나의 vector 에 보관 가능하다.
//    => 또한 모든 도형은 공통의 특징(색상등)도 가지고 있다

class Shape 
{
};
class Rect : public Shape
{
	// x, y, w, h, 생성자 등의 코드는 생략. 가상함수에 집중
public:
	void draw() { std::cout << "draw rect" << std::endl;}
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "draw circle" << std::endl;}
};

int main()
{
//	std::vector<Rect*> v;
	std::vector<Shape*> v;
}




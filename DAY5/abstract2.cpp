#include <iostream>
#include <vector>

class Shape 
{
	int color;
public:
	void set_color(int c) { color = c;}
	int get_color() const { return color;}



	// 가상 함수    : 파생 클래스가 override 하지 않으면 기본 구현 물려주겠다는 의도
	// 순수가상함수 : 파생 클래스에게 반드시 override 하라고 지시하는 것

	virtual void draw() = 0; // { std::cout << "draw shape" << std::endl;}



	virtual int get_area() const { return 0;}
				// 파생 클래스가 반드시 override 할 필요는 없다.
				// override 하지 않으면 위 구현 사용 - 항상 0반환

//	virtual int get_area() const = 0;
				// 파생 클래스는 반드시 override 해서 구현을 제공해야 한다.
				// override 하지 않으면 Rect, circle 등의 객체 생성안됨.

	virtual ~Shape() {} // 기반 클래스는 가상 소멸자로!!
};


class Rect : public Shape
{
public:
	void draw() override { std::cout << "draw rect" << std::endl;}
};

class Circle : public Shape
{
public:
	void draw() override { std::cout << "draw circle" << std::endl;}
};

class Triangle : public Shape
{
public:
	void draw() override { std::cout << "draw triangle" << std::endl;}
};

int main()
{
	std::vector<Shape*> v;

	while(1)
	{
		int cmd;
		std::cin >> cmd;

		if      ( cmd == 1 ) v.push_back( new Rect );
		else if ( cmd == 2 ) v.push_back( new Circle);
		else if ( cmd == 9 )
		{
			for( auto e : v) 
				e->draw();	
		}
	}
}


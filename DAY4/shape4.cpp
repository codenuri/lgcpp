#include <iostream>
#include <vector>


class Shape 
{
	int color;
public:
	void set_color(int c) { color = c;}
	int get_color() const { return color;}

	virtual int get_area() const { return 0;}
	virtual void draw() { std::cout << "draw shape" << std::endl;}
};

class Rect : public Shape
{
public:
	virtual void draw() { std::cout << "draw rect" << std::endl;}
};

class Circle : public Shape
{
public:
	virtual void draw() { std::cout << "draw circle" << std::endl;}
};

class Triangle : public Shape
{
public:
	virtual void draw() { std::cout << "draw triangle" << std::endl;}
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
				e->draw();	// 이 한줄에 대해서 생각해 봅시다.
							// => 다형성(Polymorphism)
							// => 하나의 문장이 "상황(객체의 종류)" 에 따라
							//    다르게 동작하는 것
		}
	}
}
// 객체지향 언어의 3대 특징
// 1. 캡슐화(private, public)
// 2. 상속(inheritance)
// 3. 다형성(polymorphism) - 결국 가상함수를 사용했을때 특징


// OCP 원칙
// 기능확장에 열려 있고(Open, 나중에 새로운 클래스가 추가되어도)
// 코드수정에는 닫혀 있어야(Close, 기존 코드는 수정되지 않도록)
// 만들어야 한다는 원칙(Principle)

// Open Close Principle 이라는 원칙

// 다형성은 OCP 를 만족하는 아주 좋은 코딩 스타일 입니다.
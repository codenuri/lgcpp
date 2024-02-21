#include <iostream>
#include <vector>


// 핵심 3. 모든 도형의 공통의 기능은 반드시 기반 클래스인 Shape 에도 있어야 한다.
//        그래야, Shape* 로 모든 도형을 묶어서 관리할때. 해당 기능을 사용할수 있다

class Shape 
{
public:
	void draw() { std::cout << "draw shape" << std::endl;}
};

class Rect : public Shape
{
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
	std::vector<Shape*> v;

	while(1)
	{
		int cmd;
		std::cin >> cmd;

		if      ( cmd == 1 ) v.push_back( new Rect );
		else if ( cmd == 2 ) v.push_back( new Circle);
		else if ( cmd == 9 )
		{
			// vector<Shape*> 이므로 아래 코드에서 e는 Shape* 입니다.
			// Shape 에 draw() 가 없으면 에러 입니다.
			for( auto e : v) 
				e->draw();
		}
	}
}



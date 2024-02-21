#include <iostream>
#include <vector>


class Shape 
{
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

		if ( cmd == 1) 
		{
			// 사각형 생성
			Rect rc;
		}
		else if ( cmd == 2 )
		{

		}
		else if ( cmd == 9 )
		{
			for( auto e : v) 
				e->draw();
		}
	}
}




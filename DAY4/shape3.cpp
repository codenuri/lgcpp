#include <iostream>
#include <vector>


// 핵심 3. 모든 도형의 공통의 기능은 반드시 기반 클래스인 Shape 에도 있어야 한다.
//        그래야, Shape* 로 모든 도형을 묶어서 관리할때. 해당 기능을 사용할수 있다

// 핵심 4. 기반 클래스가 가진 멤버 함수중에서 
//		  파생 클래스가 override 하게 되는 것은 반드시 가상함수로 설계되어야한다

// 핵심 5. 결국 설계는 "Shape" 클래스 부터 만들면서
// => 모든 도형의 공통의 특징을 설계하고..
// => 가상함수로 만들것과 비가상함수로 할것을 결정한후...
// => Rect, Circle 의 각각의 도형 클래스를 설계하게 됩니다.

class Shape 
{
	int color;
public:
	// 아래 2개의 함수는 virtual 로 할까요 ? 하지 말까요 ?
	// => 아래 2개는 파생 클래스가 override 할 이유가 없습니다.
	// => non-virtual 이 좋습니다.
	void set_color(int c) { color = c;}
	int get_color() const { return color;}

	// 모든 도형은 면적을 구할수 있습니다. virtual ? non-virtual 
	// => 모든 도형은 면적을 구하는 공식이 다릅니다. virtual!!
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



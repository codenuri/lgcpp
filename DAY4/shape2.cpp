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
//			Rect rc;	// 이렇게 만들면 {} 벗어날때 즉시 파괴 됩니다.

			Rect* rc = new Rect;	// 이렇게 하면 명시적으로 제거(delete) 할때 까지 계속 사용가능.
			v.push_back(rc);
		}
		else if ( cmd == 2 )
		{
			v.push_back( new Circle);
		}
		else if ( cmd == 9 )
		{
			for( auto e : v) 
				e->draw();
		}
	}
}

// 위 코드는 왜 ?? 어디 부분에서 에러일까요 ??
// 해결책은 뭘까요 ??
// => 다음소스에서 해결



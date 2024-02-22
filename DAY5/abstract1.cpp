// 152 page ~
// 추상 클래스 : 순수 가상함수가 한개 이상 있는 클래스
// 특징       : 객체를 생성할수 없다.
// 의도       : 특정이름의 멤버 함수를 반드시 만들어야 한다고 지시 하는 것!!

class Shape
{
public:
	virtual void draw()  = 0;	// 순수 가상함수(pure virtual function)
								// 구현부가 없고, "= 0" 으로 표기
};

class Rect : public Shape
{
	// Shape 로 부터 물려 받은 draw() 순수 가상함수를
	// 1. override 해서 구현을 제공하는 Rect 는 추상이 아니다.
	// 2. override 해서 구현을 제공하지 않으면 Rect 도 추상이다.
public:
	void draw() override {}
};

int main()
{
	Shape s; // error.
	Rect  r; // ok
}



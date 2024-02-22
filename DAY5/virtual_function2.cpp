class Shape
{
public:
	virtual void draw() {};
	virtual void move() {};
};
class Rect : public Shape
{
public:
	// #1. 가상함수를 override 할때는 virtual 은 있어도 되고 없어도 됩니다.
	// => virtual 을 붙이지 않아도 기반 클래스에서 virtual 로 선언되었기때문에 virtual 입니다.
//	virtual void draw()  {};	// 이 코드와 
//	void draw()  {};			// 이 코드는 동일
								// => 하지만 virtual 을 붙이는게 가독성 좋음.

	// #2. 가상함수를 override 시에 실수(오타)가 있으면
	// => 컴파일 에러가 아닙니다..
	// => 파생 클래스가 새로운 가상함수를 추가했다고 컴파일러가 생각하게 됩니다.
//	virtual void Draw() {};
//	virtual void move(int n) {};

	// #3. 위 2번의 문제를 해결하기 위해
	// => C++11 부터 가상함수 override 시에 "override" 키워드를 붙이는 문법 등장
	virtual void Draw() override {} // 새로운 함수가 아닌 기반 클래스 함수를
									// override 한다고 알려 주는 것
									// 기반 클래스에 이함수가 없으며 컴파일에러

};

int main()
{
	
}

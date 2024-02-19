// 67page
#include <iostream>

// 객체 지향 프로그램의 개념 2
// => 타입을 만들때, "상태를 나타내는 데이타" 와 "상태를 가지고 연산을 하는 함수"
//    를 묶어서 타입을 만들자

// C언어   구조체 : 함수를 포함할수 없다.
// C++언어 구조체 : 함수를 포함할수 있다.

// 함수를 구조체 안에 포함하면 무엇이 좋나요 ?
// 1. 함수 인자로 별도로 "const Rect&" 로 데이타를 받을 필요 없습니다.
// 2. 다양한 객체 지향 문법으로 "사용하기 쉬운 안전한 타입" 을 만들수 있습니다
//    => 앞으로 계속 배우는 주제

struct Rect
{
	// 멤버 데이타
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수 
	// => 멤버 함수에서는 멤버 데이타를 직접 접근 가능하다.
	int get_area()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}	
};
int main()
{
	Rect rc = { 1, 1, 10, 10};
//	get_rect_area(rc);
//	draw_rect(rc);

	int n = rc.get_area();
	rc.draw();
}






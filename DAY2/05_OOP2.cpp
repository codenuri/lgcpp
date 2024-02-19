// 67page
#include <iostream>

// 객체 지향 프로그램의 개념 1.
// => 프로그램에서 필요한 타입을 먼저 설계 하자.
// => "사각형"을 다루는 프로그램이라면 Rect 라는 타입을 먼저 설계하자.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

int get_rect_area(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}
void draw_rect(const Rect& rc)
{
	std::cout << "draw rect" << std::endl;
}
int main()
{
//	int n1 = get_rect_area(1, 1, 10, 10);
//	draw_rect(1, 1, 10, 10);

	Rect rc = { 1, 1, 10, 10};
	get_rect_area(rc);
	draw_rect(rc);
}


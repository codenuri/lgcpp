#include <iostream>

// fuctor5 에서 Point 가져 오세요


void draw_line(const Point& from, const Point& to) {}

int main()
{
	// 0,0 ~ 3,3 에 선을 그리고 싶다.

	// 방법 1. 변수를 만들어서 전달
	Point p1(0, 0);
	Point p2(3, 3);

	draw_line(p1, p2); // 그런데, 이 문장 이후에는 p1, p2는 필요 없다.
						// 즉시 파괴될까 ??


	// 방법 2. 임시객체로 전달
	draw_line( Point(0,0), Point(3,3));
				// => 임시객체는 이문장에서만 사용
				// => 다음 문장 실행전에 파괴.
	
	// 결론 : 함수 인자로만 사용할 객체가 필요했다면 임시객체 형태로 사용
	//       하는 것이 좋습니다.
}
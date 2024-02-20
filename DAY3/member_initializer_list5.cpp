#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 앞으로 수업시간 예제는 아래 처럼 작성됩니다.
	Point() 			: x{0}, y{0}{} 
	Point(int a, int b) : x{a}, y{b}{} 
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	// 사용자 코드	 // 컴파일러가 변경한 코드
	Rect()			// Rect() : leftTop(), rightBottom()  
	{					// => 즉, 멤버 데이타의 디폴트 생성자를 호출하도록 코드생성
	}
};

int main()
{
	Rect rc; 
}

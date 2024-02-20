#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	Rect()
	{
		// 자신의 멤버 데이타의 생성자를 호출하는 기계어 코드를 컴파일러가 추가
		// call Point::Point() - leftTop 에 대해서
		// call Point::Point() - rightBottom 에 대해서

		std::cout << "Rect()" << std::endl;
	}
	// 멤버 데이타의 생성자는 
	// 1. 컴파일러가 추가하는 코드는 항상 디폴트 생성자만 호출합니다.
	// 2. 디폴트가 아닌 다른 생성자를 호출하려면
	//    개발자가 직접 호출해야 합니다.
	//    아래 코드 처럼 해야 합니다.

	Rect(int left, int top, int right, int bottom) 
		: leftTop(left, top), rightBottom(right, bottom)
	{
		std::cout <<"Rect(int, int, int, int)" << std::endl;
	}
};

int main()
{
//	Rect rc1; 
	Rect rc2(1, 1, 10, 10); 
}

// 객체를 생성하면
// 1. 객체의 생성자가 호출됩니다.
// 2. 객체의 생성자에는 "멤버 데이타의 생성자" 를 호출하는 기계어 코드가 포함됩니다.
// 3. 멤버 데이타의 생성자는 기본적으로는 "디폴트 생성자가 호출" 됩니다.
// 4. 멤버의 다른 생성자를 호출하려면 사용자가 "초기화 리스트" 문법으로 지정해야합니다
//                Rect() : 멤버(인자), 멤버(인자)

// 복습하실때 위코드를 "godbolt.org" 에 넣고
// Rect() 와 Rect(int, int, int, int) 의 기계어 코드 차이점을 확인해 보세요




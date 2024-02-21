#include <iostream>

// 클래스를 만드는 2가지 방법
// #1. 멤버 함수 구현을 클래스 선언 안에 모두 포함하는 방법
// #2. 클래스 안에는 멤버 함수 선언만 하고, 멤버 함수 구현을 클래스 외부에 작성
// => 이경우 대부분 클래스 선언은 헤더 파일(Point.h) 에 만들게 되고
// =>              멤버 함수 구현은 소스파일(Point.cpp) 에 만들게 됩니다

// Point 클래스는 : Point.h 와 Point.cpp 에 있습니다.
#include "Point.h"	// 헤더만 포함하면 사용가능 합니다.

int main() 
{
	Point pt(1, 2);

	pt.set(10,20);
}
// #1. 소스를 각각 컴파일후 링킹
// => g++ Point.cpp -c		=> Point.o
// => g++ file2.cpp -c      => file2.o
// => g++ Point.o  file2.o  => a.exe     링킹 작업

// #2. 모든 소스를 한번에 전달
// => g++ Point.cpp file2.cpp   => 위작업을 자동으로

#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int get_area() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};
int main()
{	
	// #1. Rect 타입의 변수를 2개(r1, r2) 생성하면
	// => 멤버 데이타만 스택에 r1, r2에 각각 놓이게 됩니다
	// => 멤버 함수는 변수의 갯수에 상관없이 코드메모리에
	//    한개만 있습니다.

	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16 byte




	// #2. 용어
	int n1 = 10; 	// 
	n1 = 20;		// "변 하는 수" => "변수"

	Rect r = { 1, 1, 10, 10 };	// r 은 "변수" 라고 부르지 말고 "객체"

	// 객체 : 세상에 존재하는 모든 사물을 나타내는 말
	//      => 사람, 사각형, 시간, 자동차.. 

	// primitive type 을 메모리에 생성한것   : 변수
	// user define type 을 메모리에 생성한것 : 객체
}







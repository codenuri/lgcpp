#include <iostream>

// 주의 : 아래 예제에서 set 은 생성자가 아닙니다.
//		 그래서, 초기화 리스트 같은 문법을 사용할수는 없습니다.

class Point
{
	int x, y;
public:
	// 사용자가 만든 코드		// 컴파일러가 변경한 코드
	void set(int a, int b)	  // void set( Point* this, int a, int b)	
	{						  // {
		x = a;				  //     this->x = a;
		y = b;				  //     this->y = b; 로 변경된것

		// 멤버 함수에서 this 를 사용할수도 있습니다.
		// this : 현재 멤버함수를 호출할때 사용한 객체 주소
		std::cout << this << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2;
	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;

	p1.set(10, 20);	// set(&p1, 10, 20) 으로 변경되어서 호출됩니다.
	p2.set(10, 20); // set(&p2, 10, 20)
}

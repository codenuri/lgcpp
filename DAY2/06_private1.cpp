// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// 프로그램에서 "사람" 을 관리해야 한다.
// => 사람이라는 타입을 먼저 설계 하자.

// 캡슐화(encapsulation)
// => 멤버 데이타는 private 영역에 놓아서
//    외부의 잘못된 사용으로 부터 객체가 불안해 지는 것을 막는다.

// => 객체의 상태는 잘 정의된 멤버 함수를 통해서만 변경할수 있게 한다!!



struct Person
{
private:				// 이 영역에 있는 모든 멤버는
						// 멤버 함수에서만 접근 가능하다.
	std::string name;
	int  age;	
public:					// 이 영역에 있는 모든 멤버는
						// 어디서라도 접근 가능하다.	
	void set_age( int a)
	{
		// 인자값의 유효성을 확인한후, 유효한 경우에만 객체의 상태를 변경한다
		if ( a >= 0 && a < 150 )
			age = a;
	}
};
int main()
{
	Person p;
//	p.name = "kim";
//	p.age = -10; // 사용자가 실수 했다.				 
				 // private 에 있다면 컴파일 에러!
	p.set_age(-10);
}

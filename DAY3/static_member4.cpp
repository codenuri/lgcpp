#include <iostream>

class Car
{
public:	
	// #1. 용어와 특징 알아 두세요
	int color = 0;	// non-static 멤버데이타(인스턴스 멤버 데이타)
					// 객체를 생성해야지 메모리에 존재
					// 객체당 한개씩 따로 존재

	static int cnt;	// static 멤버(클래스 멤버 라고도 합니다.)
					// 객체를 생성하지 않아도 메모리에 존재
					// 객체를 여러개 생성해도 cnt 는 오직한개만 존재..
					// 모든 객체가 공유

	Car() { ++cnt;}
	~Car() {--cnt;}
};
int Car::cnt = 0;	




int main()
{
	// #2. non-static 멤버데이타 인 color 는 객체를 생성해야만 메모리에
	//    존재 합니다.
	// => 접근할때는 "객체이름.멤버이름" 으로 접근(단, public 일때만)
	Car c1;
	Car c2;
	c1.color = 10;
	c2.color = 20;
	int n1 = c1.color; // 10

	// #3. static 멤버 데이타는 객체가 없어도 메모리에 존재
	// => 객체를 만들어도 모든 객체가 공유
	// 접근 방법
	// 1. "클래스이름::이름" => 권장
	// 2. "객체이름.이름"    => 권장하지 않음. static 인지 아닌지 구별 안됨.
	//							C++ : 가능하지만 되도록 사용하지 말것
	//							java, C#, swift : static 멤버는 "클래스이름"
	//											으로만 접근 가능.
	
	// 아래 3줄은 모두 같은 메모리 접근하는 코드!
	Car::cnt = 10;
	c1.cnt = 20;
	c2.cnt = 30;

	std::cout << c1.cnt << std::endl; // 30	
}




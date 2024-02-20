#include <iostream>

class Car
{
	int color = 0;
	static int cnt;
public:	
	Car() { ++cnt;}
	~Car() {--cnt;}

//	int get_count() { return cnt;}			// non-static 멤버 함수
											// 객체를 생성후에만 호출가능
											// "객체이름.함수이름" 으로 호출

	static int get_count() { return cnt;} 	// static 멤버 함수
											// 객체가 없어도 호출 가능한 함수
											// "클래스이름::함수이름" 으로 호출
};
int Car::cnt = 0;	

int main()
{
	// 여기서 자동차의 갯수를 알고 싶다 ?
	// => 아직 객체를 한개도 만들지 않았지만
	// => 분명, "Car::cnt" 는 메모리에 존재한다.
	std::cout << Car::get_count() << std::endl; // 0

	Car c1;
	Car c2;

	// static 멤버 함수도 아래 처럼 객체이름으로도 호출가능하지만
	// 되록이면 "클래스이름::함수이름" 을 사용하세요
	std::cout << c1.get_count() << std::endl; // 2
}







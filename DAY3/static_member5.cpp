#include <iostream>

class Car
{
	int color = 0;
	static int cnt;
public:	
	Car() { ++cnt;}
	~Car() {--cnt;}

	int get_count() { return cnt;}
};
int Car::cnt = 0;	// cnt 가 private 에 있어도 외부 선언시 초기화는 허용됩니다

int main()
{
//	Car::cnt = -10; // error. private 멤버

	Car c1;
	Car c2;

	// 자동차 갯수 출력해 보세요
	std::cout << c1.get_count() << std::endl; // 2
}




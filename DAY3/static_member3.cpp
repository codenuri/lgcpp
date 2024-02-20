#include <iostream>

// 방법 3. static member data

class Car
{
	int color = 0;
public:	

//	int cnt = 0;			// 객체당 한개씩 만들어지는 멤버

	static int cnt;		// 객체당 한개가 아닌 Car 객체에 갯수에 상관없이
						// 오직 한개만 메모리에 놓인다.(전역변수와 유사)

						// C++ 규칙 : static 멤버 데이타는 반드시 클래스 외부에서
						//           도 선언을 제공해야 합니다.(java, C#필요없음)
	Car() { ++cnt;}
	~Car() {--cnt;}
};

int Car::cnt = 0;	// "Car::" 만 없으면 결국 전역변수 모양입니다.
					// "Car" 가 사용하는 전역변수라고 생각하세요
					// 이 코드 때문에 "Car" 객체가 없어도 Car::cnt 는 메모리에존재

int main()
{
	// static 멤버 데이타는 "클래스이름::"로 접근 가능합니다.
	std::cout << Car::cnt << std::endl; // 0

	Car c1;
	Car c2;

//	cnt = -10; // 사용자가 실수 했다.

	std::cout << Car::cnt << std::endl;	 // 2
	
}




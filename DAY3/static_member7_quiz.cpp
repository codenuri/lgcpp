// static 멤버 함수의 의미(특징)
// => 객체가 없어도 호출가능하다.

// => 객체가 없는 상태로 실행되는 함수 이므로
//    이 함수 안에서는 "static 멤버 데이타" 만 접근 가능하다!!
//    static 이 아닌 멤버는 "객체가 있어야만 메모리에 존재" 하므로

// 결국 static 멤버 함수의 목적은 "static 멤버 데이타만 접근" 하는 것.


// static 멤버 데이타의 의미(특징)
// => 객체가 없어도 메모리에 존재 한다.
// => 객체를 여러개 만들어도 오직 한개를 모든 객체가 공유한다.


class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요

	// foo() 를 호출했다는 것은 "객체를 생성했다" 는 의미
	void foo()	
	{
		color = 0;	// 1. ok
		cnt = 0;	// 2. ok
		goo();		// 3. ok

		std::cout << this; // 4. ok
	}
	static void goo()	
	{
		color = 0;	// 5. error. 객체가 있어야먄 존재할수 있는 멤버
		cnt = 0;	// 6. ok
		foo();		// 7. error.

		std::cout << this; // 8. error. 	
							// static 멤버 함수는 객체가 없이도 호출가능.
							// 따라서, this 를 사용할수 없다.
							// this 는 객체의 주소를 의미 하므로
	}
};
int Car::cnt;

int main()
{
	Car::goo(); // 객체 없이 호출.
//	Car c;
//	c.goo(); // goo();
//	c.foo(); //foo(&c);
}

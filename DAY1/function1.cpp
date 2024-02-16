
// 34 page
// default parameter : 인자를 전달하지 않으면 디폴트 값을 사용하는 문법

// 주의 사항 1. 함수를 선언과 구현으로 분리시에는 선언에만 디폴트 값 표기
//          2. 마지막 인자부터 차례대로만 지정 가능

void f1(int a, 		int b,     int c = 0) {} // ok
void f2(int a, 		int b = 0, int c) {}	 // error
void f3(int a = 0, 	int b, 	   int c = 0) {} // error
void f4(int a, 		int b = 0, int c = 0) {} // ok

void foo(int a = 0, int b = 0, int c = 0 );

int main()
{
	foo(1, 2, 3);
	foo(1, 2);	// 1, 2, 0
	foo(1);		// 1, 0, 0
	foo();		// 0, 0, 0
}

void foo(int a /*= 0*/, int b /* = 0*/ , int c /*= 0*/)
{
}

// 원본인자를 변경하지 않으려고 합니다.
// 다음중 좋은 코드는 ?
void f1(int n)        { int a = n;} // 1
void f2(const int& r) { int a = r;} // 2 
						// int a = *r

int main()
{
	int x = 10;
	f1(x);
	f2(x);

}

// 함수 인자를 받는 방법
// in parameter  : 함수가 전달 받은 인자를 읽기만 하는 경우
// out parameter : 함수에서 전달된 인자를 수정하는 경우(inc, swap등의함수)

// 1. out parameter 를 만드는 경우
// => 인자로 pointer 나 reference 사용
// => reference 가 좀더 안전합니다.
void f(int* p) { *p = 10;} // 나쁘지는 않지만 
void f(int& r) { r = 10;}  // 이 코드가 좀더 안전합니다.

// 2. in parameter
// 2.1 인자가 primitive type 인 경우
// => primitive type : 각 언어가 기본적으로 제공하는 타입(int, double등)
void f1(int n)        {int a = n;} // good
void f2(const int& r) {int a = r;} // bad

// 2.2 인자가 user define type 인 경우(구조체 등으로 만든 것)
// => call by value 보단 const reference 권장!!!
void f1(Rect rc)        {} // bad, 복사본의 오버헤드가 있다.
void f2(const Rect& rc) {} // good.

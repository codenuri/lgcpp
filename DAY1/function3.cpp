// 37 page
// function overloading

// C : 동일 이름의 함수를 2개이상 만들수 없다.
// C++ : 인자의 갯수나 타입이 다르면 동일 이름의 함수를 여러개 만들수 있다
// => 함수 오버로딩이라고 합니다.

// 함수 오버로딩은 대부분의 언어가 지원
// => 단, C 언어, Python 언어는 지원 안함

int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
int main()
{
	square(3);
	square(3.4);
}
// 주의 사항 : 함수 호출 구문을 보고, 호출될 함수를 결정할수 있어야 합니다.

void f1(int a)        {}
void f1(int a, int b) {}

f1(3); // ok

void f2(int a)            {}
void f2(int a, int b = 0) {}

f2(3); // error


int  f3(int a) { return 0;}
void f3(int a) {}

f3(3); // error. 인자는 같은데, return 타입만 다른 경우는 오버로딩 안됨.
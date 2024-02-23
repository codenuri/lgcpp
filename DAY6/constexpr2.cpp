// 70 page

int add1(int a, int b)
{
	return a + b;
}
// constexpr 함수
// => 인자값을 컴파일할때 알수 있다면 "함수 실행"도 컴파일 할때 해달라.
// => 인자값을 컴파일할때 알수 없다면 "함수 실행"은 실행할때 해달라.

// 단, constexpr 함수에서
// => cout, printf, malloc, new 등을 사용할수는 없습니다.

constexpr int add2(int a, int b)
{
	return a + b;
}

int main()
{
	int n1 = add1(1,2);	// 1. 1, 2을 약속된 장소에 넣고
						// 2. 함수로 이동 "call add1"
	int n2 = add2(1,2); // 컴파일 하면 "3" 이 남게 됩니다.
}
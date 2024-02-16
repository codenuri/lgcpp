// auto - 28page
int main()
{
	int x[3] = { 1,2,3 };

//	int n = x[0];

	// 우변의 표현식을 조사해서 좌변의 타입을 결정해 달라.
	// 컴파일러가 컴파일 시간에 타입 결정
	// 실행시간 오버헤드 없음.
	auto n = x[0];	// 컴파일 되면  int n = x[0]


	// decltype( exp ) : () 안에 있는 표현식의 타입 결정
	decltype(n) d;	// int d
}

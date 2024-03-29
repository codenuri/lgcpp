// pointer vs reference
int main()
{
	int  n = 10;

	// #0. & 연산자에 대해서
	// 1. 이미 선언된 변수 앞에 붙는 경우 주소연산자 : &n
	// 2. 변수 선언시 (int& r) 는 주소연산자가 아닌 reference 선언. 


	// #1. 초기화 하는 방법
	int* p1 = &n;	// 포인터 변수는 주소로 초기화
	int& r1 = n;	// 레퍼런스는 변수 이름으로 초기화

	// #2. 대상체(n) 에 접근
	*p1 = 20;	// 포인터 변수는 * 연산자 필요
	r1  = 20;	// 레퍼런스는 대상체 변수와 같은 방법으로 사용


	// #3. 포인터는 초기값이 없거나 0을 가질수 있지만 reference는
	//     반드시 유효한 변수로 초기화 되어야 한다.
	int* p2;			// ok. 나쁜 코드지만 에러는 아님. 쓰레기값 가짐.
	int* p3 = nullptr;	// ok. 
	int& r2;			// error. 초기값이 반드시 있어야 한다.
	
	
	// #4. 포인터는 대상체를 변경할수 있지만
	//     reference 는 변경할수 없습니다.
	int n2 = 20;
	p1 = &n2; // n 을 가리키던 p1이 n2 를 가리키게 됩니다.
			  // 대상체의 변경
	r1 = n2;  // n2가 가진 값을 r1이 가리키는 곳(n)에 넣기
}



// pointer 보다 reference 가 안전 하다.

void f1(int* p)
{
	// 함수 인자로 포인터를 사용하는 경우
	// 안전한 코드를 위해서는 보통 아래 처럼 작성해야 합니다.
	if ( p != nullptr )
	{
		*p = 10;
	}
}

void f2(int& r)
{
	// reference 는 대부분의 경우 안전합니다.
	// 위 처럼 조사할 필요없이 그냥 사용해도 됩니다.
	r = 10;
}
// nullptr. 24 page
int main()
{
	int  n1 = 0; // 0 은 정수(int) 입니다.
	int* p1 = 0; // 그런데, 포인터 초기화에 사용가능합니다

//	int* p2 = 3; // error. 0만 포인터 초기화에 사용가능

	// C++ 에서 포인터 초기화에 계속 0을 사용해도 되지만
	// 되도록이면 아래 처럼하세요
	int* p3 = nullptr; // good. 좋은 코드
	int n2 = nullptr; // error. 포인터 초기화만 가능.
}
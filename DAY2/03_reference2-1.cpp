// 03_reference2-1.cpp
int main()
{
	int n = 10;

	int* p = &n;
	int& r = n; // 내부적으로 결국 포인터 int* r = &n 과 동일

	n = 20;
	*p = 20;
	r = 20;		// 내부적 원리는 결국 *r = 20

	// pointer 와 reference 는 결국 내부 원리는 완벽히 동일합니다.
	// 그런데, reference 가 
	// 1. 안전하고(0 이나 잘못된 곳을 가리킬수 없다.)
	// 2. 사용하기 쉽다.

	// 안전한 포인터가 결국 reference 입니다.
}
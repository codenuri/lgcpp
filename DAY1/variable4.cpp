// 26 page
struct Point
{
	int x, y;
};
int main()
{
	// 20page - 중요한 변화.!

	//C 언어는 변수의 종류에 따라 초기화 방법이 다릅니다
	int n1 = 10;
//	int a(10); // 이코드는 C++만 됩니다. C 안됩니다. 
			   // C+98 부터 지원되던 문법
	int x1[3] = { 1,2,3 };
	Point p1 = { 1,2 };

	// C++11 부터는 모든 종류의 변수를 {} 로 초기화 가능합니다
	// uniform initialization 이라는 문법
	// 흔히, 중괄호 초기화 라고도 합니다.
	int n2    = {10};
	int x2[3] = { 1,2,3 };
	Point p2  = { 1,2 };

	int n3{10};
	int x3[3]{ 1,2,3 };
	Point p3{ 1,2 };

	// direct initializatioin : = 이 없는 초기화
	// copy   initializatioin : = 이 있는 초기화

	// prevent narrow
	int k1 = 3.4; // ok. 단, n 은 3으로 초기화
				 // 하지만, 논리적으로는 잘못된 문법..
				 // 대부분의 다른 언어는 에러!!

	int k2 = {3.4}; // error. 
	char c = {500}; // error. 1바이트에 500을 담을수 없다.
	int k3{3.4}; // error
}




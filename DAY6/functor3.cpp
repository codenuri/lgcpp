#include <iostream>
#include <vector>
#include <algorithm>

// 일반 함수 : 동작이 있지만 상태가 없다.
//			  실행중에 만들어진 데이타를 어딘가에 보관할 방법이 없다.
//			  "전역변수"등에 보관하거나, "return"해서 호출자에 반환할수밖에 없다
bool foo(int n) 
{
	 return n % 3 == 0;
}

// 아래 함수객체에 대해서 잘 생각해 보세요
// 함수객체는 "멤버 데이타"가 있고, "생성자로 초기화도 가능"
// => 흔히 "상태를 가지는 함수" 라고 합니다.
class IsDivide 
{
	int value;
public:
	IsDivide(int n) : value{n}  {}

	// () 연산자를 제공하고, 인자가 한개 입니다
	bool operator()(int n)  {	return n % value == 0;	}
};
int main()
{
	std::vector<int> v = {1,9,2,4,3,7};

	int k = 3;
	IsDivide f(k); // 1. f 는 객체지만 인자가 한개인 함수처럼 사용가능
				   // 2. f 는 내부적으로 k 값을 보관합니다. ( k값 캡쳐)

	bool b = f(10); // 10 % k 의 의미

	auto ret = std::find_if( v.begin(), v.end(), f);
					// 결국 f 는 "main 지역변수 k값을 보관하고있는" 단항함수
}

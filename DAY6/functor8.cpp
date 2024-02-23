#include <iostream>
#include <vector>
#include <algorithm>


class IsDivide 
{
	int value;
public:
	IsDivide(int n) : value{n}  {}
	bool operator()(int n)  {	return n % value == 0;	}
};
int main()
{
	std::vector<int> v = {1,9,2,4,3,7};

	int k = 3;

	IsDivide f(k);	// f는 이름있는 객체
					// => 계속사용하겠다는 의도..
					// => f라는 단항함수 객체 를 계속 사용

	auto ret = std::find_if( v.begin(), v.end(), f);


	auto ret = std::find_if( v.begin(), v.end(), IsDivide(k) );
												// 한번만 사용한다면
												// 임시객체로
					
}

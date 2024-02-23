#include <iostream>
#include <vector>
#include <algorithm>

bool foo(int n) { return n % 3 == 0;}

// 아래 함수객체에 대해서 잘 생각해 보세요
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
	IsDivide f(k);
	bool b = f(10); // 10 % k 의 의미
}

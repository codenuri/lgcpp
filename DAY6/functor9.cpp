#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = {1,9,2,4,3,7};

	int k = 3;
	auto ret = std::find_if( v.begin(), v.end(), 
						[k](int n) { return n % k == 0;  } );
	//-------------------------------------------------------
	// 위 한줄 코드를 컴파일러가 아래 코드로 변경합니다.

	class CompilerGeneratedName
	{
		int k; // <= 캡쳐를 하면 멤버데이타 생성
	public:
		CompilerGeneratedName(int n) : k(n) {}

		bool operator()(int n) const 
		{
			return n % k == 0;
		}
	};

	auto ret2 = std::find_if( v.begin(), v.end(), CompilerGeneratedName(k));
}

#include <iostream>
#include <cstring> // memcpy() C 표준함수
#include <vector>

int main()
{
	int n = 0;

	std::vector<int> v;

	while( 1 )
	{
		std::cin >> n;

		if ( n == -1 ) break;

		v.push_back(n);
	}
	std::cout << "입력한 갯수        : " << v.size() << std::endl;

	// range-for 안에 배열뿐 아니라 모든 STL 클래스 사용가능합니다.
	for( auto e : v)
	{
		std::cout << e << ", ";
	}

	// v가 사용하던 메모리는 vector 소멸자에서 알아서 파괴됩니다.
	// 사용자가 해야할일은 없습니다.
}

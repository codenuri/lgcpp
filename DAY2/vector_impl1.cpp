#include <iostream>
#include <cstring>

int main()
{
	// 크기를 변경할수 있는 동적배열을 흔히 vector라고 부릅니다.
	vector v(4, 0);  // 4개를 0으로 초기화 해달라.

	v.resize(8);     // 8개로 키워 달라.

	std::cout << v.size() << std::endl; // 8
}
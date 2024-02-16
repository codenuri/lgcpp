#include <iostream>

template<typename T>
T Add(T a, T b)
{
	return a + b;
}
int main()
{
	std::cout << Add(1, 2.1) << std::endl;
					// error. T의 타입을 결정할수 없다.
					// 1번째 인자로 생각하면 int
					// 2번째 인자로 생각하면 double 이므로

	std::cout << Add<double>(1, 2.1) << std::endl;
					// ok.. 사용자가 전달했으므로 무조건 double
}
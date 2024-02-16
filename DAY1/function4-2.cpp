/*
template<typename T> 		
T square(T a)
{
	return a * a;
}
*/
// 함수 인자로 "auto" 사용 
// C++17 까지는 에러
// C++20 부터는 가능. 결국은 아래 코드는 위 코드(템플릿) 과 완전히 동일
// g++ 소스.cpp -std=c++20 으로 하면 됩니다.
auto square( auto a) 
{
	return a * a;
}
int main()
{
	auto a1 = 3;	// int a1 = 3;
	auto a2 = 3.4;	// double a2 = 3.4;

	square(3);
	square(3.4);
}

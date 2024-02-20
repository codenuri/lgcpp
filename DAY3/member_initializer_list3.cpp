#include <string>

class Person1
{
	std::string name;
	int age;
public:
	// 아래 코드는
	// 1. std::string name;
	// 2. name = n    
	// 의 의미

	// 사용자가 만든 코드					  // 컴파일러가 추가한 코드
	Person1(const std::string& n, int a) 	// : name()   <= 1. name 의 디폴트 생성자호출
	{
		name = n;	// 2. name.operator=(n) 이라는 함수가 호출.
		age = a;
	}
};
// Person1 p1("kim", 10)


class Person2
{
	std::string name;
	int age;
public:
	Person2(const std::string& n, int a)
		 : name(n), age(a)   // name 에 대해서 인자 한개의 생성자 호출로 초기화
		 					// std::string name(n) 의 의미. 즉, 대입이 아닌초기화
	{

	}
};



int main()
{
	Person1 p1("kim", 29);	
	Person2 p2("kim", 29);
}
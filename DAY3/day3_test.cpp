#include <iostream>
#include <string>
#include <vector>

class Person
{
private:
	std::string name;
	int age;

public:
	Person(const std::string& n, int a) 
	{
		name = n;
    
		if ( a >= 0 && a <= 150) // 이부분은 그냥 age = a 로 해도 정답 처리하겠습니다.
      age = a;
    else 
      age = 0;
	}
	void set_name(const std::string& n) 
	{
		name = n;
	}
	void set_age(int a)
	{
		if ( a >= 0 && a <= 150)
			age = a;
	}
	std::string get_name() { return name; }
	int         get_age()  { return age; }
};


void ex1()
{
	// #1. 아래 처럼 동작하는 Person 을 만들어 보세요
	// => 멤버 데이타는 반드시 private 에 놓으세요
	Person p1("kim", 20);
	
	p1.set_name("lee");
	p1.set_age(30);
	p1.set_age(-10); // 잘못된 값이므로 p1 의 나이는 변경되면 안됩니다.
			 // 나이의 유효한 범위는 0 <= age <= 150 정도로 하시면 됩니다.
	
	std::cout << p1.get_name() << std::endl; // lee 나와야 합니다. 
	std::cout << p1.get_age()  << std::endl; // 30 나와야 합니다.	
}

void ex2()
{
	int n = 0;
	std::vector<int> v;
	
	while(1)
	{
		std::cin >> n;
		if ( n == -1 ) break;
		v.push_back(n);
	}

	int total = 0;
	for( auto e: v )
		total += e;

	std::cout << "total : " << total << std::endl;
	std::cout << "average : " << total / v.size() << std::endl;
}

int main() 
{
	ex1();
	ex2();	
}

// member_initializer_list3-1.cpp
#include <string>

class Person
{
private:
	std::string name;
	int age;

public:
	// 멤버 초기화 리스트(member initializer list)
	// => 생성자의 () 뒤에 : 을 표기하고 멤버 데이타를 초기화 하는 문법
	// => 생성자 인자와 멤버 데이타 이름이 동일해도 됩니다.
	Person(const std::string& name, int age) : name{name}, age{age}
	{
	}
	// 주의 : 멤버 초기화 리스트는 "생성자" 에서만 가능한 문법 입니다.
	//        생성자가 아닌 곳에서는 사용할수 없습니다.
	void set_name(const std::string& n) // : name{n} // error
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
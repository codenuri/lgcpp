// 4_접근지정자1 - 74page
#include <iostream>
#include <string>




// struct : 접근지정자 생략시 디폴트값은 public 
// class  : 접근지정자 생략시 디폴트값은 private

// struct vs class
// java, C# : 완전히 다릅니다. 다양한 차이점 존재

// C++      : 접근 지정자의 디폴트값만 다르고 나머지는 동일
// Rust     : struct 만존재 합니다.

//struct Person
class Person
{
//private:			
	std::string name;
	int  age;	

public:				
	void set_age( int a)
	{
		if ( a >= 0 && a < 150 )
			age = a;
	}
};



int main()
{
	Person p;
	p.set_age(-10);
}

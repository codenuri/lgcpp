#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// 객체지향 프로그래밍의 핵심
// => 모든 것은 "객체" 이다
// => 프로그램에서 필요한 타입을 먼저 설계해라!

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem( const std::string& title, int id) : title{title}, id{id}  {}

	std::string get_title() const { return title;}

	// 메뉴 선택시 해야 할일은 아래 함수에서 작성.
	void command()
	{
		std::cout << get_title() << "메뉴 선택됨\n";
		std::cout << "press any key\n";
		_getch();
	}
};

int main()
{
	MenuItem m1("김밥", 11);
	MenuItem m2("라면", 12);

	m1.command(); // 메뉴를 선택하면 호출할 함수!
}

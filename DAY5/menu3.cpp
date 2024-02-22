#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// menu3.cpp - menu2 까지의 내용정리

// 객체지향 프로그래밍 : 필요한 타입을 먼저 설계한다.
// 메뉴가 필요하면 "메뉴 클래스" 를 먼저 설계해라!!

// MenuItem  : 메뉴 항목 한개를 나타내는 클래스
// PopupMenu : "여러개의 메뉴 항목" 을 가진 클래스 - 메모장에서 "파일 메뉴"

// 복습 하실때 일단 아래 2개 클래스를 먼저 완전히 이해 하고, 
// 다음 단계를 보세요

// 특히
// MenuItem 도 command() 가 있고
// PopupMenu 도 command() 가 있으니 잘 구별해 놓으세요


class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem( const std::string& title, int id) : title{title}, id{id}  {}

	std::string get_title() const { return title;}

	void command()
	{
		std::cout << get_title() << "메뉴 선택됨\n";
		std::cout << "press any key\n";
		_getch();
	}
};

class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;
public:
	PopupMenu(const std::string& title) : title{title} {}

	void add(MenuItem* m) { v.push_back(m);}

	void command()
	{
		while(1)
		{
			system("cls"); 

			int sz = v.size(); 

			for( int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->get_title() << std::endl;
			}
			std::cout << sz + 1 << ". 종료\n";

			std::cout << "메뉴를 선택하세요 >> ";
			
			int cmd;
			std::cin >> cmd;

			if ( cmd == sz + 1 ) 
				break;

			if ( cmd < 1 || cmd > sz + 1 ) 
				continue;

			v[cmd-1]->command(); 
		}
	}
};

int main()
{
	MenuItem m1("김밥", 11);
	MenuItem m2("라면", 12);

	PopupMenu pm("오늘의 점심 메뉴");
	pm.add(&m1);
	pm.add(&m2);

	pm.command(); 
}

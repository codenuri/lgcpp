#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// 모든 메뉴의 공통의 기반 클래스

class BaseMenu 
{	
	std::string title;
public:
	BaseMenu( const std::string& title ) : title{title} {}

	virtual ~BaseMenu() {}

	std::string get_title() const { return title;}
};

class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem( const std::string& title, int id) : BaseMenu(title), id{id}  {}


	void command()
	{
		std::cout << get_title() << "메뉴 선택됨\n";
		std::cout << "press any key\n";
		_getch();
	}
};

class PopupMenu : public BaseMenu
{
	std::vector<BaseMenu*> v;
public:
	PopupMenu(const std::string& title) : BaseMenu(title) {}

	void add(BaseMenu* m) { v.push_back(m);}

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
	MenuItem m1("참치김밥",   11);
	MenuItem m2("소고기김밥", 12);

	MenuItem m9("라면", 21);

	PopupMenu kimbab("김밥류");
	kimbab.add(&m1);
	kimbab.add(&m2);

	PopupMenu pm("오늘의 점심 메뉴");
	pm.add(&kimbab); // 핵심!!!! - 어떻게해야 할까요 ? 
					 // 클래스 Diagram 을 그려서 생각해야 합니다.
	pm.add(&m9);

	pm.command();
}


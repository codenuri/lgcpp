#include <iostream>
#include <string>
#include <vector>
#include <conio.h>


class BaseMenu 
{	
	std::string title;
public:
	BaseMenu( const std::string& title ) : title{title} {}

	virtual ~BaseMenu() {}

	std::string get_title() const { return title;}


	virtual void command() = 0;
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
	PopupMenu* root = new PopupMenu("ROOT");
	PopupMenu* pm1 = new PopupMenu("색상변경");
	PopupMenu* pm2 = new PopupMenu("해상도변경");

	root->add(pm1);
//	root->add(pm2);
	pm1->add(pm2); // 의미는 ?

	pm1->add( new MenuItem("RED",   11));
	pm1->add( new MenuItem("GREEN", 12));
	pm1->add( new MenuItem("BLUE",  13));
	pm1->add( new MenuItem("BLACK", 14));

	pm2->add( new MenuItem("HD",  21));
	pm2->add( new MenuItem("FHD", 22));
	pm2->add( new MenuItem("UHD", 23));	

	// 위 메뉴의 구조를 생각해 보세요
	// 이제 메뉴를 시작하려면  ??
	root->command();
}

// 객체지향 프로그래밍이라는 분야에서 "프로그램을 바라보는 관점"

// => 프로그램은 "객체의 집합" 이다

// 1. 프로그램에서 필요한 모든 것을 "타입(클래스)" 으로 설계한다.
// 2. 프로그램의 기본 단위는 "클래스" 이다.

// 프로그램은
// 1. 객체 생성하고
// 2. 객체 간의 관계를 설정하고
// 3. 객체 간의 메세지를 주고 받는 과정(서로의 멤버 함수를 호출한다는 의미)

// 장점
// 1. 코드 재사용성이 뛰어나고
// 2. 확장성이 좋다. 유지 보수가 편리하다.

// 단점
// 1. 어렵다!!


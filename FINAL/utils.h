#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <chrono>
#include <ctime>

class BaseMenu 
{	
	std::string title;
	BaseMenu* parent_menu = nullptr;	// 모든 메뉴는 자신의 상위 메뉴가 있을수 있습니다.
public:	
	BaseMenu( const std::string& title ) : title{title} {}
	virtual ~BaseMenu() {}


	BaseMenu* get_parent_menu() const { return parent_menu; }
	void set_parent_menu(BaseMenu* parent) { parent_menu = parent;}

	std::string get_title() const { return title;}

	virtual void command() = 0;
};

class PopupMenu : public BaseMenu
{
	std::vector<BaseMenu*> v;	
public:
	PopupMenu(const std::string& title) : BaseMenu(title) {}

	~PopupMenu()
	{
		for(auto e : v)
			delete e;
	}

	void add(BaseMenu* m) 
	{ 
		v.push_back(m);
		m->set_parent_menu(this);	// m 의 parent 메뉴 설정!
	}

	void command()
	{
		// 현재 메뉴의 경로를 계산 합니다.
		std::string current_menu_title = get_title();
		BaseMenu* parent = get_parent_menu();
		
		while( parent != nullptr )
		{
			current_menu_title = parent->get_title() + " / " + current_menu_title;
			parent = parent->get_parent_menu();
		}

		std::string exit_prompt = (get_parent_menu() == nullptr) ? ". 종료\n" : ". 상위 메뉴로\n";

		//------------------------------------------
		while(1)
		{
			system("cls"); 
			
			if ( current_menu_title != "" ) // ROOT 메뉴가 빈 문자열이면 어떠한 내용도 출력안함
			{
				std::cout << "[ " << current_menu_title << " ]\n";
			}

			int sz = v.size(); 

			for( int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->get_title() << std::endl;
			}
			std::cout << sz + 1 << exit_prompt;

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

class MenuItem : public BaseMenu
{
	int id;

	using HANDLER = void(*)(int); 
	HANDLER handler; 

public:
	MenuItem( const std::string& title, int id, HANDLER h = nullptr) 
		: BaseMenu(title), id{id}, handler{h}  {}

	void set_handler(HANDLER h) { handler = h;}

	void command()
	{
		if ( handler != nullptr)
			handler(id); 

		std::cout << "press any key\n";
		_getch();
	}
};

//------------------
// 올해의 년도를 구하는 함수
int current_year() 
{
    typedef std::chrono::duration<int, std::ratio_multiply<std::chrono::hours::period, std::ratio<24*365> >::type> year;

    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::chrono::system_clock::duration tp = now.time_since_epoch();
    year y = std::chrono::duration_cast<year>(tp);

	return y.count() + 1970;
}

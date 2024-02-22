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
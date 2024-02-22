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

	using HANDLER = void(*)(int); // 함수의 주소를 담는 타입
								  // C복습할때 공부해 보세요(함수 포인터 타입)

	HANDLER hander; // handler 는 함수의 주소를 보관하는 변수

public:
	MenuItem( const std::string& title, int id, HANDLER h = nullptr) 
		: BaseMenu(title), id{id}, handler{h}  {}

	// 생성자 3번째 인자 또는 아래 멤버 함수를 사용해도 "핸들러함수" 등록가능
	void set_handler(HANDLER h) { handler = h;}

	void command()
	{
		if ( handler != nullptr)
			handler(id); 

		std::cout << "press any key\n";
		_getch();
	}
};
//===============
// 메뉴 처리를 위해 등록되는 함수는 반드시 인자로 int 한개를 받아야 합니다.
void add_customer(int menuid) { std::cout << "고객 등록하는 코드 작성\n";}
void show_customer(int menuid){	std::cout << "고객 열거하는 코드 작성\n";}

int main()
{
	PopupMenu* root = new PopupMenu("ROOT");

	root->add( new MenuItem("고객 등록", 11, add_customer));
	root->add( new MenuItem("고객 열거", 12, show_customer));

	root->command();
}



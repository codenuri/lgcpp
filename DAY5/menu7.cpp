#include <vector>
#include <string>
#include <iostream>
#include "menu.h"  // 내일 종합 평가 할때 이렇게 하세요

class People
{
public:
	std::string name;
    
	People(const std::string& name) : name{name} {}
};
//=======================================================
std::vector<People*> v; // 전역으로 놓고 하셔도 됩니다. 이렇게 하는 것이 편리
                        // 모든 함수에서 사용해야 합니다.

void add(int menuid) 
{
    std::cout << "고객 이름 >> ";
	std::string name;
	std::cin >> name;

	v.push_back(new People(name));
}
void show(int menuid) 
{
	// v에 있는 모든 고객 이름을 출력해보세요
}

int main()
{
	PopupMenu* root = new PopupMenu("ROOT");

	root->add( new MenuItem("고객 등록", 11, add));
	root->add( new MenuItem("고객 열거", 12, show));


	root->command();
}
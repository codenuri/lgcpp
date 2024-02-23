#include <iostream>
#include "utils.h"

void add(int menuid)    {}
void remove(int menuid) {}

int main()
{
	// #1. 올해 연도 구하는 함수
	int year = current_year();

	std::cout << year << std::endl;

	// #2. 메뉴 구축.
	PopupMenu* root = new PopupMenu("ROOT");
	PopupMenu* pm1 = new PopupMenu("고객관리");
	PopupMenu* pm2 = new PopupMenu("고객관리_하위팝업");

	root->add(pm1);
	pm1->add(pm2);

	pm1->add(new MenuItem("추가", 11, add));
	pm1->add(new MenuItem("삭제", 12, remove));

	root->command();

	// 모든 메뉴도 new 로 만들었으므로 "delete" 해야 합니다.
	delete root; // 이순간 root 메뉴객체가 파괴되고
				 // PopupMenu 의 소멸자가 호출됩니다. 
				 // => PopupMenu 의 소멸자가 자신이 가진 모두 메뉴를 다시 delete 하도록
				 //    구현되어 있습니다.
				 // 따라서, 이 한줄만 있으면 메뉴 관련 모든 객체는 자동파괴됩니다.
}

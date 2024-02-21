#include <vector>
#include <string>
#include <iostream>

int main()
{
	// 아래 코드가 에러가 발생하지 않도록 View, Button, TextBox 클래스를 설계해 주세요
	std::vector<View*> child_window;

	child_window.push_back( new Button );
	child_window.push_back( new TextBox );

	child_window[0]->set_color(10); // "changed color 10" 으로 출력되게 해주세요
	child_window[1]->set_color(20); // "changed color 20" 으로 출력되게 해주세요.

	child_window[0]->show(); // "show Button"	가 출력되게 해주세요
	child_window[1]->show(); // "show TextBox"  가 출력되게 해주세요

	for( auto child : child_window )
		delete child;
}

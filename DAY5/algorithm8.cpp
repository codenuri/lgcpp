#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "People.h"

std::vector<People*> v = { new People("kim", 20), 
						   new People("lee", 30),
						   new People("park", 40),
						   new People("lee", 35) };

int main()
{
	// v에서 이름이 lee 인 사람을 찾아서 나이를 출력해 주세요 - std::find
	// std::find : 요소의 특정한 값 찾기..
	//			   현재 요소는 객체의 주소..!!!
	//             특정 주소를 찾을 이유는 없다.!!!
	//             따라서 find_if 로 해야 합니다.

	auto ret = std::find_if( v.begin(), v.end(), 
							[](People* p){ return p->name == "lee"; } );

	if ( ret != v.end() )
	{
		std::cout << (*ret)->name << "(" << (*ret)->age << ")\n"; 

		// 모든 반복자는 ++은 됩니다.
		auto ret2 = std::find_if( ++ret, v.end(), 
							[](People* p){ return p->name == "lee"; } );

		if ( ret2 != v.end() )
		{
			std::cout << (*ret2)->name << "(" << (*ret2)->age << ")\n"; 
		}
	}




}







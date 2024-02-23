#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "People.h"

std::vector<People*> v = { new People("kim",  20), 
						   new People("lee",  30),
						   new People("park", 40),
						   new People("choi", 35) };

void print()
{
	int i = 0;
	for( auto e : v)
	{
		std::cout << ++i << ". " << e->name << "(" << e->age << ")\n";
	}
}

int main()
{
	// #1. 실행해서 결과를 확인해 보세요. 
	//     vector 에 삽입된 순서인 kim-lee-park-choi 순서로 출력됩니다.
	print();

	// #2. v 의 내용을 나이순으로 정렬후, 출력(print())해 보세요.

//	std::sort( v.begin(), v.end() ); // 이렇게 하면 메모리 주소로 비교 이므로
									// 아무 의미 없습니다.

	// 이름으로 정렬
	std::sort( v.begin(), v.end(), 
		[](const People* p1, const People* p2) { return p1->name < p2->name; }); 

	print();

}







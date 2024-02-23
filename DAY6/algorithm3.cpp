#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

int main()
{
	std::string name = "홍길동";
	std::string s = "길동";

	// == : 상등(같고, 다름)을 조사
	if ( name == s ) 
		std::cout << "같음\n";
	else
		std::cout << "다름\n";

	auto ret = std::search( name.begin(), name.end(), // 이구간의 문자열에서
							s.begin(), s.end());      // 이구간의 문자열의위치를
														// 찾아라!!

	// ret는 누구의 반복자 일까요 ?
	// 1. name => 답
	// 2. s 		

	if ( ret == name.end() )											
		std::cout << "포함안됨" << std::endl;
	else 
		std::cout << "포함됨" << std::endl;
}




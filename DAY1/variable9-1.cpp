#include <cstring>// <string.h> 의 C++ 버전, strcmp 등의 문자열 함수
#include <string> // C++ std::string 을 위한 헤더
#include <iostream>

int main()
{
	std::string s1 = "hello";
	std::string s2 = "hello";

	if ( s1 == s2 ) {} ;
	s1 = s2; 

	s1 = s1 + s2;

	std::cout << s1 << std::endl;
}
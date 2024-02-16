// string
// 32 page

#include <cstring>

int main()
{
	// C 의 문자열 : char 배열 또는 char* 사용
	char s1[] = "hello";
	char s2[] = "hello";

	if ( s1 == s2 ) {} // 문자열 자체의 비교가 아닌 배열의 주소 비교
						// 항상 false
						// 의도대로 하려면 "strcmp(s1, s2) == 0"
	s1 = s2; // error. 의도 대로 하려면 strcpy(s1, s2)

	// C++ : 문자열이 필요 하면 std::string 사용하세요
}
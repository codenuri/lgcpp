// using alias
// 30 page

//typedef int DWORD;
//typedef void(*PF)();	// 함수 포인터 타입.

// C++11 부터는 typedef 대신 using 사용하세요.
// 아래 2줄은 위 2줄과 완전히 동일 합니다.
using DWORD = int;
using PF = void(*)();

// typedef : 타입에 대한 별칭 만들기
// using   : 타입에 대한 별칭 + 템플릿 별칭
int main()
{
	DWORD n; 	// int n
	PF    f; 
}


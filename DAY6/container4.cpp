#include <iostream>
#include <algorithm>
#include <map>
#include <string>

// vector, list, deque :  데이타만 보관
// map : key-데이타 보관

int main()
{
	// map : key 값으로 data 보관
	std::map<std::string, std::string> m = { {"mon", "월요일"}, 
	                                         {"tue", "화요일"} };

	// 아래 처럼 넣어도 됩니다.
	m["wed"] = "수요일";

	std::cout << m["mon"] << std::endl; // 월요일


//	std::map<std::string, std::list<std::string> > rental;

//	rental["홍길동"].push_back("좋은책1");
//	rental["홍길동"].push_back("좋은책2");
	
}






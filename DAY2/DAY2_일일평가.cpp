#include <iostream>
#include <string> // C++ std::string
#include <cstring> // <string.h> 의 C++ 버전, strcmp 등의 문자열 함수를위해

// 아래 main 의 주석을 보고 코드를 완성해 보세요
// => 일부만 작성한 경우에는 부분 점수가 적용됩니다
namespace utils
{
	template<typename T>
	T max(T a, T b)
	{
		return a < b ? b : a;
	}
}

int main()
{
	// #1. 배열 x 의 모든 요소를 range-for 문을 사용해서 화면에 출력해 보세요
	// => range-for 안에서 각 요소를 받을때 "int" 가 아닌 "auto" 를 사용하세요
	int x[5] = { 1,2,3,4,5 };
	
	for( auto e : x )
	{
		std::cout << e << std::endl;
	}


	// #2. utils namespace 를 만들고 max 를 만들어 보세요
	// => 1. 템플릿으로 만드세요
	// => 2. 템플릿 인자는 한개로만 하시면 됩니다.(1, 2번째 인자 모두 T 로)
	std::cout << utils::max(10, 20) << std::endl; // 20 나와야 합니다.
	std::cout << utils::max(2.2, 1.1) << std::endl; // 2.2 나와야 합니다.



	// #3. C++이 제공하는 문자열 타입을 사용해서 
	//     (1) "hello", "world" 라는 문자열을 각각 s1, s2 라는 변수에 담으세요
	//     (2) s1, s2 를 더한 결과를 s3 변수에 담으세요
	//     (3) s3 를 화면에 출력하는 코드를 작성하세요
	//     (4) 필요한 헤더파일을 직접 추가해야 합니다.

	std::string s1 = "hello";
	std::string s2 = "world";

	std::string s3 = s1 + s2;

	std::cout << s3 << std::endl;

}

// github.com/codenuri/lgcpp 에서 

// DAY2.zip 받으시면 됩니다

// 8:50분에 시작합니다.
#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People( const std::string& name, int age) : name{name}, age{age} {}
};
// 1. People 로 부터 파생된 Student 만드세요
// 2. 학번(int id) 추가하세요(private)
// 3. 생성자 만드세요
// 4. main 에서 Student 객체 생성해 보세요


int main()
{
	People p("kim", 28);

//	People p;	// 이렇게 객체를 만들수 있게 하면 좋을까요 ?
				// 이름과 나이가 초기화 되지 않은 쓰레기값을 가지는 객체
}




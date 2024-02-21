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

class Student : public People 
{
	int id;
public:
//	Student( int id) : id{id} {} // Student( int id) : People(), id{id} {}
													// ^ 컴파일러가 추가!
	// 정답
	// => 결국 Student 만드는 사람은 "People" 의 디폴트 생성자가 없다는
	//   사실을 명확히 알고 있어야 합니다
	Student(const std::string& name, int age, int id) 
		: People( name, age ),  id{id} {}
};

int main()
{
	Student s("kim", 28, 15); // ok

//	People p("kim", 28);

//	People p;	// 이렇게 객체를 만들수 있게 하면 좋을까요 ?
				// 이름과 나이가 초기화 되지 않은 쓰레기값을 가지는 객체
}




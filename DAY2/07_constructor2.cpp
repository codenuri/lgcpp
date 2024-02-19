#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// 핵심 1. 생성자는 여러개 만들수 있다.
	Person(const std::string& n, int a)
	{
		std::cout << "생성자1 호출됨" << std::endl;
		name = n;
		age = a;
	}	

	Person()
	{
		std::cout << "생성자2 호출됨" << std::endl;
		name = "unknown";
		age = 0;
	}

	// 소멸자(destructor) : "~클래스이름" 모양의 함수
	//			반환값과 인자가 없다. 오직 한개만 만들수 있다.
	//		    객체가 파괴 될때 호출.
	~Person() { std::cout << "소멸자" << std::endl; }
};

int main()
{
	Person p1("kim", 28); // 생성자1 호출
	Person p2;			  // 생성자2 호출

} // p2, p1 파괴, 각각 소멸자 호출

// 생성자 : 객체 생성시 private 멤버를 초기화 하기 위해 만듬.
//         대부분의 클래스에서 항상 만들게 됩니다.

// 소멸자 : 필요한 경우만 만들면 됩니다. ( vector 예제 참고)
//			필요 없다면 만들필요 없습니다.
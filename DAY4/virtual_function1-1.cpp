#include <iostream>

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }  // 2
};

int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;		

	// if ( 사용자가 입력한 값 == 1 ) p = &a; 

	// 위 주석과 같은 코드가 있었다면 컴파일러는 p가 가리키는 곳에
	// 어떤 객체가 있을지 알수 있을까요 ?
	p->Cry1(); 

}




// p->Cry1() 를 어떤 함수와 연결(binding) 할것인가 ??
// => "함수 바인딩" 이야기

// 1. static binding : 컴파일 시간에 컴파일러가 함수 호출을 결정하는 것.
//					   컴파일러는 p가 가리키는 곳에 어떤 객체가 있는지는 알수
//						없습니다.(위 main 주석 참고)
//						컴파일러가 아는것은 p 자체의 타입이 "Animal*"라는것

//						따라서, 컴파일러가 호출을 결정하면 포인터 타입으로 결정
//						"Animal Cry1" 호출
// 빠르지만 논리적이지 않다.
// C++/C#의 기본 정책

// 2. dynamic binding : 컴파일 시간에는 p가 가리키는 메모리를 조사하는 기계어
//						생성, 실행시간에 p가 가리키는 곳을 조사한후에 호출결정

//						가리키는 곳에 "Dog"객체가 있었다면 "Dog Cry1" 호출
// 느리지만 논리적이다.
// Java, Swift, Kotlin, Python 등의 대부분의 객체지향 언어
// C++/C#의 virtual function



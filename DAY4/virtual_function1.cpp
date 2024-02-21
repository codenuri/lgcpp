#include <iostream>

// 139 page , 147 page
class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// function override : 기반 클래스 멤버 함수를 파생 클래스에서 다시 구현하는 것
	// 
	// overloading 과 잘 구별 하세요 : square(int), square(double)
	//								 => 인자가 다르면 2개이상 만들수 있다는것.

	// override : 기반 클래스 멤버 함수를 파생 클래스가 다시 만드는 것(인자도 동일한모양)
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }  // 2
};

int main()
{
	Animal a; 
	Dog    d; 

	a.Cry1(); // 1
	d.Cry1(); // 2

	Animal* p = &d;		

	// p는 Animal* 인데, 가리키는 대상객체는 Dog 입니다.
	p->Cry1(); 
	// C++, C# : Animal Cry1 호출.
	// Java, Swift, Kotlin, Objective-C, python : Dog Cry1

}


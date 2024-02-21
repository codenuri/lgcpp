#include <iostream>
#include <string>

// 128 page ~

// #1. 모든 인간의 공통의 특징을 먼저 설계합니다.
class Person
{
	std::string name;
	int age;
};

// #2. 기존 타입을 확장해서 새로운 타입을 설계 합니다.
// => 상속(inheritance) 문법

// C++     : class Student : public Person
// C#      : class Student : Person
// Python  : class Student(Person)
// java    : class Student extends Person

// 용어 정리
// Person  : Base class(기반클래스),    Super class, Parent class
// Student : Derived class(파생클래스), Sub   class, Child  class

// 그림 그릴때 : 기반 클래스 쪽으로 화살표
// (UML : 클래스 구조를 그림으로 표현)
// => Unified Modeling Language


class Student : public Person
{	
	int    id;
};

class Professor : public Person
{
	int    major;
};

int main()
{
	Student s;
	Professor p;
}

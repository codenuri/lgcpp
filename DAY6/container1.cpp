#include <iostream>

// 179 page ~ 

// 컨테이너(container)
// => 여러개의 요소를 보관하는 클래스, 다른언어에서 컬렉션(collection) 이라고 합니다.
#include <vector>
#include <list>
#include <deque>

int main()
{
	// #1. 각 컨테이너의 메모리 구조 알아 두세요
	std::vector<int> v = { 1,2,3,4,5 }; // 모든요소가 연속된 메모리에 보관
										// => 모든 요소를 순차적 접근은 빠릅니다.
										// => 중간에 요소 삽입은 느립니다.
	
	std::list<int>   s = { 1,2,3,4,5 }; // 모든 요소를 떨어진 메모리 에 보관	
										// => 모든 요소를 순차적 접근은 느리지만
										// => 중간에 요소 삽입은 빠르다.!

	std::deque<int>  d = { 1,2,3,4,5 }; // 연속된 메모리 블럭을 list 처럼 연결해서 사용


	// #2. 3개 컨테이너는 사용법이 유사하고, 멤버함수 이름도 동일합니다.
	// => 기능은 유사하지만, 
	// => 각 기능의 성능이 다릅니다.
	// => 중간 삽입은 list 가 제일 빠릅니다. 열거는 vector
	v.push_back(0);
	s.push_back(0);
	d.push_back(0);

	// #3. 사용법이 다르면 의도적인 설계 입니다.
	v.push_front(0); // error. vector 는 전방삽입 안됩니다.
					 // 연속적인 메모리의 전방삽입은 너무 느립니다.
					// 앞에 삽입을 해야 한다만 vector 사용하지 말고 
					// list 또는 deque 사용
	s.push_front(0); // ok
	d.push_front(0); // ok


	// #4. [] 연산은 list 는 안됩니다.
	v[0] = 0; // ok
	s[0] = 0; // error
	d[0] = 0; // ok

	/*
	// 만약 list 에 [] 연산이 된다면 아래 코드의 성능을 생각해 보세요
	for(int i = 0; i < 5; i++)
	{
		s[i] = 0; // i = 1,2,3,4,5 일때생각해 보세요
	}
	*/
}





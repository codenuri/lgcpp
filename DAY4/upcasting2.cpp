// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	
	int age;
};
class Dog : public Animal
{
public:	
	int color;
};
class Cat : public Animal
{
public:	
	int speed;
};

// upcating 활용 1.
// => 동종(동일 기반 클래스를 사용하는 타입) 을 처리하는 함수를 만들수 있다.

// 모든 동물은 새해가 되면 한살이 증가 합니다
//void new_year(Dog* p) // Dog 만 전달 가능한 함수
void new_year(Animal* p) // 모든 동물을 전달 가능한 함수
{						// 단, 이함수에서는 모든 동물의 공통의 특징만 사용하겠
	++(p->age);			// 다는 의도!
}

int main()
{
	// Upcasting 활용/장점 #2. 
	std::vector<Dog*> v1; 	 // Dog 객체만 보관 가능한 vector(배열)
	std::vector<Animal*> v2; // 모든 동물객체를 보관 가능한 vector
							// "동종을 보관하는 컨테이너" 라고 합니다.
							// 컨테이너 : 여러개를 보관하는 도구
							//			(배열, vector, list, stack 등)
}

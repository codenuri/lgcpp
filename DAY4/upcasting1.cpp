#include <vector>

// 135 page ~

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
int main()
{
	Dog     dog;

	Dog*    p1 = &dog;	// ok. 같은 타입이므로 당연하다.

//	int*    p2 = &dog;	// error. 타입이 다르다.!!
	
	Animal* p3 = &dog;	// ok. 핵심!! 너무 중요!!! 객체지향 디자인의 핵심!

	// 핵심 1. 기반 클래스 포인터로 파생 클래스 주소를 담을수 있다.
	// => 이유는 "메모리 그림"을 그려 보세요
	// => Dog 객체의 메모리 윗쪽에는 결국 "Animal" 의 모양이 있다.

	// 핵심 2. 하지만, Animal* 타입인 p3로는 Animal 에서 상속된 멤버만
	//         사용가능. Dog 가 추가한 멤버는 사용못함
	// 이유 : C++은 컴파일 시간에  포인터 타입으로 멤버가 있는지 체크.

	p3->age = 10;   // ok
	p3->color = 10; // error

	// 핵심 3. p3를 사용해서 Dog 고유 멤버에 접근하려면
	//        p3 를 Dog* 로 캐스팅해야 합니다.
	// => 단, 이경우는 p3가 가리키는 곳이 Dog 라는 확신이 있어야 합니다.
	//    만일 Dog가 아니면 runtime error 발생할수 있습니다.
	((Dog*)p3)->color = 10;  // 교재의 static_cast는 금요일날
}





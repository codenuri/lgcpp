#include <iostream>

// 용어
// 추상 클래스 : 지켜야 하는 규칙(순수가상함수) + 다른 멤버도 있는 경우
// 인터 페이스 : 지켜야 하는 규칙(순수가상함수) 만 있는 경우


// 카메라를 먼저 만들지 말고!!!
// 카메라 제작자와 카메라 사용자 사이에 지켜야 하는 규칙을 먼저 설계하자.

// 규칙 : "모든 카메라는 아래 클래스로 부터 파생되어야 한다." 라고 표현하지 말고
//        "모든 카메라는 ICamera 인터페이스를 구현해야 한다." 라고 표현합니다

class ICamera
{
public:
	virtual void take() = 0;
	virtual ~ICamera() {} 	// 인터페이스는 결국은 기반 클래스이므로
							// 소멸자를 가상함수로 만들어 놓아야 합니다
};

// 위와 같이 "인터페이스"를 만들고, 다양한 디자인 기법들을 배우는 과정이
// "디자인 패턴" 이라는 과정입니다!!
// => 나중에 기회되면 학습해 보세요..


// 아직 실제 카메라는 없지만 "규칙" 이 있습니다.
// 카메라 사용자는 "규칙" 대로만 사용하면 됩니다.
class People
{
public:
	void use_camera(ICamera* c) { c->take();}
};

// 이제 모든 카메라 제품은 규칙대로 설계되어야 합니다.
class Camera : public ICamera
{
public:
	void take() override { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() override { std::cout << "take HD picture" << std::endl; }
};

class UHDCamera : public ICamera
{
public:
	void take() override { std::cout << "take UHD picture" << std::endl; }
};

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);	

	HDCamera hc;
	p.use_camera(&hc); // ??

	UHDCamera uhc;
	p.use_camera(&uhc); // People 클래스가 수정되지 않아도
						// 새로운 카메라 사용가능.
}


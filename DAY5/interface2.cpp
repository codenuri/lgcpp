#include <iostream>


// 카메라를 먼저 만들지 말고!!!
// 카메라 제작자와 카메라 사용자 사이에 지켜야 하는 규칙을 먼저 설계하자.

// 규칙 : 모든 카메라는 아래 클래스로 부터 파생되어야 한다.

class ICamera
{
public:
	virtual void take() = 0;
};










class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};


class People
{
public:
	void use_camera(Camera* c)   { c->take(); }
	void use_camera(HDCamera* c)   { c->take(); }
};

int main()
{
	People p;
	Camera c;

	p.use_camera(&c);	

	HDCamera hc;
	p.use_camera(&hc); // ??
}


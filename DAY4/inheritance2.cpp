// 대부분의 객체지향 언어에서 접근 지정자는 "3개 + 언어별 추가" 입니다
// C++ : private, protected, public 

// java, C# : file 등도 있습니다.  "같은 파일에 있는 클래스 끼리는 접근가능"

class Base
{
private:   	// 멤버 함수에서만 접근 가능
	int a;	

protected: 	// 멤버 함수와 파생 클래스의 멤버 에서 접근 가능
	int b;	

public:    	// 모든 함수에서 접근 가능
	int c;	

	void set_a(int v) { a = v;}
};

class Derived : public Base  
{
	// 아무 멤버도 없지만, Base로 부터 a, b, c 상속 받게 됩니다.	
public:
	void foo()
	{
		a = 0;	// error. 기반 클래스로 부터 물려는 받지만 접근은 안됨.
				//        변경하고 싶다면 기반 클래스의 멤버 함수사용 set_a(0)
		b = 0;  // ok. protected
		c = 0;  // ok
	}
};
int main()
{
	Base base;
	base.a = 0; // error. private
	base.b = 0; // error. protected
	base.c = 0; // ok.    public
}

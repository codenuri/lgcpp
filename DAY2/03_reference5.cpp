struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
// call by value : 원본 인자를 변경하지 않겠다는 약속이지만
//				   복사본 생성에 대한 오버헤드가 있다.

// const reference 인자 : 복사본에 대한 오버헤드 없이
//					     원본 인자를 변경하지 않겠다는 약속
//						 C++ 에서 가장 널리 사용되는 인자 전달 기술.

//void foo(Rect rc) 
//void foo(const Rect* rc)
void foo(const Rect& rc)
{ 	
//	rc.left = 10; // error. const 이므로 수정할수 없다.
} 

int main()
{
	Rect rc = {1, 1, 10, 10};

	// foo 에서는 절대 rc 를 변경하면 안된다.
	// 즉, foo 호출뒤에도 rc 는 1, 1, 10, 10 을 유지해야 한다.
	foo(rc);
}

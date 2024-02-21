// 결론 
// => 멤버 함수중에서 "내부적으로 멤버 데이타를 수정하지 않은" 모든 멤버 함수는
//   반드시 상수 멤버 함수로 해야 합니다.

void foo(const Point& p)
{
	p.set(10,10); // const 참조이므로 error 가 나오는 것이 맞지만

	p.print();   // 출력을 되어야 합니다.
				 // "상수객체는 상수 함수만 호출가능하므로"	
				 // print 는 반드시 "const" 함수 이어야 합니다.
}

class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x{a}, y{b}, w{c}, h{d} {}

//	int getArea() { return w * h; } // 틀린 코드
	int getArea() const { return w * h; } // ok.. 
};

//void foo(Rect r)	// call by value : 복사본의 오버헤드 있습니다.
void foo(const Rect& r) // 이 코드가 무조건 좋은 코드.
{
	int n = r.getArea();  	// ???
}

int main()
{
	Rect r(1, 1, 10, 10);	// 상수 객체 아닙니다.
	int n = r.getArea();	// ok. 아무 문제 없습니다.

	foo(r);	//
}




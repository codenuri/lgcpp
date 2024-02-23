#include <iostream>

// static_cast : 논리적으로 맞고 위험하지 않은 경우만 허용
//          void*=> 다른 타입*,
//			상속관계의 캐스팅 등.
//          반드시 연관성이 있어야 한다


int main()
{
	double d = 3.4;
	int    n = d;

	int* p1 = (int*)malloc(100); // malloc 이 반환한 void* =>int* 로  변환
	
	int* p2 = static_cast<int*>( malloc(100) ); // ok

	
	// int* => double* 변환
	double* p3 = &n;			// error
	double* p4 = (double*)&n;	// ok. 아주 위험하다.
	double* p5 = static_cast<double*>(&n); // error. 
	double* p6 = reinterpret_cast<double*>(&n); // ok

	// C 스타일 () 캐스팅 : 의도인지 실수인지 구별이되지 않는다.
	
	// C++ 스타일 캐스팅
	// 1. 기본적으로는 static_cast 만 사용하고.
	// 2. 의도에 따라 다른 캐스팅 사용
	// => 의도를 명확히 나타낼수 있으므로, 보다 안전한 코드 작성이 가능하다.
}


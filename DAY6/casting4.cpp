int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
	double* p1 = (double*)&c; // ok...

	// 위 코드를 C++ 캐스팅으로 해보세요
	// 서로 다른 타입주소는 "static_cast"는 안됩니다.
//	double* p2 = reinterpret_cast<double*>(&c); // error. c 는 상수
//	double* p2 = const_cast<double*>(&c);  // error. 동일 타입의 상수성제거

	double* p2 = reinterpret_cast<double*>(  const_cast<int*>(&c)); // ok
}






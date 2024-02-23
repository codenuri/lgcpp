// const_cast : 

int main()
{
	const int c = 10;

//	int* p1 = &c;    // error. 상수를 
					 //        상수가 아닌 것을 가리키는 포인터에 담을수없다
	int* p2 = (int*)&c; // ok
//	*p2 = 100; // 절대 사용하면 안되고, 일부 환경에서는 안될수도 있습니다.
			   // "undefined"

//	int* p3 = static_cast<int*>(&c); // error. 꼭 필요하고, 안전한 것만 허용
//	int* p3 = reinterpret_cast<int*>(&c); // error.
								//  다른 타입끼리의 주소 변환허용 하지만
								//  상수성 제거는 안됨.

	int* p3 = const_cast<int*>(&c);  // ok. 
						// 상수의 주소를 비상수를 가리키는 포인터에 담을때사용
						// 단, 정상적인 프로그램에서는 사용할 이유 없습니다.
}









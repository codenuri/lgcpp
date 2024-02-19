
#include <iostream>

// new, delete
// 47 page

int main()
{
	// C 스타일
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ 스타일
	int* p1 = new int;
	delete p1;

	int* p2 = new int[10]; 	// 배열 형태로 할당 하면
//	delete[] p2;			// 반드시 배열 형태로 delete 해야 합니다.
	delete p2; 	// 배열형태로 할당한 메모리는 제거할때 
				// 이렇게 하면 어떻게 되나요 ?
				// => undefined(미정의동작) 발생!!
				// => 절대 사용하면 안됩니다.
}
// 				malloc								new
// 정체			함수				 				키워드(연산자)
// 인자			할당할 크기(정수)  	  				 타입
// 반환타입		void* 인데 사용자가 원하는			  인자로 전달한 타입*
//			    타입으로 캐스팅해서 사용			  캐스팅 필요 없음
// 결정적차이	생성자 호출 안됨					  생성자 호출됨







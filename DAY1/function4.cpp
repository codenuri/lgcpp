// 39 page
// function template - 오늘 내용중 가장 중요!!! 꼭 이해 하세요

/*
int square(int a)
{
	return a * a;
}

double square(double a)
{
	return a * a;
}

*/

// 구현이 동일(유사)한 함수가 여러개 필요하면 함수를 직접 만들지 말고
// "함수를 만드는 틀(template)" 을 만들면 됩니다.

template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
//	square<int>(3);	// 이순간 square 틀을 사용해서
					// 1. int square(int) 모양의 함수생성
					// 2. 이 부분은 "call square<int>(3)" 의 기계어

//	square<double>(3.4);

	// 함수 템플릿 사용시 "타입 파라미터" 는 생략 가능합니다.
	// 이경우 함수 인자를 보고 컴파일러가 타입을 추론합니다.
	square(3);		// square<int>(3);
	square(3.4);	// square<double>(3.4);
}

// godbolt.org

// Code Bloat( 코드 폭팔)

// => 템플릿 사용시, 컴파일러가 너무나 많은 함수(클래스)를 생성해서
//    코드 메모리가 증가하는 현상

// 임베디드 분야등 메모리가 제한된 환경에서는 주의 해야 합니다.


// C++ 은 크게 3가지 기술로 구성됩니다.

// 1. C 언어의 모든것 + 좀더 발전된 문법들(auto 등)

// 2. 객체지향 프로그래밍 개념

// 3. template 기술.
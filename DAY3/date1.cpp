// date1.cpp
#include <iostream>

// 사원관리 프로그램을 만들어야 한다.
// => 입사 날짜 등을 관리해야 한다.
// => "Date" 타입이 있으면 편리하다.

// 1. 년월일, 시분초 를 같이 관리하자.
// 2. Date, Time 으로 나누자  => 좋은 디자인!! 단일 책임의 원칙

class Date
{
	// 년월일은 특정 구간의 값만 유효하다.
	// month : 1 ~ 12
	// 이런 경우는 데이타를 private 에 놓는 것이 안전하다.
public:
	int year;
	int month;
	int day;
};

int main()
{

}
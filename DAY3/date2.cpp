// date1.cpp
#include <iostream>
class Date
{
private:
	int year;
	int month;
	int day;
};

int main()
{
	// #1. 객체 생성
	Date today(2024, 2, 20); // ok. 되야 합니다.
	Data d1;				 // 되게 할까요 ? 에러 나오게 할까요 ?
							 // 에러나게 하세요

	// #2. 상태 출력
	today.print();			// "2024-2-20" 으로 출력되게 하세요

	// #3. setter/getter - year, month, day 에대해서 모두 제공하세요
	today.set_day(23);
	int n = today.get_day(); 
							 
	// #4. 위와 같은 기본 함수외에, 사용자의 입장에서 어떤 멤버 함수가 필요할지
	//     생각해 보세요

	Date d2 = today.after_days(1000); // 1000 일뒤의 날짜를 반환하는 함수
	d2.print(); // 

	Date d3 = today.tomorrow(); // 내일 날짜
	d3.print();

	// 5월이 몇일까지 있는지 알고 싶다
	Date d4(2024, 5, 1);
	int n1 = d5.how_many_days();     // 이렇게 사용하게 하는게 좋으세요 ?
	int n2 = Date::how_many_days(5); // 이게 좋으세요 ? => 이렇게 만드세요
									// 단, 2월을 어떻게 해야할지 생각해보세요
	// 내일날짜             : 기준이되는객체.tomorrow()
	// 5월이 몇일까지인가 ? : 기준일이 없어도 됩니다. 			

	// 윤년인지 알고 싶다.
	// => 아래 2가지 모두 만드세요
	Date d5(2024, 2, 20);

	bool b1 = d5.is_leap_year(); // d5 객체의 년도가 윤년인가 ?
	bool b2 = Date::is_leap_year(2024); // 인자로 연도를 받아서 확인도 가능하게						
}







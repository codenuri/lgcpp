#include <iostream>

class Date
{
private:
	int year;
	int month;
	int day;
	static int days[12]; 
public:	
	Date(int y, int m, int d) : year{y}, month{m}, day{d} 	{ }
	void print() {	std::cout << year << "-" << month << "-" << day << std::endl; }

	void set_year(int y) { year = y;}
	int  get_year()      { return year;}

	bool is_leap_year() 
	{ 
		return (year % 400 == 0) || ( ( year % 4 == 0) && ( year % 100 != 0));
	}
	
	static bool is_leap_year(int year) 
	{ 
		// 아래 코드에서는 year 는 멤버 데이타가 아닌 인자의 year 를 의미 합니다.
		return (year % 400 == 0) || ( ( year % 4 == 0) && ( year % 100 != 0));
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31,30,31};


int main()
{
	Date today(2024, 2, 20);
	today.print();

	bool b1 = today.is_leap_year();     // today 자체가 윤년인가 ?
	bool b2 = Date::is_leap_year(2024); // 객체를 만들필요 없이 특정 연도가 윤년 여부만 알고 싶을때
										// 이렇게 사용하면 편리합니다.
}
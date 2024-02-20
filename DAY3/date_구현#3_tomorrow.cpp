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

	// 아래 처럼 하면 잘못된 구현 입니다.
	/*
	Date tomorrow()
	{
		Date next_day(year, month, day + 1);
		return next_day;		
	}
	*/

	// 아래 주석을 보고 생각해 보세요
	Date tomorrow()
	{
		// 이달의 마지막 날이 언제인지를 구합니다.
		int end_day = days[month - 1];

		// 현재날짜가 2월이고 윤년이면 1을 더해 줍니다. 마지막
		if ( month == 2 && is_leap_year() )
			end_day += 1;	

		if ( day != end_day ) // 월말이 아닌경우
		{
			// 오늘 보다 하루 다음 날짜를 담은 객체를 만들어 반환
			Date next_day(year, month, day + 1);
			return next_day;
		}
		// 월말인 경우.
		// 구현해 보세요..

		return ...;
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31,30,31};

int main()
{
	Date today(2024, 2, 20);
	today.print();

	std::cout << Date::how_many_days(5) << std::endl;		// 31
	std::cout << Date::how_many_days(2) << std::endl;		// 28
	std::cout << Date::how_many_days(2, 2024) << std::endl;	// 29

}
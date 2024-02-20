#include <iostream>


class Date
{
private:
	int year;
	int month;
	int day;

	static int days[12]; 

public:	
	Date(int y, int m, int d) : year{y}, month{m}, day{d} 
	{
	}
	void print()
	{
		std::cout << year << "-" << month << "-" << day << std::endl;
	}

	bool is_leap_year()
	{
		return year % 400 == 0 || ( ( year % 4 == 0) && (year % 100 != 0));
	}


	Date tomorrow()
	{
		// 
		// #1. 현재 월의 마지막 날짜 구하기 month 가 3이면 31일
		int end_day = days[month-1];

		// 현재가 2월이고 올해가 윤년이면
		if ( month == 2 && is_leap_year() )
			end_day += 1;
		//===========================================
		if ( day != end_day )
		{
		 	Date d(year, month, day+1);
			return d;
		}
		//===============================
		// 마지막 날짜 라면
		int newday = 1;
		int newyear = year;
		int newmonth = month + 1;

		if ( newmonth == 13 )
		{
			newmonth = 1;
			newyear += 1;
		}
		Date d(newyear, newmonth, newday);
		return d;
	}
};

int Date::days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31, 30, 31};



int main()
{
//	Date today(2024, 2, 20);
//	Date today(2024, 2, 28);
	Date today(2023, 2, 28);
//	Date today(2024, 2, 29);
	today.print();

	Date d = today.tomorrow();
	d.print(); // 2024-2-29
}
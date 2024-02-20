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
		return (year % 400 == 0) || ( ( year % 4 == 0) && ( year % 100 != 0));
	}

	static int how_many_days(int m, int y = -1)
	{
		if ( m == 2 && y != -1)
		{
			// 2월이고, 사용자가 년도를 보낸 경우
			return days[1] + is_leap_year(y); // 윤년이면 1을 추가
		}
		return days[m-1];
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
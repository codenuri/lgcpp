#include <iostream>

int days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31,30,31};


class Date
{
private:
	int year;
	int month;
	int day;

public:	
	Date(int y, int m, int d) : year{y}, month{m}, day{d} 
	{
	}
	void print()
	{
		std::cout << year << "-" << month << "-" << day << std::endl;
	}
};

int main()
{
	Date today(2024, 2, 20);

	Date d = today.tomorrow();
}
#include <iostream>

class Date
{
private:
	int year;
	int month;
	int day;

public:	
	Date(int y, int m, int d) : year{y}, month{m}, day{d} 
	{
		// 각 값에 대한 유효성을 확인 하려면 이 위치에서 해야 합니다.
	}
	void print()
	{
		std::cout << year << "-" << month << "-" << day << std::endl;
	}
};

int main()
{
	Date today(2024, 2, 20);
	today.print();
}
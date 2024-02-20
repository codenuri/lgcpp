#include <iostream>

// 월별 날짜를 관리하는 배열
// 전역으로 놓고 사용하면 편리하긴 하지만, 안전하지 않습니다. 어디서나 접근 가능
// int days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31, 30, 31};


class Date
{
private:
	int year;
	int month;
	int day;

//	int days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31, 30, 31};

	static int days[12]; // static 멤버의 초기화는 클래스 외부 선언에서 해야 합니다

public:	
	Date(int y, int m, int d) : year{y}, month{m}, day{d} 
	{
	}
	void print()
	{
		std::cout << year << "-" << month << "-" << day << std::endl;
	}

	Date tomorrow()
	{
		Date d(year, month, day+1);
		return d;
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31, 30, 31};



int main()
{
	Date today(2024, 2, 20);
	today.print();

	Date d = today.tomorrow();
	d.print(); // 2024-2-21
}
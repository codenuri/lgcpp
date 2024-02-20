#include <iostream>

// 아래 코드에서 "days 배열" 을 static 멤버 데이타로 관리하는 이유를 잘 생각해보세요

class Date
{
private:
	int year;
	int month;
	int day;

	static int days[12]; // 이부분이 핵심. 왜 static 이어야 하는가 ?? 를 이해해야 합니다.
public:	
	Date(int y, int m, int d) : year{y}, month{m}, day{d} 	{ }
	void print() {	std::cout << year << "-" << month << "-" << day << std::endl; }

	void set_year(int y) { year = y;}
	int  get_year()      { return year;}

};
int Date::days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31,30,31};


int main()
{
	Date today(2024, 2, 20);
	today.print();
}
#include <iostream>

class Time 
{
	int hour, minute, second;
public:
	Time(int h, int m, int s) : hour{h}, minute{m}, second{s} {}

	void print()
	{
		std::cout << hour << " : " << minute << " : " << second << std::endl;
	}
};
int main()
{
	Time t(18, 20, 20);
	t.print();
}
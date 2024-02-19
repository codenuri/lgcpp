// 67page
#include <iostream>

// 사각형의 면적을 구하고, 사각형을 화면에 그리는 함수를 생각해 봅시다

int get_rect_area(int left, int top, int right, int bottom)
{
	return (right - left) * (bottom - top);
}

void draw_rect(int left, int top, int right, int bottom)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	int n1 = get_rect_area(1, 1, 10, 10);
	draw_rect(1, 1, 10, 10);
}
void draw_line(int x1, int x2, int y1, int y2) {}

int main()
{
	// 0,0 ~ 3,3 에 선을 그리고 싶다.

	// 방법 1. 변수를 만들어서 전달
	int x1 = 0, y1 = 0;
	int x2 = 3, y2 = 3;

	draw_line(x1, y1, x2, y2);

	// 방법 2. 값만 전달
	draw_line(0, 0, 3, 3);
}
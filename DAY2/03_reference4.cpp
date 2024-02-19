// call by value : 인자로 사용한 변수의 값을 변경할수 없다.!!
void foo(int n)
{
	n = 20;
}
int main()
{
	int x = 100;
	foo(x);
}

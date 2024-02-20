class Point 
{
	int x = 0;
	int y = 0;
public:
	Point() {}
	Point(int a) : x{a} {}
};

//Point pt;
//=================
// 위코드를 아래 처럼 변경
class Point 
{
	int x;// = 0;
	int y;// = 0;
public:
	Point() :x{0}, y{0} {}
	Point(int a) : x{a}, y{0} {}
};

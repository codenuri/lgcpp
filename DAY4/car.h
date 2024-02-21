// Car.h
class Car
{
	int color = 0;
	static int cnt;
public:	
	Car();
	~Car();
	void set_color(int c);
	static int get_count();
};

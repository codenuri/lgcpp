#include <iostream>
#include <cstring>

class vector
{
private:
	int* ptr;
	int  sz;	

public:
	vector(int s, int value)
	{
		sz = s;
		ptr = new int[sz];

		for( int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~vector() { delete[] ptr;}

	int size() { return sz;}

	void resize(int newsize)
	{
		if ( newsize > sz ) 
		{
			int* tmp = new int[newsize];	
			memcpy(tmp, ptr, sizeof(int) * sz);
			delete[] ptr;
			ptr = tmp;
			sz = newsize;
		}
		else 
		{
		}
	}
};

int main()
{
	vector v(4, 0); 

	// v에 값 보관하기

	// 방법 #1
	v.set_at(0, 10);
	v.set_at(1, 20);
	int n = v.get_at(1); // 20

	// 방법 #2.
	v.at(0) = 10;
	v.at(1) = 20;

	int n2 = v.at(1);


	// 방법 #2 가 편리해 보입니다.
	// => 구현은 다음소스에서..
	// => 복습할때 방법 #1 으로도 만들어 보세요.

}
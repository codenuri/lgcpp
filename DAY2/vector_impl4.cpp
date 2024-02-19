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
		if ( newsize > sz ) // 커지는 경우
		{
			int* tmp = new int[newsize];	

			// 작은 버퍼내용 => 새로운 버퍼에 복사
			memcpy(tmp, ptr, sizeof(int) * sz);

			delete[] ptr;
			ptr = tmp;
			sz = newsize;
		}
		else 
		{
			// 작아지는 경우의 구현에 대해서 생각해 보세요
		}
	}
};

int main()
{
	vector v(4, 0); 

	v.resize(8);    

	std::cout << v.size() << std::endl; 
}
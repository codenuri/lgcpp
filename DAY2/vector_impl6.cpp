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

	// 아래처럼 값 반환을 사용하면 "v.at(1) = 10" 이 될수 없습니다
//	int at(int idx) { return ptr[idx]; }

	// 아래 처럼 참조 반환하면 "v.at(1) = 10" 이 가능합니다.
	// reference6.cpp 참고하세요
	int& at(int idx) { return ptr[idx]; }
};

int main()
{
	vector v(4, 0); 
	
	v.at(0) = 10; // v.ptr[0] = 10
	v.at(1) = 20;

	int n2 = v.at(1);
}
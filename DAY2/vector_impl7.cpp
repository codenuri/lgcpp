#include <iostream>
#include <cstring>

// 함수뿐 아니라 클래스(구조체)도 템플릿으로 할수 있습니다.
template<typename T>
class vector
{
private:
	T* ptr;
	int  sz;	

public:
	vector(int s, T value)
	{
		sz = s;
		ptr = new T[sz];

		for( int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~vector() { delete[] ptr;}

	int size() { return sz;}

	void resize(int newsize)
	{
		if ( newsize > sz ) 
		{
			T* tmp = new T[newsize];	

			memcpy(tmp, ptr, sizeof(T) * sz);
			delete[] ptr;
			ptr = tmp;
			sz = newsize;
		}
		else 
		{
		}
	}

	T& at(int idx) { return ptr[idx]; }
};

int main()
{
	// 함수 템플릿은 "타입생략"해도 함수 인자로 추론되지만
	// 클래스 템플릿은 타입을 반드시 전달해야 합니다.
	vector<int> v(4, 0); 
	vector<double> v2(4, 1.1); 
	
	v.at(0) = 10; 

	int n2 = v.at(1);
}
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

	// sz 는 외부에서 변경하면 안되지만, 읽을수는 있어야 합니다.
	// private 에 있으므로, 멤버 함수를 통해서만 꺼낼수 있습니다.
	int size() { return sz;}
};

int main()
{
	vector v(4, 0); 

//	v.resize(8);    

	std::cout << v.size() << std::endl; // 4
}
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

	// 클래스의 생성자에서 동적 메모리를 할당한 경우
	// 소멸자에서 삭제 하는 것이 관례 입니다.
	~vector() { delete[] ptr;}
};
int main()
{
	vector v(4, 0); // 핵심 : 이순간의 메모리를 그릴수 있어야 합니다.
					//       복습하실때, 꼭 메모리 그림을 그려 보세요

//	v.resize(8);    
//	std::cout << v.size() << std::endl; 
}
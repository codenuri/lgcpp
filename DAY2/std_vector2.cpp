
#include <iostream>

#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <string> 

int main()
{
	std::vetor<int> v; // 크기가 0인 vector(아직 동적메모리 할당 안됨)

//	v[0] = 10; // runtime error. 아직 버퍼 할당 안된 상태

	v.push_back(3); // 끝에 한개(3) 추가. 이순간 자동으로 버퍼 크기 증가
	v.push_back(4);

	std::cout << v.size() << std::endl; // 2

}
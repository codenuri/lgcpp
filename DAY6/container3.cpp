#include <iostream>
#include <stack>
#include <queue>

int main()
{
	// stack, queue  있습니다.
	std::stack<int> s;
	std::queue<int> q;

	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl; // 20
	std::cout << s.top() << std::endl; // 20

	s.pop(); // 제거만
	std::cout << s.top() << std::endl; // 10

	q.push(10);
	q.push(20);

	std::cout << q.front() << std::endl; // 10
	q.pop();
	std::cout << q.front() << std::endl; // 20
}
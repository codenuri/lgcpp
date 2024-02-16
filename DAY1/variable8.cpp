// structural binding declaration
// 31 page

struct Point
{
	int x, y;
};
int main()
{
	Point pt = { 1,2 };

	// 구조체 안에 N개의 멤버가 있을때 모든 요소를 다른 변수에 담으려면
	// N개의 문장을 작성해야 합니다.
//	int x = pt.x;
//	int y = pt.y;

	// C++17 부터 아래 처럼 한줄로 가능합니다.
	auto [x, y] = pt; // 위 코드와 완전히 동일
					  // 위 코드를 주석으로 막지 않으면 에러.

	// 배열도 됩니다.
	int arr[3] = {1,2,3};

	auto[a1, a2, a3] = arr;

	// 주의 사항 : auto 만되고, 갯수가 같아야 합니다
//	int [b1, b2] = pt; // error. auto 아님
//	auto [b1, b2, b3] = pt; // error. 갯수 다름.
}

// g++ variable8.cpp -std=c++17
#include <iostream>

// 핵심 : 함수가 실패를 하면 "예외 를 던집니다(throw)"
// => 호출자가 발생된 예외를 처리하지 않으면 프로그램은 비정상 종료 됩니다.

int db_backup()
{
	if (1)		// 실패라고 가정
		throw 1;

	return 100;
}

void db_remove() { std::cout << "db remove\n";}

int main()
{
	int ret = db_backup();

//	if (ret == -1) {} 

	db_remove();
}

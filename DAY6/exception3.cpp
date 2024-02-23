#include <iostream>

// 함수가 예외를 던질때
// => 프로그램이 계속 실행되려면 던져진 예외를 잡아서
//    오류 처리를 해야 합니다.
// => try, catch 사용

int db_backup()
{
	if (1)		
		throw 1;

	return 100;
}

void db_remove() { std::cout << "db remove\n";}

int main()
{
	// 예외 가능성이 있는 함수 호출시에는 try 블럭안에서 해야 합니다.
	try 
	{
		int ret = db_backup();
	}
	catch( int e )
	{
		std::cout << "예외 발생\n";	
		std::cout << "예외 잡은 경우 프로그램은 계속 실행가능\n";

		// 오류에 대한 원인 파악후, 다시 시도해서 문제가 없을때만 계속 실행해야 합니다.
		// 오류 해결이 안되면, 사용자에게 알려주고, 프로그램을 종료하는 것이 좋습니다.
		// std::exit(-1);
	}

	db_remove();
}

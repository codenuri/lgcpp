#include <iostream>
#include <string>

// 함수는 한가지가 아닌 다양한 이유로 실패 합니다
// 호출자에게는 되도록이면 실패의 이유를 자세히 알려야 합니다.

// 오류의 원인을 타입으로 설계 합니다.
class file_not_found_exception
{
public:
	std::string file_name;

	file_not_found_exception( const std::string& s) : file_name{s} {}

	// 그외에 오류에 대한 자세한 정보를 제공하기 위한 멤버들..
};

// 아무 멤버도 없는 클래스를 만들어도 좋습니다. 클래스 이름이 설명!!
class disconnect_network_exception {};






int db_backup()
{
	if (1)		
		throw file_not_found_exception("backup.txt");

	if (2)
		throw disconnect_network_exception();	// 임시객체형태로 전달

	return 100;
}

void db_remove() { std::cout << "db remove\n";}

int main()
{
	try 
	{
		int ret = db_backup();
	}
	catch( const file_not_found_exception& e )
	{
		std::cout << "예외 발생\n";	
		std::cout << "예외 잡은 경우 프로그램은 계속 실행가능\n";
	}
	catch( const disconnect_network_exception& e )
	{
	}
	catch(...)
	{
		// 위에서 잡히지 않은 모든 예외 처리
	}
	// 참고 : 임시객체를 const reference 로 받을수 있습니다.
	//		  이경우, 임시객체 즉시 파괴되지 않고, reference 가 사라질때 까지
	//		  사용가능( life-time extention 이라는 개념)

	db_remove();
}

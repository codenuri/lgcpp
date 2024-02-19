// init control statement
// 45page

int foo() { return 10;}

int main()
{
	int ret = foo();

	if ( ret == 10 )
	{
	}

	// C++17 부터 제공되는 새로운 if 문
	// => 아래 코드가 위와 동일한 의미의 코드입니다.
	if ( int ret2 = foo(); ret2 == 10 )
	{

	} // <= ret2 는 여기서 파괴.!

	// switch 도 가능
	switch( int n = foo(); n)
	{
		case 1: break;
		case 2: break;
	}
}


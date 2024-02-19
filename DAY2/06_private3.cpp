// C++ 스타일
class Person
{
private:				// 접근 지정자 표기후에	
	std::string name;	// 새로운 접근지정자가 나올때 까지 모두 동일하게 적용
	int  age;

public:
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}

public:

};




// C#, java : 모든 멤버에 별도로 private, public 표기
class Person
{
	private std::string name;
	private int  age;

	public void set_age(int a)
	{
			if (a > 0 && a < 150)
				age = a;
	}
};
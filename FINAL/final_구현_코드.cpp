#include <iostream>
#include <string>
#include <vector>
#include "utils.h" 

// 메뉴의 ID 로 사용할 상수 정의
constexpr int id_view_normal = 11;
constexpr int id_view_name   = 12;
constexpr int id_view_year   = 13;

constexpr int id_add_people  = 21;

constexpr int id_search_id   = 31;
constexpr int id_search_name = 32;
constexpr int id_search_advance1 = 33;
constexpr int id_search_advance2 = 34;

constexpr int id_remove = 41;
//------------------------------------------------------

struct People 
{
	std::string name;
	std::string id;
	int year1;	
	int year2;	

	People( const std::string& name, const std::string& id, int y1, int y2)
		: name{name}, id{id}, year1{y1}, year2{y2} 
	{
	}

	void print() const 
	{
		std::cout << name << "(" << id << ", " << current_year() - year1 
									   << ", " << year2 << ")\n";
	}
};

//--------------------------------------------------------------------
// test 데이타
std::vector<People*> v = { new People{"park", "11111", 2004, 2024},
						   new People{"lee1", "33333", 1980, 2007},
						   new People{"choi", "22444", 1970, 1999},
						   new People{"lee2", "44444", 1974, 2001},
						   new People{"aa444", "55555", 1978, 2003},
						   new People{"444cc", "66667", 1980, 2011} };


// 1. 모든 사원 보기(PopupMenu)
//    1-1. 기본 사원 보기 - v 에 있는 모든 요소를 출력 		
//    1-2. [심화] 이름순으로 출력 ( 이름 순으로 정렬후 출력)		
//    1-3. [심화] 입사년도 순으로 출력 ( 입사년도로 정렬후 출력)

// 핵심 : 한개의 함수에서 3개의 기능을 모두 구현했습니다.
//        인자로 전달된 메뉴id 에 따라서, 먼저 데이타를 정렬한후에 출력 합니다.
void show(int menuid)
{
	// 이름순 또는 년도순으로 보기를 선택한 경우. 먼저 데이타를 정렬
	if ( menuid == id_view_name)
	{
		std::sort(v.begin(), v.end(), 
				[](const People* p1, const People* p2) { return p1->name < p2->name;});
	}
	else if (menuid == id_view_year)
	{
		std::sort(v.begin(), v.end(), 
				[](const People* p1, const People* p2) { return p1->year2 < p2->year2 ;});
	}
	// 실제 출력은 간단합니다.
	for( auto e : v)
	{
		e->print();
	}
}


// 2. 사원 추가(MenuItem)
// => 이름, 사번, 태어난년도, 입사년도를 입력 받아서  People 객체 생성후 v 추가
// => [심화] ID 는 고유값이 어야 합니다. 동일한 ID 가 있으면 다시 입력 받게 해보세요
void add(int menuid)
{
	// #1. 먼저 ID 를 입력 받고, 동일ID가 존재 하는지를 확인 합니다.
	//     동일 ID 가 존재하면 다시 입력 받도록 합니다.
	std::string id;

	while( 1 )
	{
		std::cout << "사번 >> ";
		std::cin >> id;

		// 입력된 ID 가 기존에 있는지 검색
		auto ret = std::find_if( v.begin(), v.end(), [id](const People* p) { return id == p->id; } );

		if ( ret == v.end() ) break; //	검색에 실패 한경우, 동일 ID 가 없다는 의미 이므로. 사원 추가작업 계속 진행

		std::cout << "등록된 ID 입니다. 다시 입력해 주세요 \n";
	}
	//======================================================================
	// #2. 이제 나머지 데이타를 입력 받아서 추가 합니다.
	std::string name;
	int year1, year2;

	std::cout << "이름 >> ";
	std::cin >> name;

	std::cout << "태어난 년도 >> ";
//	std::cin >> year1;
	input_integer(year1);

	std::cout << "입사 년도 >> ";
//	std::cin >> year2;
	input_integer(year2);

	v.push_back( new People{name, id, year1, year2} );

	std::cout << name << "님이 추가되었습니다.\n";
}

// 3. 사원 검색(PopupMenu)
//    3-1. ID 로 검색후 - 세부 정보 출력해 주세요.
void search_id(int menuid) 
{
	std::string id;
	
	std::cout << "검색할 사번(ID) >> ";
	std::cin >> id;

	// ID 는 고유하므로 2명이 존재 할수는 없습니다.
	auto ret = std::find_if( v.begin(), v.end(), [id](const People* p) { return p->id == id;} );

	(*ret)->print();
}

// 3-2. [심화] 이름으로 검색. 부분적으로 일치하는 것도 확인 - "길동" 입력시, 이름에 "길동"이 포함된 모든 사람 출력
void search_name(int menuid) 
{
	std::string name;
	
	std::cout << "검색할 이름 >> ";
	std::cin >> name;

	// 람다 표현식 : 컴파일러가 만드는 함수 객체에 대한 임시 객체 입니다.
	//				아래 처럼 auto 변수에 담아서 사용해도 됩니다.
	auto search = [name](const People* p) 
					{ 	
						auto ret = std::search( p->name.begin(), p->name.end(), name.begin(), name.end());
						return ret != p->name.end();
					};		

	auto ret = v.begin();

	while( ret != v.end() )
	{					
		ret = std::find_if( ret, v.end(), search );

		if ( ret == v.end() ) break; // 검색 실패

		(*ret)->print();

		++ret;
	}
}

// 3-3. [심화 ] 조건 검색
//      3-3-1. 입사 10년차 이상인 모든 사원 출력
//      3-3-2. 나이가 50 이상인 모든 사원 출력검색
void search_advance(int menuid) 
{
	// 캡쳐하지 않은 람다표현식을 함수 포인터에 담을수 있다는 문법이 있습니다.
	bool(*search)(const People*);

	// 선택한 메뉴가 어떤 메뉴 인지에 따라 조건식으로 사용할 람다 표현식을 작성 합니다.
	if ( menuid == id_search_advance1) 
	{
		search = [](const People* p) { return (current_year() - p->year2) >= 10; };		
	}
	else if ( menuid == id_search_advance2 )
	{
		search = [](const People* p) { return (current_year() - p->year1) >= 50; };		
	}

	auto ret = v.begin();
	while( ret != v.end() )
	{					
		ret = std::find_if( ret, v.end(), search );

		if ( ret == v.end() ) break; 
		(*ret)->print();
		++ret;
	}
}


// 4. [심화] 사원 제거 (MenuIem)
// 원리
// 1. tmp_vector 를 만든후, 조건을 만족하는 People 객체의 주소만 tmp 에 옮겨 담습니다.
// 2. tmp_vector 의 모든 내용을 보여 주고, 사용자에게 선택하게 합니다.
// 3. 선택된 사원을 제거하는데 아래 처럼해야 합니다.
//    People 자체도 new 로 만들었으므로 People 자체를 delete 합니다.
//    vector v 에 있는 항목을 제거합니다.
//    tmp_vector 는 지역변수 이므로 remove 함수 호출 종료시 자동 파괴 됩니다.

void remove(int menuid)
{
	std::string value;

	std::cout << "ID 또는 이름을 넣어 주세요 >> ";
	std::cin >> value;

	// #1. 검색에 사용할 람다 표현식 작성
	// => 람다 표현식을 auto 변수에 담아 두었다가 사용해도 됩니다.
	// => 이름 및 나이에서 value 검색
	auto search = [value](const People* p) 
					{ 							
						// ID 에서 먼저 검색후, value 를 포함하는 것이 있으면 true 반환
						auto ret1 = std::search( p->id.begin(), p->id.end(), value.begin(), value.end());

						if ( ret1 != p->id.end() ) return true;

						// name 에서 value 검색 
						auto ret2 = std::search( p->name.begin(), p->name.end(), value.begin(), value.end());
						
						return ret2 != p->name.end();
					};		


	// #2. 조건에 맞는 사람의 주소를 보관할 vector 를 만듭니다.
	std::vector<People*> tmp_vector;

	// #3. 조건에 맞는 사람을 찾아서 tmp_vector 에 보관(People의 주소 보관) 합니다.
	auto ret = v.begin();

	while( ret != v.end() )
	{					
		ret = std::find_if( ret, v.end(), search );
		if ( ret == v.end() ) break; // 검색 실패
		tmp_vector.push_back(*ret);

		++ret;
	}
	// #4. id_vector 의 내용을 보여주고 삭제할 사람을 선택하게 합니다.
	for( int i = 0; i < tmp_vector.size(); i++)
	{
		std::cout << i + 1 << ". "; 
		tmp_vector[i]->print();
	}
	std::cout << "삭제할 사원을 선택 주세요 >> ";
	int idx;
	std::cin >> idx;

	// #5. 사원 삭제.
	// => 주의, 삭제 자체는 tmp_vector 아닌 
	//    v vector 에서 삭제 해야 합니다.
	auto pos = std::find(v.begin(), v.end(), tmp_vector[idx-1]);

	delete (*pos); // People 객체 자체를 먼저 삭제 하고
	v.erase(pos);  // vector 에서 제거.
}


int main()
{
	PopupMenu* root = new PopupMenu("ROOT");
	PopupMenu* view = new PopupMenu("사원 보기");
	
	root->add(view);

	view->add( new MenuItem("사원 보기", 				id_view_normal, show));
	view->add( new MenuItem("이름 순으로 보기", 		id_view_name, show));
	view->add( new MenuItem("입사년도 순으로 사원 보기", id_view_year, show));

	root->add( new MenuItem("사원 추가", id_add_people, add));

	PopupMenu* search = new PopupMenu("사원 검색");
	PopupMenu* advance_search = new PopupMenu("고급 검색");
	root->add( search );

	search->add( new MenuItem("ID로 검색", id_search_id, search_id));
	search->add( new MenuItem("이름 으로 검색", id_search_name, search_name));
	search->add( advance_search );
	advance_search->add( new MenuItem("입사 10년차 이상 명단", id_search_advance1, search_advance));
	advance_search->add( new MenuItem("나이가 50세 이상 명단", id_search_advance2, search_advance));

	
	root->add( new MenuItem("사원 삭제", id_remove, remove));
	
	root->command();

	delete root;
}

// 복습 하실때 아래 기능도 구현해 보세요
// 5. 사원 정보 수정
// 6. 입사년도만 관리하지 말고, Date 를 사용해서 "년,월,일" 을 모두 관리하면서
// 7. 이번달에 생일이 있는 사람을 출력하는 기능
// 8. v 에 있는 모든 데이타를 "파일에 저장/복구" 하는 기능등..
// 9. People 의 각 멤버를 private 에 놓고, 유효성을 확인하는 코드도 추가해 보세요

// 틈틈히 C/C++ 을 복습하시면서, 완벽한 프로그램으로 발전 시켜 보세요
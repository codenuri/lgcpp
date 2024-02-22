// People.h 
#include <string>

class People
{
public:
	std::string name;
    int age;

	People(const std::string& name, int age) : name{name}, age{age} {}
};
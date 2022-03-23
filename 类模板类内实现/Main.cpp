#include <string>
#include "Person.cpp"


int main()
{
	Person<std::string, int> person("Jerry", 23);
	person.show();

	return 0;
}
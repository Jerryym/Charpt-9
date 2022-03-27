#include <string>
#include "Person.hpp"

int main()
{
	Person<std::string, int> person("Jerry", 24);
	person.show();

	return 0;
}
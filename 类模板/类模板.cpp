#include <iostream>

template<class T>
class Person
{
public:
	Person(T id, T age)
	{
		this->m_Id = id;
		this->m_Age = age;
	}
	
	void show()
	{
		std::cout << "ID: " << m_Id << " Age: " << m_Age << std::endl;
	}

private:
	T m_Id;
	T m_Age;
};

int main()
{
	//函数模板在调用的时候，可以自动类型推导
	//类模板必须显式指定类型
	Person<int> person(10, 20);
	person.show();

	return 0;
}
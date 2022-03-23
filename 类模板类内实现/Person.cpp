#include <iostream>

template<class T1, class T2>
class Person
{
public:
	Person();
	Person(T1 Name, T2 Age)
	{
		this->m_Name = Name;
		this->m_Age = Age;
	}
	~Person()
	{

	}

	void show()
	{
		std::cout << "Name:" << this->m_Name << " Age: " << this->m_Age << std::endl;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

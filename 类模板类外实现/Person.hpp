#pragma once
#include <iostream>

template<class T1, class T2>
class Person
{
public:
	Person();
	Person(T1 Name, T2 Age);
	~Person();
	void show();

private:
	T1 m_Name;
	T2 m_Age;
};

template<class T1, class T2>
Person<T1, T2>::Person()
{
	this->m_Age = 0;
}

template<class T1, class T2>
Person<T1, T2>::Person(T1 Name, T2 Age)
{
	this->m_Name = Name;
	this->m_Age = Age;
}

template<class T1, class T2>
Person<T1, T2>::~Person()
{
}

template<class T1, class T2>
void Person<T1, T2>::show()
{
	std::cout << "Name:" << this->m_Name << " Age: " << this->m_Age << std::endl;
}
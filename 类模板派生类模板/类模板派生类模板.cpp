#include <iostream>

template<class T>
class Animal
{
public:
	void setAge(T Age)
	{
		this->m_Age = Age;
	}
	void Call()
	{
		std::cout << m_Age << "Ëê¶¯ÎïÔÚ½Ð!" << std::endl;
	}
private:
	T m_Age;
};

template<class T>
class Cat : public Animal<T>
{
public :
	Cat()
	{
	}
};

int main()
{
	Cat<int>cat;
	cat.setAge(7);
	cat.Call();
	return 0;
}
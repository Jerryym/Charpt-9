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
	//����ģ���ڵ��õ�ʱ�򣬿����Զ������Ƶ�
	//��ģ�������ʽָ������
	Person<int> person(10, 20);
	person.show();

	return 0;
}
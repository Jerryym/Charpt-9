#include <iostream>

//��ģ��
template<class T>
class Person
{
public:
	Person()
	{
		m_Age = 0;
	}
	
private:
	T m_Age;
};

//��ģ��������ͨ��ʱ����Ҫ���廯ģ����
//   -->ԭ��Ҫ֪��������ռ���ڴ��С�Ƕ��� ֻ���������͹̶�����,��֪����η����ڴ�
class SubPerson:public Person<int>
{

};

int main()
{
	return 0;
}
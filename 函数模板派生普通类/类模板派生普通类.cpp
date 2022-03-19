#include <iostream>

//类模板
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

//类模板派生普通类时，需要具体化模板类
//   -->原因：要知道父类所占的内存大小是多少 只有数据类型固定下来,才知道如何分配内存
class SubPerson:public Person<int>
{

};

int main()
{
	return 0;
}
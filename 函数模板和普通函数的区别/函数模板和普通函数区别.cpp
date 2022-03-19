/*
函数模板不允许自动类型转换
普通函数能够自动进行类型转换
*/

#include <iostream>

//函数模板必须严格类型匹配
template<class T>
int MyAdd(T a, T b)
{
	return a + b;
}

//普通函数能够自动进行类型转换
int MyAdd(int a, char c)
{
	return a + c;
}

int main()
{
	int a = 10;
	int b = 20;
	char c1 = 'a';
	char c2 = 'b';

	MyAdd(a, c1);//调用 int MyAdd(int a, char c)
	MyAdd(a, b); //调用函数模板
	MyAdd(c1, b);//调用函数模板

	return 0;
}
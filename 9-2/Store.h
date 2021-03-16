/*
类模板
被多个源文件引用的函数模板，应当连同函数体一同放在头文件中，而不能像普通函数一样只将声明放在头文件中
*/
#pragma once
#ifndef Store_h
#define Store_h

#include<iostream>
using namespace std;

template<class T>//类模板
class Store
{
public:
	Store();//构造函数
	T &get_elem();//获取数据
	void save_elem(const T &x);//存储数据

private:
	T item;//任意类型的数据
	bool have_value;//判断item是否已经被存入内容
};

#endif // !Store_h

template<class T>
inline Store<T>::Store():have_value(false)
{
}

template<class T>
T & Store<T>::get_elem()
{
	if (!have_value)//如果试图获得未初始化的数据，则终止程序
	{
		cout << "No item present!" << endl;
		exit(1);//退出
	}
	return item;
}

template<class T>
void Store<T>::save_elem(const T & x)
{
	have_value = true;
	item = x;
}
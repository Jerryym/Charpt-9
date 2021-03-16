/*
��ģ��
�����Դ�ļ����õĺ���ģ�壬Ӧ����ͬ������һͬ����ͷ�ļ��У�����������ͨ����һ��ֻ����������ͷ�ļ���
*/
#pragma once
#ifndef Store_h
#define Store_h

#include<iostream>
using namespace std;

template<class T>//��ģ��
class Store
{
public:
	Store();//���캯��
	T &get_elem();//��ȡ����
	void save_elem(const T &x);//�洢����

private:
	T item;//�������͵�����
	bool have_value;//�ж�item�Ƿ��Ѿ�����������
};

#endif // !Store_h

template<class T>
inline Store<T>::Store():have_value(false)
{
}

template<class T>
T & Store<T>::get_elem()
{
	if (!have_value)//�����ͼ���δ��ʼ�������ݣ�����ֹ����
	{
		cout << "No item present!" << endl;
		exit(1);//�˳�
	}
	return item;
}

template<class T>
void Store<T>::save_elem(const T & x)
{
	have_value = true;
	item = x;
}
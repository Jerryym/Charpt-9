/*
����ģ�岻�����Զ�����ת��
��ͨ�����ܹ��Զ���������ת��
*/

#include <iostream>

//����ģ������ϸ�����ƥ��
template<class T>
int MyAdd(T a, T b)
{
	return a + b;
}

//��ͨ�����ܹ��Զ���������ת��
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

	MyAdd(a, c1);//���� int MyAdd(int a, char c)
	MyAdd(a, b); //���ú���ģ��
	MyAdd(c1, b);//���ú���ģ��

	return 0;
}
#include<iostream>
#include"Student.h"
#include"Store.h"
using namespace std;

int main(void)
{
	Store<int>s1, s2;//��������Store<int>������������ݳ�ԱitemΪint����
	s1.save_elem(3);//�����s1�д�������
	s2.save_elem(-1);//�����s2�д�������
	cout << s1.get_elem() << " " << s2.get_elem() << endl;

	Student stu = { 1000,23 };
	Store<Student>s3;//����һ��Store<Student>������������ݳ�ԱitemΪStudent����
	s3.save_elem(stu);//�����s3�д�������
	cout << "The student id is " << s3.get_elem().id << endl;

	return 0;
}
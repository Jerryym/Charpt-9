#include<iostream>
#include"Student.h"
#include"Store.h"
using namespace std;

int main(void)
{
	Store<int>s1, s2;//定义两个Store<int>类对象，其中数据成员item为int类型
	s1.save_elem(3);//向对象s1中存入数据
	s2.save_elem(-1);//向对象s2中存入数据
	cout << s1.get_elem() << " " << s2.get_elem() << endl;

	Student stu = { 1000,23 };
	Store<Student>s3;//定义一个Store<Student>类对象，其中数据成员item为Student类型
	s3.save_elem(stu);//向对象s3中存入数据
	cout << "The student id is " << s3.get_elem().id << endl;

	return 0;
}
#include<iostream>
using namespace std;

template<class T>//定义函数模板
void output_array(const T * array, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main(void)
{
	const int A_count = 8, B_count = 8, C_count = 20;
	int a[A_count] = { 1,2,3,4,5,6,7,8 };
	double b[B_count] = { 1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8 };
	char c[C_count] = "Welcome to see you!";

	cout << "a array contains: " << endl;
	output_array(a, A_count);//调用函数模板
	cout << "b array contains: " << endl;
	output_array(b, B_count);//调用函数模板
	cout << "c array contains: " << endl;
	output_array(c, C_count);//调用函数模板

	return 0;
}
#include <iostream>

//ģ�壺���Ͳ�����, ��д������Ժ�����������
template<class T> //template<typename T>
void MySwap(T& a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	//�Զ������Ƶ�
	int a = 10;
	int b = 20;
	std::cout << "�Զ������Ƶ�:" << std::endl;
	std::cout << "a: " << a << " b: " << b << std::endl;
	MySwap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;

	double ra = 1.5;
	double rb = 1.8;
	std::cout << "ra: " << ra << " rb: " << rb << std::endl;
	MySwap(ra, rb);
	std::cout << "ra: " << ra << " rb: " << rb << std::endl;

	//��ʽָ������
	std::cout << "��ʽָ������:" << std::endl;
	std::cout << "a: " << a << " b: " << b << std::endl;
	MySwap<int>(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;

	return 0;
}
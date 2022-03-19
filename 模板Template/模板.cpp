#include <iostream>

//模板：类型参数化, 编写代码可以忽略数据类型
template<class T> //template<typename T>
void MySwap(T& a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	//自动类型推导
	int a = 10;
	int b = 20;
	std::cout << "自动类型推导:" << std::endl;
	std::cout << "a: " << a << " b: " << b << std::endl;
	MySwap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;

	double ra = 1.5;
	double rb = 1.8;
	std::cout << "ra: " << ra << " rb: " << rb << std::endl;
	MySwap(ra, rb);
	std::cout << "ra: " << ra << " rb: " << rb << std::endl;

	//显式指定类型
	std::cout << "显式指定类型:" << std::endl;
	std::cout << "a: " << a << " b: " << b << std::endl;
	MySwap<int>(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;

	return 0;
}
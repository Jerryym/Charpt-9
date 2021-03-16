#include<iostream>
using namespace std;
template<typename T>

T abs(T x)
{
	return x < 0 ? -x : x;
}

int main(void)
{
	int a = -5;
	double b = -11.5;
	cout << abs(a) << endl;
	cout << abs(b) << endl;
	return 0;
}
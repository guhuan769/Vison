
#include <iostream>
using namespace std;
int main()
{
	//#include <Windows.h>
	//SetConsoleOutputCP(CP_UTF8);
	//局部变量声明
	int a = 100;
	
	cout << "改变前. a 的值:" << a << endl;
	//指针变量只能存储地址
	int* p;//指针
	p  = &a;
	//修改指针p所有指向的内存空间中存储的值
	*p = 300;
	
	cout << "改变后，a的值:" << a << ' ' << p << ' ' << &(*p) << '|' << &a << endl;
	return 0;
}
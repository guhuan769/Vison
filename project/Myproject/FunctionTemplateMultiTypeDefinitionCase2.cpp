#include "FunctionTemplateMultiTypeDefinitionCase2.h"

#include <iostream>
using namespace std;

FunctionTemplateMultiTypeDefinitionCase2::FunctionTemplateMultiTypeDefinitionCase2() 
{

}

// template 关键字告诉C++ 编译器 要开始泛型编程了
// T - 参数化数据类型
template <typename T, typename T2>
T Max(T a, T2 b) {
	return  a > b ? a : b;
};

void FunctionTemplateMultiTypeDefinitionCase2::Show()
{
	{
		int n = 6;
		int m = 9;

		//cout << Max(n, m) << endl;

		system("pause");
	}

	// 案例3 
	{
		int n = 6;
		int m = 9;
		char a = 'c'; // 'c' 对应的ascll码值是 99

		cout << "Max<int,char>(m,a);" << Max<int, char>(m, a) << endl;// 显式类型
		cout << "Max(m,a):" << Max(m, a) << endl; // 自动数据类型推导
		cout << "Max(a,m): " << Max(a, m) << endl; // 自动数据类型推导


	}

}
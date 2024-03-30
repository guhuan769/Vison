#include "TemplateMatching.h"

#include <iostream>
using namespace std;

TemplateMatching::TemplateMatching() {}


// 函数模板的匹配原则
// 一、一个非模板函数可以和一个同名的函数模板同时存在，而且该函数模板还可以
//被实例化为这个非模板函数

#pragma region 二
int Add(const int& x, const int& y)
{
	cout << "调用具体函数" << endl;
	return x + y;
};

// 通用类型假发的函数模板
template<typename T>
T Add(const T& x, const T& y)
{
	cout << "调用模板函数" << endl;
	return x + y;
};
#pragma endregion

#pragma region 三
template<typename T>
T Add3(const T& x, const T& y)
{
	cout << "三、 调用模板函数" << endl;
	return x + y;
}
#pragma endregion


void TemplateMatching::Show() 
{
	cout << endl;
	cout << "=================================" << endl;
	cout << "=================================" << endl;
	cout << "=================================" << endl;
	cout << "三、模板函数不允许自动类型转换，但普通函数可以进行自动类型转换" << endl;
	{
		int a = 10, b = 20;
		int c = Add(a, b); // 调用非模板函数，编译器不需要实例化
		// 如果 函数 显示了 指定类型 那么就会走模板函数
		int d = Add<int>(a, b);// 调用编译器实例化的Add函数
	}

	cout << endl;
	cout << "=================================" << endl;
	cout << "=================================" << endl;
	cout << "=================================" << endl;
	cout << "三、模板函数不允许自动类型转换，但普通函数可以进行自动类型转换" << endl;

	// 三、模板函数不允许自动类型转换，但普通函数可以进行自动类型转换

	{
		int a = Add3(2.2, 4.3); // 模板函数不允许自动类型转换，不能通过编译

	}


}
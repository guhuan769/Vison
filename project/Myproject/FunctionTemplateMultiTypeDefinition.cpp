#include "FunctionTemplateMultiTypeDefinition.h"

#include <iostream>
using namespace std;

FunctionTemplateMultiTypeDefinition::FunctionTemplateMultiTypeDefinition() {}



#pragma region 一

// template 关键字告诉C++ 编译器 要开始泛型编程了
// T - 参数化数据类型

template <typename T,typename T2> 
T Max(T a, T b) {
	return  a > b ? a : b;
};

#pragma endregion

void FunctionTemplateMultiTypeDefinition::Show(){
	int n = 6;
	int m = 9;

	//cout << Max(n, m) << endl;

	system("pause");

}
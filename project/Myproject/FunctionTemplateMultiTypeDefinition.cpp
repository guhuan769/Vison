#include "FunctionTemplateMultiTypeDefinition.h"

#include <iostream>
using namespace std;

FunctionTemplateMultiTypeDefinition::FunctionTemplateMultiTypeDefinition() {}



#pragma region һ

// template �ؼ��ָ���C++ ������ Ҫ��ʼ���ͱ����
// T - ��������������

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
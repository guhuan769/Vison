#include "FunctionTemplateMultiTypeDefinitionCase2.h"

#include <iostream>
using namespace std;

FunctionTemplateMultiTypeDefinitionCase2::FunctionTemplateMultiTypeDefinitionCase2() 
{

}

// template �ؼ��ָ���C++ ������ Ҫ��ʼ���ͱ����
// T - ��������������
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

	// ����3 
	{
		int n = 6;
		int m = 9;
		char a = 'c'; // 'c' ��Ӧ��ascll��ֵ�� 99

		cout << "Max<int,char>(m,a);" << Max<int, char>(m, a) << endl;// ��ʽ����
		cout << "Max(m,a):" << Max(m, a) << endl; // �Զ����������Ƶ�
		cout << "Max(a,m): " << Max(a, m) << endl; // �Զ����������Ƶ�


	}

}
#include "TemplateMatching.h"

#include <iostream>
using namespace std;

TemplateMatching::TemplateMatching() {}


// ����ģ���ƥ��ԭ��
// һ��һ����ģ�庯�����Ժ�һ��ͬ���ĺ���ģ��ͬʱ���ڣ����Ҹú���ģ�廹����
//��ʵ����Ϊ�����ģ�庯��

#pragma region ��
int Add(const int& x, const int& y)
{
	cout << "���þ��庯��" << endl;
	return x + y;
};

// ͨ�����ͼٷ��ĺ���ģ��
template<typename T>
T Add(const T& x, const T& y)
{
	cout << "����ģ�庯��" << endl;
	return x + y;
};
#pragma endregion

#pragma region ��
template<typename T>
T Add3(const T& x, const T& y)
{
	cout << "���� ����ģ�庯��" << endl;
	return x + y;
}
#pragma endregion


void TemplateMatching::Show() 
{
	cout << endl;
	cout << "=================================" << endl;
	cout << "=================================" << endl;
	cout << "=================================" << endl;
	cout << "����ģ�庯���������Զ�����ת��������ͨ�������Խ����Զ�����ת��" << endl;
	{
		int a = 10, b = 20;
		int c = Add(a, b); // ���÷�ģ�庯��������������Ҫʵ����
		// ��� ���� ��ʾ�� ָ������ ��ô�ͻ���ģ�庯��
		int d = Add<int>(a, b);// ���ñ�����ʵ������Add����
	}

	cout << endl;
	cout << "=================================" << endl;
	cout << "=================================" << endl;
	cout << "=================================" << endl;
	cout << "����ģ�庯���������Զ�����ת��������ͨ�������Խ����Զ�����ת��" << endl;

	// ����ģ�庯���������Զ�����ת��������ͨ�������Խ����Զ�����ת��

	{
		int a = Add3(2.2, 4.3); // ģ�庯���������Զ�����ת��������ͨ������

	}


}
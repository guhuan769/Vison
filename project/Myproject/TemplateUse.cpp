#include "TemplateUse.h"

#include <iostream>
using namespace std;

TemplateUse::TemplateUse() {}

//template 关键字告诉C++编译器 要开始泛型编程了
// T - 参数化数据类型
template <typename T>
T Max(T a, T b) {
	return a > b ? a : b;
}

template <typename T1,typename T2>
T1 Max(T1 a, T2 b) {
	return a > b ? a : b;
}

void TemplateUse::Show() {

	{
		int n = 1;
		int m = 2;
		cout << "Max(1,2)" << Max(n, m) << endl;

		float a = 2.0;
		float b = 3.0;
		cout << "max(2.0,3.0) = " << Max(a, b) << endl;

		char i = 'a';
		char j = 'b';
		cout << "max('a','b') = " << Max(i, j) << endl;

		int a1 = 2;
		float b1 = 3.3;
		// 如果不写<double,int > 它会自动去推断目标类型
		cout << "max(2.0,3) = " << Max<float, int>(b1, a1) << endl;
	}

}
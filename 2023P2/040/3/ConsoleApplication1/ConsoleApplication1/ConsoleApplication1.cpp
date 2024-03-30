#include <iostream>
using namespace std;

#include "TemplateMax.h"

//专门用于Int类型加法的非模板函数
int Add(const int& x, const int& y) {
    cout << "调用具体函数" << endl;
    return x + y;
}

//通用类型加法的函数模板
template<typename T>

T Add(const T& x, const T& y) {
    cout << "调用模板函数" << endl;
    return x + y;
}

int main()
{
    //int a = 10,b = 20;
    //int c = Add(a, b);// 调用非模板函数，编译器不需要实例化
    //int d = Add<int>(a, b); // 调用编译器实例化的Add函数

    // 040Opencv之C++进阶内容(2)_3、C++的函数模板详解-2
    {
        TemplateMax tm;
        tm.Show();
    }

    return 0;
}


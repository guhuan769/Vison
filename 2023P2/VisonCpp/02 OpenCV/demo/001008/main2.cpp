#include <iostream>
using namespace std;

int main(){
	//1、const修饰指针 常量指针
	int a = 10;
	int b = 20;
	
	const int* p = &a;
	cout << " p = " << p <<endl;
	//指针指向的值不可以改，指针的指向可以改
	//*p = 20; 错误
	p = &a; //正确
	
	//2、const 修饰常量	指针常量
	//指针的指向不可以改，指针指向的值可以改
	int* const p2 = &a;
    *p2 = 100;//正确
    //p2 = &b; //错误的
    
    //3、const 修饰常量和指针
    //指针的指向，和指针指向的值 都不可以改
    const int* const p3 = &a;
    // *p3 = 100; //错误
    // p3 = &b; //错误
	return 0;
}
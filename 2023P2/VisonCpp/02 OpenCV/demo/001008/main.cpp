#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
	int arr[3] = {1,2,4};
	int b = 20;
	int* p2 = &b;
	cout << sizeof(p2) << endl;
	cout << sizeof(int*) <<endl;
	//通过VS工具就可以看到指定类型;如果通过G++工具那么就是PPI
	cout << typeid(&p2).name() << endl;
	return 0;
	
}
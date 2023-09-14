#include <iostream>
using namespace std;

int main()
{
  //一维数组
  int arr[5] = {1,2,3,4,5};
  /*一维数组的地址与指针*/
  int *p1 = (int *)(&arr + 1); // &arr: 整个数组的地址 //&arr + 1: 指向数组的未尾处
  int* p2 = (int *)(arr + 1);  //arr等价于&arr[0] .类型为int *类型:数组首元素地址
  cout << p1[-2] << endl;  //4
  cout << *p2 << endl;     //2

  cout << arr << endl;      //009DFBB8
  cout << *arr << endl;     // 1 [第1个元素值]
  cout << arr + 1 << endl;  // 009DFBBC 后移4字节【跳过1个元素】
  cout << *(arr + 1) << endl;  //2[第2个元素值]

  cout << &arr[0] << endl;
  cout << *(&arr[0]) << endl; //1 的第一个元素值
  cout << &arr[0] + 1  << endl; //
  cout << *(&arr[0] + 1) << endl; //2[第二个元素值]

  cout << &arr << endl;
  cout << *(&arr) << endl;
  cout << &arr + 1 << endl;
  cout << *(&arr + 1) << endl;

  return 0;
}

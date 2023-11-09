// reading binary file 
#include <iostream>

using namespace std;

int main() {

	int a = 200;
	int b = 0;
	int c = 0;
	try
	{
		// 可能会出现异常的逻辑代码 ，放置到该位置
		 c = a / b;
	}
	catch (...)
	{
		cout << " 产品出现异常 " << e.what() << endl;
	}

	cout << "后面的逻辑执行了" << endl;
	return 0;
}
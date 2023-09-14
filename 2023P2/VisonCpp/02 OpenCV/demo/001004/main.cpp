#include <iostream>
using namespace std;

int main(){
	int small,big,count;
	count = 0;
	//C++中使用cin指令接收控制台输入
	cin>>small>>big;
	while(small <= big){
		count = count + small;
		small ++;
	}
	cout << count << endl;
	return 0;
}
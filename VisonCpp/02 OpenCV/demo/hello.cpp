  #include <iostream>
  using namespace std;
  
  //main() is where program execution begins.
  
  typedef int feed;
  enum color{red,green,blue} c;
  
  //声明变量 编译器有用 运行期没用
  extern int a,b;
  
  //定义常量
  #define LENGTH 10
  #define WIDTH 5
  #define NEWLINE '\n'
  
  int main(){
    //输出结果到控制台
    cout <<"This is my first C++ program"<<" Oh Shit;"<<endl;
	cout<<"Query bytes ："<<endl;
	cout<<"Size of char :"<<sizeof(char)<<endl;
	cout<<"Size of int :"<<sizeof(int)<<endl;
	cout<<"Size of short int  :"<<sizeof(short int)<<endl;
	cout<<"Size of long int  :"<<sizeof(long int)<<endl;
	cout<<"Size of long long  :"<<sizeof(long long)<<endl;
	cout<<"Size of float  :"<<sizeof(float)<<endl;
	cout<<"Size of double  :"<<sizeof(double)<<endl;
	cout<<"Size of wchar_t  :"<<sizeof(wchar_t)<<endl;
	
	feed age = 20;
	c=red;
	cout <<"My is Age:"<<age<<"color:" <<c;
	 
	char x = 'x';
	
	int a,b;
	
	cout<<endl;
	
	int area;
	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE<<endl;
	
    return 0;
  }
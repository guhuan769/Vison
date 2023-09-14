#include <iostream>
//小数精度处理:
#include<iomnip>
using namespace std;

int main(){
	// number definition:
	short s;
	int i;
	long l;
	float f;
	double d;
	
	//number assignments;
	s = 10;
	i = 1000;
	l  =  1000000;
	f = 230.47;
	d = 30949.374;
	
	//numbr printing;
	cout << "short s :" << s <<endl;
	cout << "int i:"<<endl;
	cout << "long l :" << l <<endl;
	cout << "float f :"<<f <<endl;
	cout << "double d : " << d <<endl;
	cout << setprecision(5) << a << endl;
	return 0;
}
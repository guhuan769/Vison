#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	ll t1 = 0,t2 = 1,t3;
	while(n--){
		cout << t1 << ' ';
		t3 = t1+ t2;
		t1 = t2;
		t2 = t3;
	}
	return 0;
}
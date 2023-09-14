 #include <iostream>
  using namespace std;
  int main(){
    unsigned int a = 60;  //60 = 0011 1100
    unsigned int b = 13;  //13 = 0000 1101
    int c = 0;

    c = a & b;  //12 = 0000 1100
    cout << "Line 1 - c 的值是 " << c << endl;
    c = a | b ;  //61 = 0011 1101
    cout << "Line 2 - c 的值是 " << c << endl;
    c = a ^ b;  // 49 = 0011 0001
    cout << "Line 3 - c 的值是 " << c << endl;
    c = ~a;  //-61 = 1100 0011
    cout << "Line 4 - c 的值是 " << c << endl;
    c = a << 1;  //120 = 0111 1000
    cout << "Line 5 - c 的值是 " << c << endl;
    c = a >> 1 ;  // 30 = 0001 1110
    cout << "Line 6 - c 的值是 " << c << endl;

    //无符号右移
    //c = a >>> 1 ;  // 30 = 0001 1110
    //cout << "Line 6 - c 的值是 " << c << endl;
    return 0;
  }
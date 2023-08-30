 #include <iostream>

extern int count;

int main(){
	
	int a = 2; // 0000 0010
	int b = 6; // 0000 0110
	int c = a^b;
  std::cout<< "" << c << std::endl;
  return 0;
}
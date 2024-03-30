#include "TemplateMax.h"
#include <iostream>
using namespace std;

TemplateMax::TemplateMax() {

}

template <typename T1,typename T2>
T1 Max(T1 a, T2 b) {
	return a > b ? : b;
}

void TemplateMax::Show() {
	
}
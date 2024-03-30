#include "TemplateUse.h"

#include <iostream>
using namespace std;

TemplateUse::TemplateUse() {}

template <typename T1,typename T2>
T1 Max(T1 a, T2 b) {
	return a > b ? a : b;
}

void TemplateUse::Show() {
	cout << "Max(1,2)" << Max(1,2) << endl;
}
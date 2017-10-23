#include<iostream>
#include<string>

using namespace std;

typedef int INT;
typedef INT (*FUNC)(INT);
typedef INT (&arr)[3];

using UINT = int;
using UFUNC = UINT(*)(UINT);
using UFUNC2 = string(*)();
using uarr = UINT(&)[3];

int func(int i) {
	return i;
}

string func2() {
	return "string *ptr func";
}

int main() {
	INT foo[3] {0, 1, 2};
	arr a = foo;
	uarr ua = foo;
	cout << "INT(&arr)[2] = " << a[2] << endl;
	cout << "UINT(&)[2] = " << ua[2] << endl;

	FUNC x = &func;
	UFUNC ux = &func;
	cout << "INT(*FUNC)(5) = " << x(5) << endl;
	cout << "UINT(*)(5) = " << ux(5) << endl;

	UFUNC2 ux2 = &func2;
	cout << "string(*)() = " << ux2() << endl;
	return 0;
}
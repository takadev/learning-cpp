#include<iostream>

using namespace std;

typedef int INT;
typedef INT (*FUNC)(INT);
typedef INT (&arr)[3];
typedef INT (&arr2)[3];
typedef INT arr3[3];

#if defined(__LP64__)
typedef long LONG;
#endif

int main() {
	INT foo[3] {0, 1, 2};
	arr a = foo;
	cout << "INT(&arr)[2] = " << a[2] << endl;

	FUNC x = &func;
	cout << "INT(* FUNC)(5) = " << x(5) << endl;

	INT bar[3] {3, 4, 5};
	arr2 b = bar;
	cout << "INT(&arr2)[2] = " << b[2] << endl;

	LONG test = 10;
	cout << test << endl;

	return 0;
}
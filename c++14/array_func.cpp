#include<iostream>
#include<iomanip>
#include<typeinfo>

using namespace std;

void foo(int (*array)[5]) {
	cout << __PRETTY_FUNCTION__ << endl;
	cout << "typeid(array).name() = " << typeid(array).name() << endl;
	cout << "typeid(*array).name() = " << typeid(*array).name() << endl;
	for(int i = 0; i < 5; i++) {
		cout << (*array)[i];
	}
	cout << endl;
}

int main() {
	int x[5] {3, 2, 4, 1, 5};
	foo(&x);
	return 0;
}
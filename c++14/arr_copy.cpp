#include<iostream>
#include<iomanip>

using namespace std;

void copy(int* x, int* y, int size) {
	cout << __PRETTY_FUNCTION__ << endl;
	copy(&x[0], &x[size], &y[0]);
}

const int sz = 5;

int main() {
	int x[sz] {6, 4, 2, 8, 10};
	int y[sz];
	copy(x, y, sz);
	for(int i = 0; i < sz; i++) {
		cout << setw(4) << y[i];
	}
	cout << endl;

	int* n;
	int* a = new int[5]{1, 2, 3, 4, 5};
	cout << a << endl;
	cout << a[0] << endl;
	cout << a[4] << endl;
	cout << *a << endl;
	cout << *a + 10 << endl;

	int b[5]{1, 2, 3, 4, 5};
	int* c = b;
	for(int i = 0; i < 5; i++) {
		cout << setw(4) << c[i];
	}
	cout << endl;

	cout << "sizeof(n)=" << sizeof(n) << endl;
	cout << "sizeof(a)=" << sizeof(a) << endl;
	cout << "sizeof(b)=" << sizeof(b) << endl;
	cout << "sizeof(c)=" << sizeof(c) << endl;
	cout << "sizeof(*c)=" << sizeof(*c) << endl;
	delete[] a;

	return 0;
}
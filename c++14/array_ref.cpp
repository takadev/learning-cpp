#include<iostream>
#include<iomanip>

using namespace std;

void printArray(int (&x)[100]) {
	for(int* it = &x[0]; it != &x[0] + 100; it++) {
		cout << setw(4) << (*it);
	}
	cout << endl;
}

int main() {
	int x[100];
	cout << &x << endl;

	int (&z)[100] = x;
	cout << z << endl;

	x[0] = 1;
	z[1] = 2;

	cout << "x[0] = " << x[0] << endl;
	cout << "x[1] = " << x[1] << endl;

	fill_n(&x[2], 98, -1);
	printArray(x);
	return 0;
}
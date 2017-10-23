#include<iostream>

using namespace std;


void plusOne(int& x) {
	x += 1;
}

void swap(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int a = 5;
	cout << a << endl;
	cout << &a << endl;

	int& ref = a;
	cout << ref << endl;
	cout << &ref << endl;

	ref = 100;
	cout << ref << endl;
	cout << a << endl;

	int* b = &a;
	cout << b << endl;
	cout << *b << endl;
	cout << &b << endl;

	ref = *b;
	cout << ref << endl;
	cout << &ref << endl;


	plusOne(ref);
	cout << ref << endl;

	int c = 20;
	swap(ref, c);
	cout << "ref = " << ref << endl;
	cout << "c = " << c << endl;
	return 0;
}
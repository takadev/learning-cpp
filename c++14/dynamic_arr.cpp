#include<iostream>

using namespace std;

void leakFunc() {
	int* a = new int[20];
}

int main() {
	int* a = new int[20];
	delete[] a;

	int* foo = new int{1};
	cout << "Dynamically allocated variable" << endl;
	cout << *foo << endl;
	delete foo;

	int* foo_copy_init = new int(10);
	cout << "Copy initialization" << endl;
	cout << *foo_copy_init << endl;
	delete foo_copy_init;

	int* foo_no_init = new int;
	cout << "BAD: no initialization" << endl;
	cout << *foo_no_init << endl;
	delete foo_no_init;

	int* bar = new int[4]{5, 6, 7, 8};
	cout << "Dynamically allocated array" << endl;
	for(int i = 0; i < 4; i++) {
		cout << bar[i] << endl;
	}
	delete[] bar;

	cout << "BAD: Deleted, but remaining" << endl;
	cout << *foo << endl;
	cout << bar[2] << endl;

	return 0;
}
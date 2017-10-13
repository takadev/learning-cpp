#include <iostream>

using namespace std;

int main() {
	int a = 10;
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	int *b = &a;
	cout  << "b = " << b << endl;
	cout  << "*b = " << *b << endl;
	*b = 5;
	cout << "*b = " << *b << endl;
	cout << "a = " << a << endl;
	return 0;
}
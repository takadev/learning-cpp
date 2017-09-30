#include <iostream>
using namespace std;

int main() {
	int i = 100;
	int &ref = i;

	ref++;

	cout << i << " : " << ref <<  '\n';
	cout << &i << " : " << &ref << endl;

	i++;

	cout << i << " : " << ref <<  '\n';
	cout << &i << " : " << &ref << endl;

	int j = 30;
	ref = j;

	cout << i << " : " << ref <<  '\n';
	cout << &i << " : " << &ref << endl;
	cout << j << " : " << ref <<  '\n';
	cout << &j << " : " << &ref;

	return 0;
}
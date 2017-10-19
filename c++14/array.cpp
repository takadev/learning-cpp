#include<iostream>
#include<array>

using namespace std;

const int size = 20;


int main() {
	int x[size];
	x[0] = 8;
	int y = x[0];
	cout << y << endl;

	cout << x << endl;
	cout << &x << endl;
	cout << x+1 << endl;
	cout << x+2 << endl;

	cout << x[0] << endl;
	cout << &x[0] << endl;

	x[1] = 12;
	cout << x[1] << endl;
	cout << &x[1] << endl;
	x[2] = 17;
	cout << x[2] << endl;
	cout << &x[2] << endl;

	return 0;
}
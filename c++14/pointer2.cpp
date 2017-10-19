#include<iostream>
using namespace std;

int main(){
	int y = 8;
	cout << "Value of y is " << y << endl;
	cout << "Address of y is " << &y << endl;
	int* x = &y;
	cout << "Address of x is " << x << endl;
	cout << "Value of x is " << *x << endl;


	int z = 15;
	int* zref = &z;
	cout << zref << endl;
	cout << *zref << endl;
	return 0;
}

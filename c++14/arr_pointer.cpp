#include<iostream>

using namespace std;

int main() {
	int x[5] {2, 3, 4, 5, 1};
	int* p_x = x;

	cout << "&x[0] = " << &x[0] << " sizeof(&x[0]) = " << sizeof(&x[0]) << endl;
	cout << "p_ x = " << p_x << " sizeof(p_x) = " << sizeof(p_x) << endl;

	return 0;
}
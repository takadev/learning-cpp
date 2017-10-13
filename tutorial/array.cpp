#include <array>
#include <iostream>
using namespace std;

int main() {
	//std::array<int, 4> a{ { 1, 2, 3, 4 } };
	array<int, 4> b = { 1, 2, 3, 4 };
	//cout << a[0] << endl;
	cout << b[0] << endl;
	cout << b[1] << endl;
	cout << b[2] << endl;
	cout << b[3] << endl;
	cout << b[4] << endl;

	cout << "-----" << endl;
	cout << &b[0] << endl;
	cout << &b[1] << endl;
	cout << &b[2] << endl;
	cout << &b[3] << endl;
	cout << &b[4] << endl;

	return 0;
}
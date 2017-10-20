#include<iostream>

using namespace std;

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int fn_call(int (*p)(int, int), int x, int y) {
	return p( x, y);
}


int main() {
	char x;
	cin >>
	 x;
	int (*ptr)(int, int);
	if (x == 'a') {
		ptr = &add;
	} else if (x == 's') {
		ptr = &sub;
	} else {
		cout << "Please enter a or s" << endl;
		return -1;
	}

	int z = ptr(4, 5);
	cout << z << endl;
	int t = fn_call(ptr, 3, 7);
	cout << t << endl;
	return 0;
}

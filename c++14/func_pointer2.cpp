#include<iostream>

using namespace std;

int call_fn(int (*ptr)(int, int), int x, int y) {
	return ptr(x, y);
}

void call_fn_ref(void (*ptr)(int&, int&), int x, int y) {
	ptr(x, y);
	cout << "x = " << x << " y = " << y << endl;
}

int add(int x, int y) {
	return x + y;
}

void sub(int& x, int& y) {
	x = x - y;
}

void swap(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int x = 5;
	int y = 4;

	cout << call_fn(&add, x, y) << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	call_fn_ref(&swap, x, y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	call_fn_ref(&sub, x, y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	return 0;
}

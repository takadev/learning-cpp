#include<iostream>

using namespace std;

void foo(int x) {
	cout << __PRETTY_FUNCTION__ << endl;
}

void bar(int* x, int y) {
	cout << __PRETTY_FUNCTION__ << endl;
}

int main() {
	foo(5);
	int* p_x = new int[5];

	bar(p_x, 1);
	bar(nullptr, 1);
	bar(NULL, 1);

	return 0;
}

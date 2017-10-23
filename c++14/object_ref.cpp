#include<iostream>

using namespace std;

struct A {
	int bar {0};
};

void foo(A& a) {
	a.bar = 100;
}

void hoge(A a) {
	a.bar = 100;
}

int main() {
	A a;
	foo(a);
	cout << a.bar << endl;

	A b;
	hoge(b);
	cout << b.bar << endl;
	return 0;
}
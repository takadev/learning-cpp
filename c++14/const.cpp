#include<iostream>

using namespace std;

struct A {
	int test;
	void func3() const {
		//test = 5;
		int test = 5;
	}
};

void func(const int a) {
	//a = 5;
}

//const int func2() {}

int main() {
	const int a = 10;
	cout << a << endl;
	//a = 5;

	int const b = 30;
	cout << b << endl;
	//b = 5;

	int c = 10;
	int* p = &c;
	cout << *p << endl;

	int* const p2 = &c;
	*p2 = 13;
	cout << *p2 << endl;

	int d = 15;
	//p2 = &d;
	//cout << *p2 << endl;

	const int* p3 = &d;
	//*p3 = 20;

	int e = 30;
	p3 = &e;
	cout << *p3 << endl;

	return 0;
}
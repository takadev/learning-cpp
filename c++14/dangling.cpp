#include<iostream>

using namespace std;

int* dangling_func() {
	int foo = 100;
	return &foo;
}

int main() {
	int* ptr = dangling_func();
	cout << &ptr << endl;
	cout << *ptr << endl;
	return 0;
}
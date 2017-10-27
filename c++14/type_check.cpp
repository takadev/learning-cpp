#include<iostream>
#include<type_traits>

using namespace std;

struct A {
	A (int v) : var(v) {}
	int var;
};

struct B {
	B() {}
};

int main() {

	cout << "A has default constructor -> " << is_default_constructible<A>::value << endl;
	cout << "A is move assignable -> " << is_move_assignable<A>::value << endl;
	cout << "A has copy constructor -> " << is_copy_constructible<A>::value << endl;
	cout << "A is copy assignable -> " << is_copy_assignable<A>::value << endl;
	cout << "B has default constructor -> " << is_default_constructible<B>::value << endl;

	return 0;
}



#include<iostream>

using namespace std;

auto func(double d) -> float {
	return d;
}

int main() {
	auto i = 10;
	auto d = 3.14;
	auto b = false;
	auto c = "abcdef";
	cout << i << endl;
	cout << d << endl;
	cout << b << endl;
	cout << c << endl;

	int j = 5;
	int* jp = &j;
	cout << *jp << endl;
	cout << jp << endl;
	const int k = j;
	const int l = k;
	cout << &l << endl;

	auto l_auto = l;
	auto l_ptr_auto = &l;

	cout << l_auto << endl;
	cout << l_ptr_auto << endl;

	cout << typeid(l_auto).name() << endl;
	cout << typeid(l_ptr_auto).name() << endl;

	auto x = func(2.33411);
	cout << typeid(x).name() << endl;

	return 0;
}
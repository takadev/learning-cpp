#include <iostream>
using namespace std;

template <class X> void println(X out) {
	cout << out << endl;
}

int main() {
	int i = 10;
	println("hogehoge");
	println(10);
	println(1.052);
	println(&i);

	return 0;
}
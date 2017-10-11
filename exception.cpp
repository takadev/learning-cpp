#include <iostream>
using namespace std;

int main() {
	try {
		throw "Exception : hogehoge";
		cout << "fugafuga" << endl;
	}
	catch (const char *str) {
		cout << str << endl;
	}

	try {
		throw 100;
		cout << "bar" << endl;
	}
	catch (int e) {
		cout << e << endl;
	}

	try {
		throw "Exception : fugafuga";
		cout << "bar" << endl;
	}
	catch (int e) {
		cout << e << endl;
	}

	return 0;
}
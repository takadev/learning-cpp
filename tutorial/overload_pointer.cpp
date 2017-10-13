#include<string>
#include<iostream>
using namespace std;

void hoge() {
	cout << "hoge()" << endl;
}

void hoge(char *str) {
	cout << "--char--" << endl;
	cout << &str << endl;
	cout << str << endl;
}

void hoge(string str) {
	cout << "--string
	--" << endl;
	cout << &str << endl;
	cout << str << endl;
}

int main() {
	void (*po1)(), (*po2)(char *), (*po3)(string);
	po1 = hoge;
	po2 = hoge;
	po3 = hoge;

	(*po1)();
	(*po2)("char *");
	(*po3)("string");

	cout << &po1 << endl;
	cout << &po2 << endl;
	cout << &po3 << endl;

	return 0;
}
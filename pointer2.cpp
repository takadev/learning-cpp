#include <iostream>
#include <string>
using namespace std;

class hoge {
public:
	string str;
	hoge(string);
};

hoge::hoge(string str) {
	hoge::str = str;
}

int main() {
	hoge *po , obj[2] = {"h\n", "hoge obj2\n"};
	po = &obj[0];

	cout << po->str << endl;
	cout << (po + 1)->str << endl;
	cout << (po + 2)->str << endl;

	return 0;
}
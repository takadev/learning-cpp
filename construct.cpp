#include <iostream>
using namespace std;

class hoge {
public:
	hoge();
};

hoge::hoge() {
	cout << "construct hoge\n";
}

class fuga {
public:
	char *str;
	fuga(char *);
};

fuga::fuga(char *ch) {
	cout << "construct fuga\n";
	str = ch;
}

int main() {
	hoge obj1;
	fuga obj2("fugafuga");
	cout << obj2.str << endl;
	return 0;
}
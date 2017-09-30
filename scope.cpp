#include <iostream>
#include <string>
using namespace std;

class hoge {
public:
	string str;
	void print(string);
	hoge(string);
};

// constructor
hoge::hoge(string str) {
	hoge::str = str;
}

// member function
void hoge::print(string str) {
	cout << str << '\n';
	cout << hoge::str << '\n';
}

int main() {
	hoge obj("constructor str");
	obj.print("print str");
	return 0;
}
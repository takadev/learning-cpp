#include <iostream>
#include <string>
using namespace std;

string str = "global string\n";

class hoge {
public:
	string str;
	void print(string str);
} obj;

void hoge::print(string str) {
	cout << str << hoge::str << ::str;
}

int main() {
	obj.str = "member string\n";
	obj.print("arg string\n");
	return 0;
}
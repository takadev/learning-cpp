#include<string>
#include<iostream>
using namespace std;

class hoge {
public:
	string str;
	void bar() {
		cout << "hoge.bar()" << endl;
	}

	void foo() {
		cout << "hoge.foo()" << endl;
	}

	void setStr(string str) {
		this->str = str;
	}
} obj1;

class fuga : public hoge {
public:
	void bar() {
		cout << "fuga.bar()" << endl;
	}

	void showStr() {
		cout << this->str << endl;
	}
} obj2;

int main() {
	obj1.bar();
	obj2.bar();
	obj2.foo();
	obj2.setStr("fuga.str");
	obj2.showStr();

	return 0;
}
#include <string>
#include <iostream>
using namespace std;

class hoge {
public:
	virtual void paint() {
		cout << "hoge paint" << endl;
	}
} obj1;

class fuga : public hoge {
public:
	void paint() {
		cout << "fuga paint" << endl;
	}
} obj2;

class bar : public fuga {
public:
	void paint() {
		cout << "bar paint" << endl;
	}
} obj3;

class foo : public bar {
public:
	void nop()
	{
		return;
	}
} obj4;

int main() {
	hoge *po;
	unsigned char ch;

	cout << "h/f/b >";
	cin >> ch;

	if (ch == 'h') {
		po = &obj1;
	} else if (ch == 'f') {
		po = &obj2;
	} else if (ch == 'b') {
		po = &obj3;
	} else {
		po = &obj4;
	}
	po->paint();

	string str;
	cout << "Input string >";
	cin >> str;
	cout << str << endl;
	return 0;
}
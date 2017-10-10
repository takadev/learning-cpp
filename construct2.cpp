#include<string>
#include<iostream>
using namespace std;

class hoge {
public:
	hoge(string str) {
		cout << str << endl;
	}
};

class fuga : public hoge {
public:
	fuga(string str) : hoge("hoge construct") {
		cout << str << endl;
	}
};

class bar : public fuga {
public:
	bar() : fuga("fuga constrcut") {
		cout << "bar constrcut" << endl;
	}
} obj;

int main() {
	return 0;
}
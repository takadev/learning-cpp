#include<string>
#include<iostream>
using namespace std;

class hoge {
public:
	hoge(string str) {
		cout << "hoge " << str << endl;
	}
};

class fuga {
public:
	fuga(string str) {
		cout << "fuga " << str << endl;
	}
};

class bar : public fuga, public hoge {
public:
	bar(string str) : fuga(str), hoge(str) {
		cout << "bar construct" << endl;
	}
} obj1("construct order");

class foo : public hoge, public fuga {
public:
	foo(string str) : fuga(str), hoge(str) {
		cout << "foo construct" << endl;
	}
} obj2("construct order");

int main() {
	return 0;
}
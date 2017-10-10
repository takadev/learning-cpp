#include<string>
#include<iostream>
using namespace std;

class hoge {
public:
	~hoge() {
		cout << "hoge destruct" << endl;
	}
};

class fuga : public hoge {
public:
	~fuga() {
		cout << "fuga destruct" << endl;
	}
};

class bar : public fuga {
public:
	~bar() {
		cout << "bar destruct" << endl;
	}
} obj;

int main() {
	return 0;
}
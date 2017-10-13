#include<string>
#include<iostream>
using namespace std;

class hoge {
public:
	hoge() {
		cout << "hoge construct" << endl;
	}
};

class fuga {
public:
	fuga() {
		cout << "fuga construct" << endl;
	}
};

class bar : public fuga , public hoge {
public:
	bar() {
		cout << "bar construct" << endl;
	}
} obj1;

class foo : public hoge , public fuga {
public:
	foo() {
		cout << "foo construct" << endl;
	}
} obj2;

int main() {
	return 0;
}
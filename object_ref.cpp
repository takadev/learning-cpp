#include <string>
#include <iostream>
using namespace std;

class hoge {
public:
	string str;
};

class fuga : public hoge {
public:
	int i;
} obj1;

void getRef(hoge &obj) {
	cout << obj.str << endl;
}

class foo : public fuga {
public:
	int i;
} obj2;

void getRef(foo &obj, int i) {
	obj.i = i;
	cout << obj.str << endl;
	cout << obj.i << endl;
	getRef(obj);
}

int main() {
	obj1.str = "fuga obj";
	getRef(obj1);

	obj2.str = "fuoo obj";
	getRef(obj2, 10);
	return 0;
}
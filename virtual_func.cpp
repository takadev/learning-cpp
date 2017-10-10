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

class foo : public fuga {
public:
	void paint() {
		cout << "foo paint" << endl;
	}
} obj3;

int main() {
	hoge *po1 = &obj1, *po2 = &obj2, *po3 = &obj3;

	po1->paint();
	po2->paint();
	po3->paint();

	return 0;
}
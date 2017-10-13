#include <iostream>
using namespace std;

class hoge {
public:
	virtual void paint() = 0;
};

class fuga : public hoge {
public:
	void paint() {
		cout << "fuga paint" << endl;
	}
} obj1;

class bar : public hoge {
public:
	void paint() {
		cout << "bar paint" << endl;
	}
} obj2;

int main() {
	//hoge virtual_obj = new hoge();
	hoge *po1 = &obj1, *po2 = &obj2;

	po1->paint();
	po2->paint();

	return 0;
}
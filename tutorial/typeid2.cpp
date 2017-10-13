#include<string>
#include<iostream>
#include<typeinfo>
#include<stdlib.h>
using namespace std;

class hoge {
public:
	virtual void func(){};
} obj1;

class fuga : public hoge {
public:
	void func(){}
} obj2;

int main() {
	hoge *po;
	srand((unsigned)time(NULL));

	if (rand() % 2) {
		po = &obj1;
	} else {
		po = &obj2;
	}

	if (typeid(obj1) == typeid(*po)) {
		cout << "hoge" << endl;
	} else {
		cout << "fuga" << endl;
	}

	if (typeid(hoge) == typeid(obj1)) {
		cout << "hoge obj" << endl;
	}

	return 0;
}
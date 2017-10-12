#include<string>
#include<iostream>
#include<typeinfo>
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
	hoge *po = &obj1;
	cout << "Class type = " << typeid(*po).name() << endl;
	po = &obj2;
	cout << "Class type = " << typeid(*po).name() << endl;
	return 0;
}
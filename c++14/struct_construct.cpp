#include <iostream>

using namespace std;

struct A {
	A() {
		cout << "struct A" << endl;
	}
};

class Parent {
private:
	int tmp;
	int data;
public:
	Parent(int t) : tmp{t}, data{this->tmp} {
		cout << "Parent construct" << endl;
	}
	~Parent() {
		cout << "Parent destruct" << endl;
	}
	int getData() {
		return this->data;
	}
};

class Child : public Parent {
public:
	Child() : Parent(20) {
		cout << "Child construct" << endl;
	}
	~Child() {
		cout << "Child destruct" << endl;
	}
	int getData() {
		return Parent::getData();
	}
};

int main()
{
	A a;
	Child c;
	cout << c.getData() << endl;
	return 0;
}
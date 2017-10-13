#include<string>
#include<iostream>
using namespace std;

class hoge {
	int value;
public:
	int operator +(hoge obj) {
		return this->value - obj.value;
	}
	int operator -(hoge obj) {
		return this->value + obj.value;
	}
	void operator ++(int n) {
		cout << "operator ++(int n)" << endl;
		this->value++;
		cout << this->value << endl;
	}
	hoge operator ++() {
		cout << "operator ++()" << endl;
		this->value--;
		cout << this->value << endl;
		return *this;
	}
	hoge(int value) {
		this->value = value;
	}
};

int main() {
	hoge obj1(100), obj2(100);
	cout << obj1 + obj2 << endl;
	cout << obj1 - obj2 << endl;
	obj1++;
	++obj1;

	return 0;
}
#include<string>
#include<iostream>
using namespace std;

class hoge {
	int value;
public:
	string str;

	int operator + (hoge obj) {
		return this->value - obj.value;
	}
	int operator - (hoge obj) {
		return this->value + obj.value;
	}
	hoge operator = (string str) {
		this->str = str;
		return *this;
	}
	hoge(int value) {
		this->value = value;
	}
	hoge(string str) {
		this->str = str;
	}
};

int main() {
	hoge obj1(100), obj2(100);
	cout << obj1 + obj2 << endl;
	cout << obj1 - obj2 << endl;

	hoge str1("str1") , str2("str1");
	str1 = str2 = "fuga";
	cout << str1.str << str2.str;
	return 0;
}
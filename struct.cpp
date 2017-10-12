#include<string>
#include<iostream>
using namespace std;

struct hoge {
	hoge(string str) {
		this->str = str;
	}
	string getStr() {
		return str;
	}
	void setStr(string str) {
		this->str = str;
	}
private:
	string str;
};

int main() {
	hoge obj("hoge struct");
	cout << obj.getStr() << endl;
	obj.setStr("fuga");
	cout << obj.getStr() << endl;
	return 0;
}
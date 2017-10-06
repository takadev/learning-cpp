#include<string>
#include<iostream>
using namespace std;

class hoge {
public:
	string str;
} hoge_obj ;

class fuga : private hoge {
public:
	void setStr(string str) {
		this->str = str;
	}
	void printStr() {
		cout << str << endl;
	}
} fuga_obj ;

int main() {
	hoge_obj.str = "hoge.str";
	cout << hoge_obj.str << endl;

	fuga_obj.setStr("fuga.str");
	fuga_obj.printStr();
	//cout << fuga_obj.str << endl;
	return 0;
}
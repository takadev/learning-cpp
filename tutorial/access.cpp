#include<string>
#include<iostream>
using namespace std;

class hoge {
protected:
	string str;
};

class fuga : public hoge {
public:
	void setStr(string str) {
		this->str = str;
	}
	void printStr() {
		cout << this->str << endl;
	}
} obj ;

int main() {
	obj.setStr("set str");
	obj.printStr();
	//cout << obj.str << endl;
	return 0;
}
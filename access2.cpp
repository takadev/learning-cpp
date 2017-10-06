#include<iostream>

using namespace std;

class hoge {
	char *str;
public:
	char * getStr() {
		return str;
	}
	char ** getPo() {
		cout << "hoge.getPo()" << endl;
		return &str;
	}
};

class fuga : protected hoge {
public:
	void setStr(char *str) {
		char **po = this->getPo();
		*po = str;
	}
	void printStr() {
		cout << this->getStr() << endl;
	}

	char ** getPoFuga() {
		cout << "fug.getPo()" << endl;
		return this->getPo();
	}
} obj;

int main() {
	obj.setStr("set str");
	obj.printStr();
	cout << obj.getPoFuga() << endl;
	return 0;
}
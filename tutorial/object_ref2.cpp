#include <string>
#include <iostream>
using namespace std;

class hoge {
public:
	string str;
	void paint() {
		cout << this->str << endl;
		cout << "hoge paint" << endl;
	}
};

class fuga : public hoge {
public:
	string str;
	void paint() {
		cout << this->str << endl;
		cout << "fuga paint" << endl;
	}
} obj;

int main() {
	obj.str = "str";
	hoge *po = &obj;
	obj.paint();
	po->paint();

	return 0;
}
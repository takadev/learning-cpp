#include <string>
#include <iostream>
using namespace std;

class hoge {
public:
	string str;
};

class fuga : public hoge {
public:
	int i;
} obj1;

int main() {
	obj1.str = "obj1";
	obj1.i = 1;

	hoge *b_obj1 = &obj1;
	cout << b_obj1->str << endl;

	fuga *obj2 = new fuga();
	obj2->str = "obj2";
	obj2->i = 2;
	hoge *b_obj2 = obj2;
	cout << b_obj2->str << endl;

	return 0;
}
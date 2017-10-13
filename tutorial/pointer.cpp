#include <iostream>
using namespace std;

class hoge {
public:
	char *str;
} obj;

int main() {
	obj.str = "fugafuga";
	cout << obj.str << endl;

	hoge *po = &obj;
	po->str = "foo foo";
	cout << obj.str << endl;

	hoge* obj2 = new hoge;
	obj2->str = "bar bar";
	po = obj2;
	cout << obj.str << endl;

	return 0;
}
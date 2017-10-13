#include <iostream>
using namespace std;

class hoge {
public:
	char *str;
} obj;

int main() {
	hoge &ref = obj;
	ref.str = "hoge hoge";

	cout << "--&obj--" << endl;
	cout << &obj << endl;
	cout << "--&ref--" << endl;
	cout << &ref << endl;

	cout << "--obj.str--" << endl;
	cout << obj.str << endl;
	cout << "\n\n";


	hoge obj2;
	obj2.str = "obj2 hoge";
	ref = obj2;

	cout << "--&obj2--" << endl;
	cout << &obj2 << endl;
	cout << "--&ref--" << endl;
	cout << &ref << endl;

	cout << "--obj.str--" << endl;
	cout << obj.str << endl;
	cout << "\n\n";

	hoge &ref2 = obj;
	ref2.str = "ref2 hoge";

	cout << "--&ref--" << endl;
	cout << &ref << endl;
	cout << "--&ref2--" << endl;
	cout << &ref2 << endl;

	cout << "--obj.str--" << endl;
	cout << obj.str << endl;
	cout << "--obj2.str--" << endl;
	cout << obj2.str << endl;
	cout << "\n\n";

	ref = ref2;
	cout << "--&ref--" << endl;
	cout << &ref << endl;
	cout << "--&ref2--" << endl;
	cout << &ref2 << endl;
	cout << "--obj2.str--" << endl;
	cout << obj2.str << endl;
	return 0;
}
#include <iostream>
using namespace std;

class hoge {
public:
	char *str;
} obj;

int main() {
	hoge &ref = obj;
	ref.str = "hoge hoge";

	cout << obj.str << endl;

	hoge obj2;
	obj2.str = "obj2 hoge";
	ref = obj2;

	cout << obj.str << endl;

	hoge &ref2 = obj;
	ref2.str = "ref2 hoge";

	cout << obj.str << endl;
	cout << obj2.str << endl;

	ref = ref2;
	cout << obj2.str << endl;
	return 0;
}
#include <string>
#include <iostream>
using namespace std;

class hoge {
public:
	hoge(string str) {
		cout << str << endl;
	}
};

int main() {
	hoge *obj1;
	obj1 = new hoge("obj1");

	delete obj1;

	hoge *obj2 = new hoge("obj2");

	delete obj2;

	return 0;
}
#include <iostream>
using namespace std;

class hoge {
public:
	int i;
	hoge(int);
} p_obj(5);

hoge::hoge(int i) {
	hoge::i = i;
}

int main() {
	hoge obj(10);
	cout << obj.i << endl;

	obj = p_obj;

	cout << obj.i;
	return 0;
}
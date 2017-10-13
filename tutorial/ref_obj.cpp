#include <iostream>
#include <string>
using namespace std;

class hoge{
public:
	string str;
	int i;
};

void setHoge(hoge &obj, string str, int i) {
	obj.str = str;
	obj.i = i;
}

int main() {
	hoge obj;
	setHoge(obj, "hogehoge", 5);
	cout << obj.str << endl;
	cout << obj.i << endl;
	return 0;
}
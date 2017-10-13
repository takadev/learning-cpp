#include <iostream>
#include <string>
using namespace std;

class hoge {
public:
	int nam;
	string str;
	void setStr(string);
} obj[10];

void hoge::setStr(string str) {
	hoge::str = str;
}

int main() {
	for(int i = 0 ; i < 10 ; i++) {
		obj[i].nam = i;
		obj[i].setStr("ABC");
		cout << obj[i].str;
		cout << obj[i].nam << '\n';
	}
	return 0;
}
#include<string>
#include<iostream>
using namespace std;

union hoge {
	hoge(char ch) {
		this->i = 0;
		this->ch = ch;
	}
	int getInt() {
		return i;
	}
	char getChar() {
		return ch;
	}
private:
	int i;
	char ch;
};

static union {
	int j;
	char str;
};

int main() {
	hoge obj('A');
	cout << "ch = " << obj.getChar() << endl;
	cout << "i = " << obj.getInt() << endl;

	j = 10;
	str = 'f';
	cout << "str = " << str << endl;
	cout << "j = " << j;
	return 0;
}
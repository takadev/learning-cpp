#include <string>
#include <iostream>

#define ARRAY_LEN(ARR) (sizeof(ARR) / sizeof((ARR)[0]))

using namespace std;

class hoge {
public:
	/*
	string str;
	hoge(string str) {
		this->str = str;
	}
	*/
	char *str;
	hoge(char *str) {
		this->str = str;
	}
	void func() {
		cout << this->str << endl;
	}
} obj[3] = {"TEST1", "TEST2", "TEST3"};

int main() {
	int size = sizeof(obj) / sizeof(obj[0]);
	cout << size << endl;
	cout << ARRAY_LEN(obj) << endl;

	for (int i = 0; i < ARRAY_LEN(obj); i++) {
		obj[i].func();
	}
	return 0;
}
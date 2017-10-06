#include <array>
#include <string>
#include <iostream>

#define ARRAY_LEN(ARR) (sizeof(ARR) / sizeof((ARR)[0]))

using namespace std;

class hoge {
public:
	array<int, 3> arr;
	char *str;
	hoge() {
		this->str = "hoge()";
	}
	hoge(char * str) {
		this->str = str;
	}
	hoge(array<int, 3> arr) {
		this->arr = arr;
	}
} obj, ary[3] = {"hoge(char)1", "hoge(char)2", "hoge(char)3"};

int main() {
	cout << obj.str << endl;
	for(int i = 0 ; i < 3 ; i++) {
		cout << ary[i].str << endl;
	}
	array<int, 3> a = {1, 2, 3};
	hoge test(a);
	for (int i = 0; i < ARRAY_LEN(test.arr); i++) {
		cout << test.arr[i] << endl;
	}
	return 0;
}
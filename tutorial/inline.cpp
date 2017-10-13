#include <string>
#include <iostream>
using namespace std;

inline int func(int x, string str) {
	cout << str << endl;
	return x + (int)(x * 0.08);
}

int main() {
	cout << func(100, "hoge");
	return 0;
}
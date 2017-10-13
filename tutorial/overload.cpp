#include <string>
#include <iostream>
using namespace std;

void hoge() {
	cout << "hoge()" << endl;
}
void hoge(string str) {
	cout << "hoge(string)" << str << endl;
}
void hoge(int i) {
	cout << "hoge(int)" << i << endl;
}

int main() {
	hoge();
	hoge("str");
	hoge(5);
	return 0;
}
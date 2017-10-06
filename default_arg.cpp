#include<string>
#include<iostream>
using namespace std;

/*
void hoge(string str) {
	cout << "名前 : " << str << endl;
}
*/

void hoge(string str, int age = 15) {
	cout << "名前 : " << str << endl;
	cout << "年齢 : " << age << endl;
}

int main() {
	hoge("taro");
	hoge("hanako", 20);
	return 0;
}
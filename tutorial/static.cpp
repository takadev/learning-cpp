#include<string>
#include<iostream>
using namespace std;

class hoge {
public:
	static char *str1;
	static string str2;
};

char *hoge::str1 = "hoge1 str";
string hoge::str2 = "hoge2 str";

int main() {
	cout << hoge::str1 << endl;
	cout << hoge::str2 << endl;
	hoge obj1;
	obj1.str2 = "hoge3 str";
	cout << obj1.str1 << endl;
	cout << obj1.str2 << endl;
	cout << hoge::str2 << endl;
	return 0;
}
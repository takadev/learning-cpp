#include<string>
#include<iostream>
using namespace std;

class hoge;

class fuga {
public:
	fuga(hoge &);
};

class hoge {
public:
	string str;
	hoge(string str) {
		this->str = str;
	}
} hoge_obj("hoge") ;

fuga::fuga(hoge &obj) {
	cout << obj.str << endl;
}

int main() {
	fuga fuga_obj(hoge_obj);
	return 0;
}
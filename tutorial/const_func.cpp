#include<string>
#include<iostream>
using namespace std;

class hoge {
public:
	string str;
	mutable string m_str;
	void print() const {
		//str = "fuga";
		m_str = "fuga";
		cout << str << endl;
		cout << m_str << endl;
	}
	hoge(string str) {
		this->str = str;
		this->m_str = str;
	}
};

int main() {
	hoge obj("hoge obj");
	obj.print();
	return 0;
}
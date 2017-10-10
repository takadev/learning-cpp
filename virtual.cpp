#include<string>
#include<iostream>
using namespace std;

class hoge {
public:
	string name;
};

class fuga: virtual public hoge {
public:
	int age;
};

class bar : virtual private hoge {
public:
	string sex;
};

class foo : public fuga, public bar {
public:
	void print() {
		cout << "名前 : " << this->name << endl;
		cout << "年齢 : " << this->age << endl;
		cout << "性別 : " << this->sex << endl;
	}
} obj;


int main() {
	obj.name = "hogehoge";
	obj.age = 1;
	obj.sex = "male";
	obj.print();
	return 0;
}
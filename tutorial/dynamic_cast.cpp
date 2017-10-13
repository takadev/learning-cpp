#include<string>
#include<iostream>
#include<typeinfo>
using namespace std;

class hoge {
public:
	virtual void func() {
		cout << "hoge" << endl;
	}
} obj1;

class fuga : public hoge {
public:
	void func() {
		cout << "fuga" << endl;
	}
	void toString() {
		cout << "hoge toString()" << endl;
	}
} obj2;

int main() {
	if (typeid(fuga) == typeid(obj2)) {
		cout << "fuga obj" << endl;
	}
	obj2.func();
	cout << &obj2 << endl;

	hoge *po1 = dynamic_cast<hoge *>(&obj2);
	cout << &po1 << endl;
	cout << "Class type = " << typeid(*po1).name() << endl;
	po1->func();

	hoge *tmp = &obj1;
	tmp->func();
	fuga *po2 = dynamic_cast<fuga *>(tmp);
	po2->toString();

	fuga *po3 = dynamic_cast<fuga *>(&obj1);
	cout << po3 << endl;
	if (!po3) {
		cout << "型キャストに失敗しました" << endl;
		return 1;
	}
	po3->toString();

	return 0;
}
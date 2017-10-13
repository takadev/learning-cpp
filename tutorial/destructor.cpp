#include <iostream>
using namespace std;

class hoge {
public:
	int i;
	~hoge();
};

hoge::~hoge() {
	cout << "hoge destruction\n";
}

hoge createHoge() {
	hoge obj;
	cout << "hoge creation\n";
	return obj;
}

int main() {
	hoge obj = createHoge();
	obj.i = 10;
	createHoge();
	return 0;
}
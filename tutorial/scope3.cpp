#include <iostream>
using namespace std;

void function() {
	cout << "global func\n";
}

class hoge {
	void function();
public:
	hoge();
} obj ;

hoge::hoge() {
	::function();
	hoge::function();
}

void hoge::function() {
	cout << "member func\n";
}

int main() {
	return 0;
}
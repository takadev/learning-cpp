#include <iostream>
using namespace std;

class bar {
public:
	char *str;
	void print() {
		cout << str;
	}
} obj ;

int main() {
	obj.str = "moe";
	obj.print();
	return 0;
}
#include <iostream>
using namespace std;

class hoge {
public:
	char *str;
} obj ;

int main() {
	obj.str = "foo";
	cout << obj.str;

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

string str = "global str\n";

int main() {
	string str = "local str\n";

	cout << str;
	cout << ::str;
	return 0;
}
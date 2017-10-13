#include <iostream>
#include <istream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string str;

	while(getline(cin, str)) {
		cout << "Write q for exit" << endl;
		cout << setw(8) << str << endl;
		if (str == "q") {
			break;
		}
	}
	return 0;
}
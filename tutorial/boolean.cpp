#include <iostream>
using namespace std;

int main() {
	bool b1 = true , b2 = false , b3 = 0;
	if (b1 && (b2 || ++b3)) {
		cout << "hogehoge" << endl;
	}
	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;
	return 0;
}
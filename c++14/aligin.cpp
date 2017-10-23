#include<iostream>

using namespace std;

struct alignas(16) Align128{};
struct alignas(8) Align64{};

int main() {
	Align128 a128;
	Align128 d[8];
	Align64  c[8];

	cout << "sizeof(Align128) = " << sizeof(a128) << endl;
	cout << "alignment_of<decltype(Align128)>::value = " << alignment_of<decltype(a128)>::value << endl;

	cout << "sizeof(Align128[8]) = " << sizeof(d) << endl;
	cout << "alignment_of<decltype(Align128[8])>::value = " << alignment_of<decltype(d)>::value << endl;

	cout << "sizeof(Align64) = " << sizeof(c) << endl;
	cout << "alignment_of<decltype(Align64)>::value = " << alignment_of<decltype(c)>::value << endl;

	cout << "8 bytes aligned data" << endl;
	for(int i = 0; i < 8; i++) {
		cout << &c[i] << ":" << sizeof(c[i]) << endl;
	}

	cout << "16 bytes aligned data" << endl;
	for(int i = 0; i < 8; i++) {
		cout << &d[i] << ":" << sizeof(d[i]) << endl;
	}
	return 0;
}
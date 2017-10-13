#include <iostream>
using namespace std;

int main() {
	int *po;
	po = new int;

	*po = 100;
	cout << "動的に割り当てたメモリの内容 = " << *po << endl;
	cout << &po << endl;

	delete po;
	cout << *po << endl;
	cout << &po << endl;

	return 0;
}
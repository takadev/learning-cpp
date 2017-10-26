#include<iostream>

using namespace std;

int main() {
	initializer_list<int> il {6, 2, 3, 4};
	cout << il.begin() << endl;
	cout << *il.begin() << endl;

	cout << il.end() << endl;
	cout << *il.end() << endl;

	int xm[4];
	copy(il.begin(), il.end(), &xm[0]);

	for(int i = 0; i < 4; i++) {
		cout << xm[i] << endl;
	}

	for(int* it = &xm[0]; it != &xm[0]+4; it++) {
		cout << *it << endl;
	}

	for(const int* it = il.begin(); it != il.end(); it++) {
		cout << *it << endl;
	}

	for(auto xm : {1, 2, 3, 4, 5}) {
		cout << xm << endl;
	}

	int x[2][3] = {{7,8,9},{10,11,12}};
	for (auto& w: x) {
		for (auto z : w) {
			cout << z << endl;
		}
	}

	cout << "---------" << endl;
	int v[5] {1,2,3,4,5};
	for (auto w : v) {
		cout << w << endl;
	}

	cout << "---------" << endl;
	for (const auto& w : v) {
		cout << w << endl;
	}

	cout << "---------" << endl;
	for (const auto& w : {10,11,12,13}) {
		cout << w << endl;
	}

	cout << "---------" << endl;
	int ab[2][3] {{10,11,12},{13,14,15}};
	for (const auto& cd : ab) {
		for (const auto& ef : cd) {
			cout << ef << endl;
		}
	}

	return 0;
}
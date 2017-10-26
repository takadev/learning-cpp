#include<iostream>

using namespace std;


int main() {
	int mat[2][2] = {
		{0, 1},
		{2, 3}
	};

	int mat_empty_left[][2] {
		{3, 4},
		{5, 6}
	};

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			cout << mat[i][j] << endl;
		}
	}

	cout << "==================================" << endl;
	cout << "Reference based for-each statement" << endl;
	cout << "==================================" << endl;

	for(int (&first)[2]:mat) {
		for(int second : first) {
			cout << second << endl;
		}
	}

	cout << "==================================" << endl;
	cout << "C++11 style rage for each statement" << endl;
	cout << "==================================" << endl;

	for(auto& first : mat_empty_left) {
		for(auto second : first) {
			cout << second << endl;
		}
	}

	return 0;
}
#include<iostream>

using namespace std;

int main() {
	const char address[] = "5-4-3, abc street";
	cout << address << '\n';
	cout << *address << '\n';
	cout << *(address + 11) << '\n';

	char hello[] = "Hello,world!";
	cout << hello << endl;

	char test[4] = {'A', 'B'};
	cout << test[0] << endl;
	cout << test[1] << endl;
	cout << test[2] << endl;
	cout << test[3] << endl;

	int abc[] = {1,2,3,4};
	cout << abc[0] << endl;
	cout << abc[1] << endl;
	cout << abc[2] << endl;
	cout << abc[3] << endl;

	return 0;
}

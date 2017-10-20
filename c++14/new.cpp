#include<iostream>

using namespace std;

int main() {
	int* p_int = new int;
	cout << "p_int = " << p_int << endl;
	cout << "*p_int = " << *p_int << endl;

	char* p_char = new char;
	cout << "p_char = " << p_char << endl;
	cout << "*p_char = " << *p_char << endl;

	int* i = new (int);
	cout << "i = "<< i << endl;
	cout << "*i = "<< *i << endl;
	delete i;

	int* j = new (int){5};
	cout << "j = "<< j << endl;
	cout << "*j = "<< *j << endl;
	delete j;

	int* a = new (int[5]){5, 4, 3, 2, 1};
	cout << "a = "<< *a << endl;
	cout << "a[3] = "<< a[3] << endl;
	delete[] a;

	int* k = new int;
	*k = {5};
	cout << "k = "<< k << endl;
	cout << "*k = "<< *k << endl;
	cout << "k[0] = "<< k[0] << endl;
	delete k;

	int* l = new int[3];
	l[0] = 5;
	l[1] = 4;
	l[2] = 3;
	cout << "l = "<< l << endl;
	cout << "*l = "<< *l << endl;
	cout << "l[1] = "<< l[1] << endl;
	delete[] l;

	int* m = new int[3]{1, 2, 3};
	cout << "m = "<< m << endl;
	cout << "*m = "<< *m << endl;
	cout << "m[1] = "<< m[1] << endl;
	delete[] m;

	return 0;
}



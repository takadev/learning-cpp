#include <iostream>
using namespace std;

struct S_TAG {
	int i;
};

union U_TAG {
	int i;
	double d;
};

enum E_TAG { A , B , C };

int main() {
	S_TAG s_obj;
	U_TAG u_obj;
	E_TAG e_obj;
	s_obj.i = 1;
	u_obj.i = 2;
	u_obj.d = 3.5;
	cout << s_obj.i << endl;
	cout << u_obj.i << endl;
	cout << u_obj.d << endl;

	return 0;
}
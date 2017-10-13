#include <string>
#include <iostream>
using namespace std;

template <class X> class stack {
	X box[64];
	int index;
public:
	bool push(X var);
	X pop();
	stack() { index = 0; }
};

template <class X> bool stack<X>::push(X var) {
	if (index > 63) {
		return false;
	}
	box[index] = var;
	index++;
	return true;
}

template <class X> X stack<X>::pop() {
	if (index == 0) {
		return NULL;
	}
	return box[--index];
}

int main() {
	stack <int> n_obj;
	stack <string> cp_obj;
	stack <float> f_obj;

	n_obj.push(10);
	n_obj.push(100);
	cout << n_obj.pop() << endl;
	cout << n_obj.pop() << endl;

	cp_obj.push("hoge");
	cp_obj.push("fuga");
	cout << cp_obj.pop() << endl;
	cout << cp_obj.pop() << endl;

	f_obj.push(1.345);
	f_obj.push(10.2343);
	cout << f_obj.pop() << endl;
	cout << f_obj.pop() << endl;
	return 0;
}
#include <string>
#include <iostream>
using namespace std;

template <class X> class stack {
	X box[64];
	int index;
public:
	bool push(X var) {
		if (index > 63) {
			return false;
		}
		box[index] = var;
		index++;
		return true;
	}
	X pop() {
		if (index == 0) {
			return NULL;
		}
		return box[--index];
	}
	stack() {
		this->index = 0;
	}
};

int main() {
	stack<int> n_obj;
	n_obj.push(10);
	n_obj.push(100);

	cout << n_obj.pop() << endl;
	cout << n_obj.pop() << endl;

	stack <string> cp_obj;
	cp_obj.push("hoge");
	cp_obj.push("fuga");

	cout << cp_obj.pop() << endl;
	cout << cp_obj.pop() << endl;

	stack<float> f_obj;
	f_obj.push(1.52);
	f_obj.push(10.138);

	cout << f_obj.pop() << endl;
	cout << f_obj.pop() << endl;
	return 0;
}
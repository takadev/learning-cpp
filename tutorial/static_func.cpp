#include<iostream>
using namespace std;

class Math {
public:
	static int max(int var1, int var2) {
		if (var1 > var2) {
			return var1;
		} else {
			return var2;
		}
	}
};

int main() {
	cout << Math::max(100, 101) << endl;
	return 0;
}
#include <iostream>
using namespace std;

/*C++では、voidを省略できる*/
int func();

int func() {
	cout << "Kitty on your lap" << endl;
	return 1;
}

int main() {
	int i = func();
	cout << i;
	return 0;
}
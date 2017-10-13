#include<iostream>

using namespace std;

template<typename T>
T add(T a, T b) {
	return a + b;
}

template<class U>
U substract(U a, U b) {
	return a - b;
}

int main() {
	cout << "2 + 3 = " << add(2, 3) << endl;
	cout << "4 - 1 = " << substract(4.0f, 1.0f) << endl;
	return 0;
}
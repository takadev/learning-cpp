#include<iostream>

using namespace std;

#define PI 3.14
#define TwoPI 2 * PI

int main() {
	static_assert(TwoPI == 6.28, "error");
	static_assert(TwoPI == 6.27, "error");
	return 0;
}
#include<iostream>
#include<cassert>

using namespace std;

constexpr int add(int x, int y) {
	return x + y;
}

constexpr int pow(int base, int exponent) {
	return (exponent != 0) ? base * pow(base, exponent-1) : 1;
}



int main() {
	int x = 5, y = 6;
	int z = add(x, y);
	assert(z == 11);
	assert(z == 12);

	constexpr int a = 5, b = 10;
	constexpr int add_result = add(a, b);
	static_assert(add_result == 15, "");
	static_assert(add_result == 14, "error");

	constexpr int pow_result = pow(2, 3);
	static_assert(pow_result == 8, "");
	static_assert(pow_result == 9, "error");

	return 0;
}
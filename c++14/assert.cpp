#include<iostream>
#include<type_traits>
#include<cstdint>

using namespace std;

struct A {
	static constexpr int x = 10;
};

int main(int argc, const char* argv[]) {
	constexpr int32_t x = 5;

	static_assert(A::x == 10, "x is not 8");
	static_assert(x >= 5, "x is not equal to 32");
	static_assert(A::x == 8, "x is not 8");
	static_assert(x >= 32, "x is not equal to 32");

	return 0;
}
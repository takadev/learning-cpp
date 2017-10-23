#include<vector>
#include<chrono>
#include<iostream>

using namespace std;

struct A {
	int x[50000];
};


auto& copy_ref(vector<int>& vec) {
	return vec;
}

auto copy_val(vector<int> vec) {
	return vec;
}

auto& copy_ref_a(A& a) {
	return a;
}

auto copy_val_a(A a) {
	return a;
}

int main() {
	vector<int> v;
	A a;
	v.resize(1000000);

	cout << "=== Copy Object A ===" << endl;

	auto t1 = chrono::high_resolution_clock::now();
	auto result_val_a = copy_val_a(a);

	auto t2 = chrono::high_resolution_clock::now();
	cout << "Value args: " << chrono::duration_cast<chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << endl;

	auto t3 = chrono::high_resolution_clock::now();
	auto result_ref_a = copy_ref_a(a);

	auto t4 = chrono::high_resolution_clock::now();
	cout << "Ref args: " << chrono::duration_cast<chrono::nanoseconds>(t4 -t3).count() << " nanoseconds" << endl;

	cout << endl;

	cout << "=== Copy Vector ===" << endl;

	auto t5 = chrono::high_resolution_clock::now();
	auto result_val = copy_val(v);

	auto t6 = chrono::high_resolution_clock::now();
	cout << "Value args: " << chrono::duration_cast<chrono::nanoseconds>(t6 - t5).count() << " nanoseconds" << endl;

	auto t7 = chrono::high_resolution_clock::now();
	auto result_ref = copy_ref(v);

	auto t8 = chrono::high_resolution_clock::now();
	cout << "Ref args: " << chrono::duration_cast<chrono::nanoseconds>(t8 - t7).count() << " nanoseconds" << endl;

	return 0;
}
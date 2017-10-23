#include<string>
#include<iostream>

using namespace std;

int g; // heap(.data segment)

void func() {
	int a; // stack
	string str; // stack
	int* p = new int; // heap
	delete p;
	int* p2 = new int;
	p2 = nullptr;
}

int main() {
	return 0;
}
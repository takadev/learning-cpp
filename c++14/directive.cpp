#define VAR1 1
#ifdef VAR1
#define VAR2 2
#endif

#if defined(VAR1)
#define VAR3 3
#else
#define VAR4 4
#endif

#include<iostream>
using namespace std;

int main()
{
	int foo = VAR1;
	cout << foo << endl;
	int bar = VAR2;
	cout << bar << endl;
	int hoge = VAR3;
	cout << hoge << endl;
}
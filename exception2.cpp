#include<iostream>
using namespace std;

void hoge(string str) {
	try
	{
		if (str == "f") {
			throw 10.1;
		} else if (str == "i") {
			throw 100;
		} else if (str == "s") {
			throw "string";
		} else {
			throw true;
		}
	}
	catch(const char *e)
	{
		cout << "Exception : " << e << endl;
	}
	catch(double e)
	{
		cout << "Exception : " << e << endl;
	}
	catch(int e)
	{
		cout << "Exception : " << e << endl;
	}
	catch(...)
	{
		cout << "Exception : hoge()" << endl;;
	}
}

int main() {
	hoge("f");
	hoge("i");
	hoge("s");
	hoge("default");
	return 0;
}

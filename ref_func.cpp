#include <array>
#include <string>
#include <iostream>
using namespace std;

class hoge{
private:
	array<int, 5> arr;
	string str;
	int X;
public:
	array<int, 5> & getArr();
	string & getStr();
	int & getX();
} obj ;

array<int, 5> & hoge::getArr() {
	return arr;
}

string & hoge::getStr() {
	return str;
}

int & hoge::getX() {
	return X;
}

int main() {
	cout << "--arr--" << endl;
	cout << &
	obj.getArr() << endl;
	//obj.getArr() = {10, 20, 30, 40, 50};
	array<int, 5> a = obj.getArr();
	cout << a[0] << endl;
	cout << "--str--" << endl;
	cout << &obj.getStr() << endl;
	obj.getStr() = "hoge";
	cout << obj.getStr() << endl;
	cout << "--X--" << endl;
	cout << &obj.getX() << endl;
	obj.getX() = 10;
	cout << obj.getX();
	return 0;
}
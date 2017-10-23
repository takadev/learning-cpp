#include<iostream>
#include<sstream>
#include<map>

using namespace std;

void f(map<int, int>& v, ostringstream& os) {
	os << "size: " << v.size() << '-';
	for(auto& e : v) {
		os << e.first << '-' << e.second << endl;
	}
}

void g(map<int, int> v, ostringstream& os) {
	os << "size: " << v.size() << '-';
	for(auto& e : v) {
		os << e.first << '-' << e.second << endl;
	}
}

map<int, int> mf() {
	map<int, int> s;
	s.insert(make_pair<int, int>(20, 1));
	return s;
}


int main() {
	map<int, int> m;
	m.insert(make_pair<int, int>(10, 5));

	ostringstream os;
	f(m, os);
	cout << os.str();

	ostringstream os2;
	g(mf(), os2);
	cout << os2.str();

	map<int, int> m2 = mf();
	cout << m2[0] << endl;
	cout << m2[1] << endl;
	cout << m2[20] << endl;
	return 0;
}






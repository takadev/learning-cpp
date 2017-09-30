#include <iostream>
#include <string>
using namespace std;

class fuga {
public:
	fuga(bool , string);
};

fuga::fuga(bool bo , string str) {
	cout << bo << endl;
	if (bo) cout << str << '\n';
}

int main() {
	fuga obj[3] = {
		fuga(true , "hoge") ,
		fuga(false , "foo") ,
		fuga(true , "bar")
	};
	return 0;
}
#include<string>
#include<iostream>
using namespace std;

namespace hoge {
	class hoge {
	public:
		void foo();
		hoge() {
			cout << "hoge construct" << endl;
		}
	};
	string str = "hoge str";
	void fuga() {
		cout << "fuga func" << endl;
	}
}

namespace hoge {
	void foo() {
		cout << str << endl;
	}

	namespace moe {
		string str = "moe str";
	}
}

namespace {
	string str = "no name str";
}


int main() {
	hoge::hoge obj;
	cout << hoge::str << endl;
	hoge::fuga();
	hoge::foo();
	cout << hoge::moe::str << endl;
	cout << str << endl;

	string str = "local str";
	cout << str << endl;
	return 0;
}
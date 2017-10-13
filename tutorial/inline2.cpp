#include <string>
#include <iostream>
using namespace std;

class hoge {
public:
	// メンバ関数は自動的にインライン展開される
	int func(int x, string str) {
		cout << str << endl;
		return x + (int)(x * 0.08);
	}
} obj ;

int main() {
	cout << obj.func(100, "hoge2");
	return 0;
}
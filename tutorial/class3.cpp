#include <iostream>
using namespace std;

class hoge {
private:
	int point;
public:
	void setPoint(int i);
	int getPoint(int i);
};

void hoge::setPoint(int i) {
	point = i;
}

int hoge::getPoint(int i) {
	point += i;
	return point;
}

int main() {
	hoge obj;
	obj.setPoint(10);
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		cout << obj.getPoint(i) << "\n";
	}
	return 0;
}
#include<string>
#include<iostream>
using namespace std;

class RGB {
	unsigned char r, g, b;
public:
	RGB(unsigned char r, unsigned char g, unsigned char b) {
		this->r = r;
		this->g = g;
		this->b = b;
	}
	operator int() {
		return (r << 16) + (g << 8) + b;
	}
	operator string() {
		return "#ffff";
	}
};

int main() {
	RGB color1(255, '2', '5');
	RGB color2(125, 100, 5);
	int i = color1;
	cout << i << endl;
	string str = color2;
	cout << str << endl;
	return 0;
}
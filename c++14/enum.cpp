#include<iostream>
#include<string>

using namespace std;

namespace A {
	enum color {
		red,
		bule,
		green,
		yellow,
	};
}

using namespace A;

enum class Test : uint8_t {
	white = 'w',
	black = 'b',
};

struct DateTime {
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
};

int main() {
	cout << color::green << endl;
	Test c = Test::white;
	//
	cout << static_cast<uint8_t>(c) << endl;

	DateTime dt;
	dt.year = 2017;
	dt.month = 10;
	dt.day = 19;
	dt.hour = 17;
	dt.minute = 29;
	dt.second = 15;

	cout << dt.month << dt.day << dt.hour << dt.minute << dt.second << dt.year << endl;

	return 0;
}
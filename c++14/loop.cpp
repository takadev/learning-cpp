#include<iostream>

using namespace std;

int main() {
	for (int i = 0; i < 5; i++) {
		cout << i;
	}
	cout << endl;

	int j = 0;
	while(true) {
		j++;

		switch(j) {
			case 1:
				cout << 1 << endl;
				break;
			case 2:
				cout << 2 << endl;
				break;
			case 3:
				cout << 3 << endl;
				break;
			default:
				cout << 0;
				break;
		}
		if (j % 2 == 0) {
			continue;
		}
		if (j > 10) {
			break;
		}
		cout << j;
	}
	cout << endl;
	goto label1;

label1:
	cout << "label1" << endl;
	goto end;
	return 0;

end:
	cout << "end" << endl;

	int x;
	cin >> x;

	switch(x) {
		case 10:
			cout << "10 dayo" << endl;
			break;
		case 20:
			cout << "20 dayo" << endl;
			break;
		case 30:
			cout << "30 dayo" << endl;
			break;
		default:
			cout << "default dayo" << endl;
			break;
	}

	return 0;
}
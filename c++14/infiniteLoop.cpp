#include<iostream>

using namespace std;

int main() {
    while(true) {
        char x;
        cin >> x;
        cout << x << endl;
        if ((x >= 'A' && x <= 'Z') || (x >= '0' && x <= '9')) {
            cout << "Bye!" << endl;
            break;
        }
    }
    return 0;
}

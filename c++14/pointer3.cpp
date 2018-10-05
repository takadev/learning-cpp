#include<iostream>

using namespace std;

int main() {
    int x = 0;
    int* x_addr = &x;
    cout << *x_addr << endl;
    cout << x_addr << endl;
    return 0;
}

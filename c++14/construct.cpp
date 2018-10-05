#include<iostream>

using namespace std;

struct A {
    int data;
    A(int data) {
        this->data = data;
    }
};

int main() {
    A a = A(100);
    cout << a.data << endl;
    A a2(5);
    cout << a2.data << endl;
    return 0;
}

#include<iostream>

using namespace std;

class Parent {
public:
    int data;
};

class FirstChild : public Parent {
};

class SecondChild : public Parent {
};

int main() {
    FirstChild fc;
    SecondChild sc;
    fc.data = 50;
    sc.data = 20;

    cout << fc.data << endl;
    cout << sc.data << endl;

    return 0;
}

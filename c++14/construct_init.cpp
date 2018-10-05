#include<iostream>

using namespace std;

class Parent {
private:
    int tmp;
    int data;
public:
    Parent(int t) : tmp(t), data(this->tmp) {
        cout << "Parent constructor called" << endl;
        cout << this->tmp << endl;
        cout << this->data << endl;
    }
    
    ~Parent() {
        cout << "Parent destruct called." << endl;
    }

    int getData() {
        return this->data;
    }
};

class Child : public Parent {
public:
    Child() : Parent(20) {
        cout << "Child constructor called" << endl;
    }

    ~Child() {
        cout << "Child destructor called" << endl;
    }
};


int main() {
    Child c;
    cout << c.getData() << endl;
    return 0;
}

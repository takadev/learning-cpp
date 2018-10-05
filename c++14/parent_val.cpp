#include<iostream>

using namespace std;

class Parent {
public:
    int data;
};

class Child : public Parent {
private:
    int data;
public:
    int getChildData() {
        return this->data;
    }
    void setChildData(int data) {
        this->data = data;
    }
    int getParentData() {
        return Parent::data;
    }
    void setParentData(int data) {
        Parent::data = data;
    }
};

int main() {
    Child child;
    child.setChildData(100);
    child.setParentData(10);
    cout << child.getChildData() << endl;
    cout << child.getParentData() << endl;
    return 0;
}

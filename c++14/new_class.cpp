#include<iostream>

class Foo {
private:
    int data;
public:
    int getData() { return data; }
    void setData(int data) {
        this->data = data;
    }
};

int main() {
    Foo foo;
    foo.setData(100);
    int a = foo.getData();
    std::cout << a << std::endl;
    return 0;
}

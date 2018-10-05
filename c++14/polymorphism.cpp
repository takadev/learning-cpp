#include<iostream>

using namespace std;

struct Animal {
    int height;

    ~Animal() {
        cout << "Animal destruct" << endl;
    }
};

struct Dog : public Animal {
    ~Dog() {
        cout << "Dog destruct" << endl;
    }
};

struct Cat : public Animal {
    ~Cat() {
        cout << "Cat destruct" << endl;
    }
};

void func() {
    Dog d;
    Animal* animal = &d;
    animal->height = 50;

    cout << d.height << endl;

    Cat* c = new Cat;
    Animal* canim = c;
    canim->height = 40;

    cout << c->height << endl;
    delete c;
}

int main() {
    func();
    return 0;
}

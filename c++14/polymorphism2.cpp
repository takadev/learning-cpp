#include<iostream>

using namespace std;

struct Animal {
    int height;
    void founc() {}
    ~Animal() {
        cout << "Animal destruct" << endl;
    }
};

struct Dog : public Animal {
};

struct Cat : public Animal {
};

int main() {
    Dog d;
    Animal* animal = &d;
    Cat* c = new Cat;
    Animal* canim = c;

    Animal* animals[] = {c, &d};
    animals[0]->height = 50;
    animals[1]->height = 100;

   for(int i = 0; i < 2; ++i) {
       cout << animals[i]->height << endl;
   }

   delete c;

   return 0;
}

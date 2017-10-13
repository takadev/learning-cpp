#include <string>
#include <iostream>

using namespace std;

struct Animal {
	int height;
	void func(string str="default"){
		cout << "Animal func() " << str << endl;
	}
	~Animal() {
		cout << "Animal dstr" << endl;
	}
};

struct Dog : public Animal {
	~Dog() {
		cout << "Dog dstr" << endl;
	}
};

struct Cat : public Animal {
	~Cat() {
		cout << "Cat dstr" << endl;
	}
};

int main()
{
	Dog d;
	d.height = 100;
	cout << "d.heigth = " << d.height << endl;
	Animal* animal = &d;
	animal->height = 50;
	cout << "animal->heigth = " << animal->height << endl;

	Cat* c = new Cat;
	Animal* cani = c;
	cani->height = 30;
	cout << "cani->height" << cani->height << endl;
	delete c;

	Dog d2;
	Cat c2;
	Animal* animals[] = {&c2, &d2};
	animals[0]->height = 45;
	animals[1]->height = 60;

	for(int i = 0; i < 2; i++) {
		animals[i]->func();
	}

	for(auto it = begin(animals); it != end(animals); it++) {
		(*animals)->func("iterate");
	}

	return 0;
}
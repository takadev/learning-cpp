#include<iostream>

using namespace std;

class Weapon {
protected:
	unsigned int mLevel;
	unsigned int mAttack;
	Weapon(unsigned level, unsigned attack) : mLevel(level), mAttack(attack) {

	}
public:
	Weapon(){}
	virtual void draw() {
		cout << "Weapon" << endl;
	}
};

class Sword : public Weapon {
public:
	Sword(unsigned level, unsigned attack) : Weapon(level, attack) {}
	void draw() override {
		cout << "Sword" << endl;
	}
};

class Dagger : public Weapon {
public:
	Dagger(unsigned level, unsigned attack) : Weapon(level, attack) {}
	void draw() override {
		cout << "Dagger" << endl;
	}
};

class Blade : public Weapon {
public:
	Blade(unsigned int level, unsigned int attack) : Weapon(level, attack) {}
	void draw() override {
		cout << "Blade" << endl;
	}
};

class Loader {
public:
	void load(Weapon* weapon) {
		weapon->draw();
	}
};

int main() {
	Sword* sw = new Sword(50, 60);
	Dagger* dg = new Dagger(1, 20);
	Blade* bd = new Blade(3, 40);
	Loader loader;

	Weapon* weapons[] = {sw, dg, bd};

	for(auto it = begin(weapons); it != end(weapons); it++) {
		loader.load(*it);
		delete(*it);
	}
	return 0;
}
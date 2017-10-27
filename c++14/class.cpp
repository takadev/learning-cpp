#include<iostream>
#include<string>

using namespace std;

class Person {
private:
	string name;
public:
	void setName(string name) {
		this->name = name;
	}
	string& getName() {
		return this->name;
	}
};

class Shape {
private:
	int height;
	int width;
public:
	Shape() : height(0), width(0) {}
	Shape(int h, int w) : height(h), width(w) {}
	Shape(const Shape& s);
	Shape(Shape&& s);
	Shape& operator=(const Shape& s);
	Shape& operator=(Shape&& s);
	int getHeight() {
		return height;
	}
	int getWidth() {
		return width;
	}
};

int main() {
	Person* p = new Person();
	p->setName("taro");
	delete p;

	cout << p->getName() << endl;
	Shape* s = new Shape(10, 20);
	cout << s->getHeight() << endl;
	cout << s->getWidth() << endl;
	delete s;
	return 0;
}
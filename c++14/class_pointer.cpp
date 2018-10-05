#include<iostream>

using namespace std;

struct A {
    int m_x;
};

int main() {
    A a;
    A* p_a = &a;
    a.m_x = 100;
    cout << a.m_x << endl;
    cout << (*p_a).m_x << endl;

    (*p_a).m_x = 50;
    cout << a.m_x << endl;
    return 0;
}

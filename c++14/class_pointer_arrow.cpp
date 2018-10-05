#include<iostream>

using namespace std;

struct A {
    int m_x;
};

int main() {
    A a;
    A* p_a = &a;
    p_a->m_x = 100;
    cout << a.m_x << endl;

    a.m_x = 10;
    cout << p_a->m_x << endl;
    return 0;
}

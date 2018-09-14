#include<iostream>

class array {
    T *a;
    int length;
    array(int len) {
        length = len;
        a = new T[length];
    }

    T& operator[](int i) {
        assert(i >= 0 && i < length);
        return a[i];
    }

    array<T>& operator=(array<T> &b) {
        if (a != NULL) {
            delete[] a;
        }
        a = b.a;
        b.a = NULL;
        length = b.length;
        return *this;
    }
}

class FastArrayStack {
    array<T> a;
    int n;
    int size() {
        return n;
    }

    T get(int i) {
        return a[i];
    }

    T set(int i, T x) {
        T y = a[i];
        a[i] = x;
        return y;
    }

    void add(int i, T x) {
        if (n + 1 >= a.length) {
            resize();
        }
        std::copy_backward(a + i, a + n, a + n + 1);
        a[i] = x;
        n++;
    }
    
    T remove(int i) {
        T x = a[i];
        std::copy_backward(a + i + 1, a + n, a + i);
        n--;
        if (a.length >= 3 * n) {
            resize();
        }
        return x;
    }

    void resize() {
        array<T> b(max(i, 2 * n));
        std::copy(a + 0, a + n, b + 0);
        a = b;
    }
}

